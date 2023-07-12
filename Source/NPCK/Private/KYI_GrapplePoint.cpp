// Fill out your copyright notice in the Description page of Project Settings.

#include "KYI_GrapplePoint.h"
#include "KYI_DetectionNode.h"
#include <Kismet/KismetSystemLibrary.h>
#include <Components/StaticMeshComponent.h>
#include <Components/BoxComponent.h>
#include <UMG/Public/Components/WidgetComponent.h>
#include <Components/PrimitiveComponent.h>
#include <Engine/HitResult.h>
#include <Engine/EngineTypes.h>
#include <Kismet/KismetMathLibrary.h>
#include <UMG/Public/Components/Image.h>
#include "KYI_GrappleComponent.h"
#include "NPCK_Player.h"

// Sets default values
AKYI_GrapplePoint::AKYI_GrapplePoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	detection = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Detection"));
	SetRootComponent(detection);
	deactivateZone = CreateDefaultSubobject<UBoxComponent>(TEXT("Deactivate Zone"));
	deactivateZone->SetRelativeLocation(FVector(12.47702, -542.509216, 100.022079));
	deactivateZone->SetBoxExtent(FVector(500, 500, 200));
	deactivateZone->SetupAttachment(detection);

	landingZone = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Landing Zone"));
	landingZone->SetRelativeLocation(FVector(0, -114.682098, -88.567459));
	landingZone->SetupAttachment(detection);

	widgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
	widgetComp->SetRelativeLocation(FVector(0, 2, -7));
	widgetComp->SetWidgetClass(UKYI_DetectionNode::StaticClass());
	widgetComp->SetupAttachment(detection);
}

// Called when the game starts or when spawned
void AKYI_GrapplePoint::BeginPlay()
{
	Super::BeginPlay();
	widgetRef = Cast<UKYI_DetectionNode>(widgetComp->GetUserWidgetObject());
	widgetRef->SetVisibility(ESlateVisibility::Hidden);
	deactivateZone->OnComponentBeginOverlap.AddDynamic(this, &AKYI_GrapplePoint::BeginOverlap);
	deactivateZone->OnComponentEndOverlap.AddDynamic(this, &AKYI_GrapplePoint::EndOverlap);
}

// Called every frame
void AKYI_GrapplePoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (active && !used) {
		CheckDistanceFromPlayer();
	}
}

void AKYI_GrapplePoint::Activate(ANPCK_Player* player) {
	if (!used) {
		playerRef = player;
		active = true;
		widgetRef->SetVisibility(ESlateVisibility::Visible);
	}
}
void AKYI_GrapplePoint::Deactivate() {
	if (!used) {
		active = false;
		widgetRef->SetVisibility(ESlateVisibility::Hidden);
		widgetRef->StopAllAnimations();
	}
}
void AKYI_GrapplePoint::CheckDistanceFromPlayer() {
	float length = UKismetMathLibrary::Vector_Distance(playerRef->GetActorLocation(), GetActorLocation());
	float size = UKismetMathLibrary::MapRangeClamped(length, playerRef->grappleComp->grappleThrowDistance, playerRef->grappleComp->detectionRadius, 80, 100);
	widgetRef->filling->SetDesiredSizeOverride(FVector2D(size, size));
	FLinearColor color;
	if (size == 80) {
		color = FLinearColor::Green;
	}
	else {
		color = FLinearColor::Gray;
	}
	widgetRef->filling->SetColorAndOpacity(color);
}
void AKYI_GrapplePoint::Use() {
	used = true;
	widgetRef->PlayAnimation(widgetRef->NodeUse, 0, 1, EUMGSequencePlayMode::Forward, 1, true);
	FLatentActionInfo info;
	info.CallbackTarget = this;
	info.ExecutionFunction = TEXT("Reactivate");
	info.Linkage = 0;
	info.UUID = GetUniqueID();
	UKismetSystemLibrary::Delay(GetWorld(), 2, info);
	//UKismetSystemLibrary::K2_SetTimer(GetWorld(), TEXT("Reactivate"), 2, false, 0, 0);
}
void AKYI_GrapplePoint::Reactivate() {
	used = false;
}

void AKYI_GrapplePoint::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	ANPCK_Player* compare = Cast<ANPCK_Player>(OverlappedComponent);
	if (playerRef == compare) {
		detection->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void AKYI_GrapplePoint::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
	ANPCK_Player* compare = Cast<ANPCK_Player>(OverlappedComponent);
	if (playerRef == compare) {
		detection->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	}
}
