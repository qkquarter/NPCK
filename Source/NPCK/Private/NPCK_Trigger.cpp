// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCK_Trigger.h"
#include <Components/BoxComponent.h>
#include <Kismet/GameplayStatics.h>
#include <Sound/SoundBase.h>

// Sets default values
ANPCK_Trigger::ANPCK_Trigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	triggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger Box"));
}

// Called when the game starts or when spawned
void ANPCK_Trigger::BeginPlay() {
	Super::BeginPlay();
	triggerBox->OnComponentBeginOverlap.AddDynamic(this, &ANPCK_Trigger::OnOverlapBegin);
}


// Called every frame
void ANPCK_Trigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANPCK_Trigger::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	UGameplayStatics::SetGamePaused(GetWorld(), true);
}
