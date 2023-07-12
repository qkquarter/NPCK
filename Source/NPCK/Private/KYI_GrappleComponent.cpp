// Fill out your copyright notice in the Description page of Project Settings.


#include "KYI_GrappleComponent.h"
#include "KYI_GrapplePoint.h"
#include <../Plugins/Runtime/CableComponent/Source/CableComponent/Classes/CableComponent.h>
#include <Components/StaticMeshComponent.h>
#include <GameFramework/CharacterMovementComponent.h>
#include <Camera/CameraComponent.h>
#include <Kismet/KismetMathLibrary.h>
#include <../Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputComponent.h>
#include <../Plugins/EnhancedInput/Source/EnhancedInput/Public/InputAction.h>
#include <Kismet/GameplayStatics.h>
#include <Sound/SoundBase.h>
#include <Curves/CurveFloat.h>
#include <Animation/AnimMontage.h>
#include "NPCK_Player.h"

// Sets default values for this component's properties
UKYI_GrappleComponent::UKYI_GrappleComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	//그래플링시 점프 효과음
	ConstructorHelpers::FObjectFinder<USoundBase> tempJump(TEXT("/Script/Engine.SoundWave'/Game/Sounds/GrapplingSound/JumpSound.JumpSound'"));
	if (tempJump.Succeeded())
		jumpSound = tempJump.Object;
	//그래플링 효과음
	ConstructorHelpers::FObjectFinder<USoundBase> tempGrapple(TEXT("/Script/Engine.SoundWave'/Game/Sounds/GrapplingSound/GrappleSound.GrappleSound'"));
	if (tempGrapple.Succeeded())
		grappleSound = tempGrapple.Object;

	//그래플링 그래프
	ConstructorHelpers::FObjectFinder<UCurveFloat> tempAirSpeed(TEXT("/Script/Engine.CurveFloat'/Game/BluePrints/Player/Grap/Animation/Curve/Curve_GrappleSpeedAir_Float.Curve_GrappleSpeedAir_Float'"));
	if (tempAirSpeed.Succeeded())
		airSpeedCurve = tempAirSpeed.Object;
	ConstructorHelpers::FObjectFinder<UCurveFloat> tempGroundSpeed(TEXT("/Script/Engine.CurveFloat'/Game/BluePrints/Player/Grap/Animation/Curve/Curve_GrappleSpeedGround_Float.Curve_GrappleSpeedGround_Float'"));
	if (tempGroundSpeed.Succeeded())
		groundSpeedCurve = tempGroundSpeed.Object;
	ConstructorHelpers::FObjectFinder<UCurveFloat> tempAirHeight(TEXT("/Script/Engine.CurveFloat'/Game/BluePrints/Player/Grap/Animation/Curve/Curve_GrappleSpeedGround_Float.Curve_GrappleSpeedGround_Float'"));
	if (tempAirHeight.Succeeded())
		airHeightOffsetCurve = tempAirHeight.Object;
	ConstructorHelpers::FObjectFinder<UCurveFloat> tempgroundHeight(TEXT("/Script/Engine.CurveFloat'/Game/BluePrints/Player/Grap/Animation/Curve/Curve_GrappleSpeedGround_Float.Curve_GrappleSpeedGround_Float'"));
	if (tempAirSpeed.Succeeded())
		groundHeightOffsetCurve = tempAirSpeed.Object;
	ConstructorHelpers::FObjectFinder<UCurveFloat> tempAirRopeLen(TEXT("/Script/Engine.CurveFloat'/Game/BluePrints/Player/Grap/Animation/Curve/Curve_RopeLengthAir_Float.Curve_RopeLengthAir_Float'"));
	if (tempAirRopeLen.Succeeded())
		airRopeLength = tempAirRopeLen.Object;
	ConstructorHelpers::FObjectFinder<UCurveFloat> tempGroundRopeLen(TEXT("/Script/Engine.CurveFloat'/Game/BluePrints/Player/Grap/Animation/Curve/Curve_RopeLengthGround_Float.Curve_RopeLengthGround_Float'"));
	if (tempGroundRopeLen.Succeeded())
		groundRopeLength = tempGroundRopeLen.Object;
	ConstructorHelpers::FObjectFinder<UCurveFloat> tempAirRopePos(TEXT("/Script/Engine.CurveFloat'/Game/BluePrints/Player/Grap/Animation/Curve/Curve_RopePositionAir_Float.Curve_RopePositionAir_Float'"));
	if (tempAirRopePos.Succeeded())
		airRopePosition = tempAirRopePos.Object;
	ConstructorHelpers::FObjectFinder<UCurveFloat> tempGroundRopePos(TEXT("/Script/Engine.CurveFloat'/Game/BluePrints/Player/Grap/Animation/Curve/Curve_RopePositionGround_Float.Curve_RopePositionGround_Float'"));
	if (tempGroundRopePos.Succeeded())
		groundRopePosition = tempGroundRopePos.Object;

	//그래플링 애니메이션
	ConstructorHelpers::FObjectFinder<UAnimMontage> tempGrappleAnim(TEXT("/Script/Engine.AnimMontage'/Game/BluePrints/Player/Grap/Animation/KYI_Grapple.KYI_Grapple'"));
	if (tempGrappleAnim.Succeeded())
		grappleAnim = tempGrappleAnim.Object;
}


// Called when the game starts
void UKYI_GrappleComponent::BeginPlay() {
	Super::BeginPlay();
	player = Cast<ANPCK_Player>(GetOwner());
	characMesh = player->GetMesh();
}


// Called every frame
void UKYI_GrappleComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	CheckForGrapplePoint();
	if (inGrapplingAnimation) {
		MoveRope();
		if (movingWithGrapple) {
			GrapplingMovement();
		}
	}

}

void UKYI_GrappleComponent::SetupPlayerInputComponent(class UEnhancedInputComponent* EnhancedInputComponent) {
	EnhancedInputComponent->BindAction(IA_grapple, ETriggerEvent::Triggered, this, &UKYI_GrappleComponent::Grapple);
}

void UKYI_GrappleComponent::Grapple() {
	if (grapplePointRef && player->NPCKPlayerState->RequestPlayerState(EPlayerState::Grappling)) {
		bool compare1, compare2;
		compare2 = currentGrapplePoint != grapplePointRef;
		FVector distance = player->GetActorLocation() - grapplePointRef->GetActorLocation();
		compare1 = distance.Length() <= grappleThrowDistance;
		if (compare1 && compare2) {
			if (movingWithGrapple) {
				player->LaunchCharacter(UKismetMathLibrary::GetDirectionUnitVector(player->GetActorLocation(), grapplingPosition), false, false);
			}
			inGrapplingAnimation = true;
			movingWithGrapple = false;
			currentGrapplePoint = grapplePointRef;
			grapplingPosition = currentGrapplePoint->landingZone->GetComponentLocation() + FVector(0, 0, 110);
			FRotator rotate = UKismetMathLibrary::FindLookAtRotation(player->GetActorLocation(), grapplingPosition);
			player->SetActorRotation(FRotator(0,rotate.Yaw, 0));
			ropeBaseLength = (player->GetActorLocation() - grapplingPosition).Length();
			currentGrapplePoint->Use();
			if (player->GetCharacterMovement()->IsFalling()) {
				//characMesh->GetAnimInstance()->Montage_Play(grappleAnim, 1, EMontagePlayReturnType::Duration, 0, true);
					player->PlayAnimMontage(grappleAnim, 1, FName("GrappleAir"));
				
			}
			else player->PlayAnimMontage(grappleAnim, 1, FName("GrappleGround"));
				
		}
	}
}

void UKYI_GrappleComponent::ThrowRope() {
	UGameplayStatics::PlaySound2D(GetWorld(), grappleSound);
}

void UKYI_GrappleComponent::ActivateGrapplePoint() {
	if (detectedActor) {
		FHitResult hitInfo;
		FCollisionQueryParams params;
		params.AddIgnoredActor(player);
		GetWorld()->LineTraceSingleByChannel(hitInfo, player->cam->GetComponentLocation(), detectedActor->GetActorLocation(), ECollisionChannel::ECC_Visibility, params);
		if (hitInfo.GetActor() == detectedActor) {
			if (detectedActor != grapplePointRef) {
				DeactivateGrapplePointRef();
				grapplePointRef = Cast<AKYI_GrapplePoint>(detectedActor);
				grapplePointRef->Activate(player);
			}
		}
		else {
			DeactivateGrapplePointRef();
		}
	}
}

void UKYI_GrappleComponent::DeactivateGrapplePointRef() {
	if (grapplePointRef) {
		grapplePointRef->Deactivate();
		grapplePointRef = nullptr;
	}
}

void UKYI_GrappleComponent::RopeVisibility(bool visible) {
	player->rope->SetVisibility(visible);
	player->kunai->SetVisibility(visible);
}

void UKYI_GrappleComponent::GrapplingMovement() {
	montagePosition = characMesh->GetAnimInstance()->Montage_GetPosition(characMesh->GetAnimInstance()->GetCurrentActiveMontage());
	float lerpAlpha = 0, zlocation = 0;
	if (characMesh->GetAnimInstance()->GetCurrentActiveMontage()->GetName().Contains("ground")) {
		lerpAlpha = groundSpeedCurve->GetFloatValue(montagePosition);
		zlocation = groundHeightOffsetCurve->GetFloatValue(montagePosition);
	}
	else {
		lerpAlpha = airSpeedCurve->GetFloatValue(montagePosition);
		zlocation = airHeightOffsetCurve->GetFloatValue(montagePosition);
	}
	FVector newLocation = UKismetMathLibrary::VLerp(startingPosition, grapplingPosition, lerpAlpha);
	newLocation += FVector(0, 0, zlocation);
	player->SetActorLocation(newLocation);
}


void UKYI_GrappleComponent::CheckForGrapplePoint() {
	TArray<FHitResult> hitInfos;
	FCollisionQueryParams params;
	params.AddIgnoredActor(player);
	FCollisionObjectQueryParams objectQuerry;
	objectQuerry.AddObjectTypesToQuery(ECC_GameTraceChannel5);
	bool isHit = GetWorld()->SweepMultiByObjectType(hitInfos, player->GetActorLocation(), player->GetActorLocation(), FQuat::Identity, objectQuerry, FCollisionShape::MakeSphere(detectionRadius), params);
	if (isHit) {
		highestDotProduct = 0.7f;
		for (FHitResult& hitInfo : hitInfos) {
			FVector unitDirection = UKismetMathLibrary::GetDirectionUnitVector(player->cam->GetComponentLocation(), hitInfo.GetActor()->GetActorLocation());
			float check = UKismetMathLibrary::Dot_VectorVector(player->cam->GetForwardVector(), unitDirection);
			if (check > highestDotProduct) {
				detectedActor = hitInfo.GetActor();
				highestDotProduct = check;
			}
			else {
				DeactivateGrapplePointRef();
			}
		}
		ActivateGrapplePoint();
	}
	else {
		DeactivateGrapplePointRef();
	}
}

void UKYI_GrappleComponent::ResetMovement() {
	movingWithGrapple = false;
	currentGrapplePoint = nullptr;
	player->GetCharacterMovement()->GravityScale = 2.2;
	inGrapplingAnimation = false;
}

void UKYI_GrappleComponent::StartGrapplingMovement() {
	UGameplayStatics::PlaySound2D(GetWorld(), jumpSound);
	UCharacterMovementComponent* movement = player->GetCharacterMovement();
	movement->GravityScale = 0;
	movement->StopMovementImmediately();
	startingPosition = player->GetActorLocation();
	movement->SetMovementMode(EMovementMode::MOVE_Falling, 0);
	movingWithGrapple = true;
}

void UKYI_GrappleComponent::MoveRope() {
	auto test1 = characMesh->GetAnimInstance();
	auto test2 = test1->GetCurrentActiveMontage();
	
	montagePosition = characMesh->GetAnimInstance()->Montage_GetPosition(characMesh->GetAnimInstance()->GetCurrentActiveMontage());
	float lerpAlpha = 0, ropeLength = 0;
	
	if (characMesh->GetAnimInstance()->GetCurrentActiveMontage()->GetSectionName(0).ToString().Contains("ground")) {
		ropeLength = groundRopeLength->GetFloatValue(montagePosition);
		lerpAlpha = groundRopePosition->GetFloatValue(montagePosition);
	}
	else {
		ropeLength = airRopeLength->GetFloatValue(montagePosition);
		lerpAlpha = airRopePosition->GetFloatValue(montagePosition);
	}
	player->rope->CableLength = ropeBaseLength * ropeLength;
	FVector newLocation = UKismetMathLibrary::VLerp(characMesh->GetSocketLocation(FName("hand_l")), currentGrapplePoint->GetActorLocation(), lerpAlpha);
	player->kunai->SetWorldLocation(newLocation);
}
