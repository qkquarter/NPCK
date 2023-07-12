// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCK_MoveComponent.h"
#include "NPCK_Player.h"
#include <../Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputComponent.h>
#include <../Plugins/EnhancedInput/Source/EnhancedInput/Public/InputAction.h>
#include "KYI_GrappleComponent.h"
#include <GameFramework/PlayerController.h>
#include <Camera/CameraComponent.h>
#include <GameFramework/SpringArmComponent.h>
#include <GameFramework/CharacterMovementComponent.h>
#include <Kismet/KismetMathLibrary.h>
#include <Kismet/KismetSystemLibrary.h>
#include <Components/CapsuleComponent.h>
#include "CSC_LockOnComponent.h"
#include "NPCK_AnimInstance.h"
#include <UMG/Public/Components/BackgroundBlur.h>
#include "NPCK_MainUI.h"
#include <Components/PostProcessComponent.h>
#include <Sound/SoundBase.h>
#include <Kismet/GameplayStatics.h>

// Sets default values for this component's properties
UNPCK_MoveComponent::UNPCK_MoveComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<USoundBase> tempSound(TEXT("/Script/Engine.SoundWave'/Game/Sounds/Swoosh_Sound.Swoosh_Sound'"));
	if (tempSound.Succeeded()) {
		dashSound = tempSound.Object;
	}
	// ...
}


// Called when the game starts
void UNPCK_MoveComponent::BeginPlay()
{
	Super::BeginPlay();
	me = Cast<ANPCK_Player>(GetOwner());
	anim = Cast<UNPCK_AnimInstance>(me->GetMesh()->GetAnimInstance());

	playerCon = GetWorld()->GetFirstPlayerController();
	characMoveComp = me->GetCharacterMovement();
	grappling = me->grappleComp;


	me->GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	me->GetCharacterMovement()->RotationRate = FRotator(0.0f, 45, 0.0f); // ...at this rotation rate

	me->bUseControllerRotationYaw = true;
	me->bUseControllerRotationRoll = false;
	me->bUseControllerRotationPitch = false;
	me->springArm->bUsePawnControlRotation = true;
	me->cam->bUsePawnControlRotation = false;
	me->JumpMaxCount = 2;
}


// Called every frame
void UNPCK_MoveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (me->NPCKPlayerState->Mystate == EPlayerState::Attack)
	{
		Attckspeed = FMath::Clamp(UKismetMathLibrary::FInterpTo(Attckspeed, 0.2, DeltaTime, 1), 0.2f, 0.6f);
	}
	else
	{
		basespeed = FMath::Clamp(UKismetMathLibrary::FInterpTo(basespeed, 0.6, DeltaTime, 1), 0.2f, 0.6f);
	}
	

	

	if (currentTime > dashDelay) {
		dashActive = false;
		currentTime = 0;
	}
	else {
		currentTime += DeltaTime;
	}
	
}

void UNPCK_MoveComponent::SetupPlayerInputComponent(UEnhancedInputComponent* enhancedInputComponent) {

	if (enhancedInputComponent != nullptr)
	{
		enhancedInputComponent->BindAction(moveKey, ETriggerEvent::Triggered, this, &UNPCK_MoveComponent::Move);
		enhancedInputComponent->BindAction(mouseXY, ETriggerEvent::Triggered, this, &UNPCK_MoveComponent::RotateAxis);
		enhancedInputComponent->BindAction(dashKey, ETriggerEvent::Started, this, &UNPCK_MoveComponent::Dash);
		enhancedInputComponent->BindAction(dashKey, ETriggerEvent::Completed, this, &UNPCK_MoveComponent::DashFinish);
		enhancedInputComponent->BindAction(jumpKey, ETriggerEvent::Started, this, &UNPCK_MoveComponent::InputJump);
		enhancedInputComponent->BindAction(Crouch, ETriggerEvent::Started, this, &UNPCK_MoveComponent::Crouching);
		enhancedInputComponent->BindAction(Crouch, ETriggerEvent::Completed, this, &UNPCK_MoveComponent::UnCrouching);
		enhancedInputComponent->BindAction(Walk, ETriggerEvent::Started, this, &UNPCK_MoveComponent::SetWalk);
		enhancedInputComponent->BindAction(Walk, ETriggerEvent::Completed, this, &UNPCK_MoveComponent::UnSetWalk);
	}
}

void UNPCK_MoveComponent::Dash() {
	if (!dashActive) {
		UGameplayStatics::PlaySound2D(GetWorld(), dashSound, 2);
		dashActive = true;
		me->LaunchCharacter(me->GetVelocity() * dashSpeed, true, true);
		me->postProcess->SetVisibility(true);
	}
}

void UNPCK_MoveComponent::DashFinish() {
	me->postProcess->SetVisibility(false);
}

void UNPCK_MoveComponent::InputJump() {
if (me->JumpCurrentCount < 2)
{
	me->JumpCurrentCount++;
	me->Jump();
}
	
}

void UNPCK_MoveComponent::Crouching() {
	anim->isCrouching = true;

}
void UNPCK_MoveComponent::UnCrouching() {
	anim->isCrouching = false;

}

void UNPCK_MoveComponent::SetWalk() {
	anim->isWalk = true;

}
void UNPCK_MoveComponent::UnSetWalk() {
	anim->isWalk = false;


}



void UNPCK_MoveComponent::Move(const FInputActionValue& value) {
	 MovementVector = value.Get<FVector2D>();
	 anim->MoveValue = MovementVector;
	 //// find out which way is forward
	 const FRotator Rotation = playerCon->GetControlRotation();
	 const FRotator YawRotation(0, Rotation.Yaw, 0);
	//UE_LOG(LogTemp, Warning, TEXT("ssss"));
	
	//// get forward vector
	FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	//// get right vector 
	FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	FVector MovementDirection = ForwardDirection * MovementVector.Y + RightDirection * MovementVector.X;
	//// add movement 
	me->AddMovementInput(MovementDirection.GetSafeNormal(), 1.f);
}
void UNPCK_MoveComponent::RotateAxis(const FInputActionValue& value)
{
	FVector2D LookAxisVector = value.Get<FVector2D>();
	
	float LookAxisLength = LookAxisVector.Size(); // LookAxisVector 벡터의 길이 계산
	

	if (me->NPCKPlayerState->Mystate == EPlayerState::Attack)
	{    
		
		// Attack 상태에서는 회전 속도를 느리게 조절
		me->AddControllerPitchInput(LookAxisVector.Y * -1.0f *Attckspeed);
		if (!(me->loComp->bIsLockedOn) && me->loComp->LockedOnActor == nullptr)
		{  
   
			me->AddControllerYawInput(LookAxisVector.X  * Attckspeed);
		}
	}
	else
	{
		
		 
		// 기본 회전 속도로 조절
		me->AddControllerPitchInput(LookAxisVector.Y * -1.0f * basespeed);
		if (!(me->loComp->bIsLockedOn) && me->loComp->LockedOnActor == nullptr)
		{
			me->AddControllerYawInput(LookAxisVector.X * basespeed);
		}
	}
}

void UNPCK_MoveComponent::GrabLedge() {
	characMoveComp->SetMovementMode(MOVE_Flying);
	isHanging = true;
	FRotator temp = UKismetMathLibrary::MakeRotFromX(wallNormal);
	FRotator rot = FRotator(temp.Pitch, temp.Yaw - 180, temp.Roll);
	FLatentActionInfo latentInfo;
	UKismetSystemLibrary::MoveComponentTo(me->GetCapsuleComponent(), MovetoLocation(), rot, false, false, 0.13f, false, EMoveComponentAction::Move, latentInfo);
	me->GetCharacterMovement()->StopMovementImmediately();
}

void UNPCK_MoveComponent::ExitLedge() {
	characMoveComp->SetMovementMode(MOVE_Walking);
	isHanging = false;
}

void UNPCK_MoveComponent::ClimbLedgeStart() {
	if (isClimbingLedge) {
		ClimbLedgeFinish();
		characMoveComp->SetMovementMode(MOVE_Flying);
		isClimbingLedge = true;
		isHanging = false;
	}
}

void UNPCK_MoveComponent::ClimbLedgeFinish() {
	isClimbingLedge = true;
	characMoveComp->SetMovementMode(MOVE_Walking);
}

void UNPCK_MoveComponent::JumpRight(bool jumpR) {
	isJumping = jumpR;
	characMoveComp->StopMovementImmediately();
	isJumping = false;
}

void UNPCK_MoveComponent::JumpRightLedge() {
	float right = me->GetInputAxisValue(TEXT("Input_Move"));
	if (right > 0) {
		if (!isJumping) {
			characMoveComp->SetMovementMode(MOVE_Flying);
			JumpRight(true);
			isJumping = true;
			isHanging = true;
		}
	}
}

void UNPCK_MoveComponent::JumpLeft(bool jumpL) {
	isJumping = jumpL;
	characMoveComp->StopMovementImmediately();
	isJumping = false;
}



FVector UNPCK_MoveComponent::MovetoLocation() {
	return FVector(wallNormal.X + wallLocation.X, wallNormal.Y + wallLocation.Y, heightLocation.Z - 120.0f);
}

bool UNPCK_MoveComponent::HiptoLedge() {
	float range = me->GetMesh()->GetSocketLocation(pelvisSocket).Z - heightLocation.Z;
	return UKismetMathLibrary::InRange_FloatFloat(range, -50.0f, 0.0f, true, true);
}