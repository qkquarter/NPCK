// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NPCK_MoveComponent.generated.h"



UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class NPCK_API UNPCK_MoveComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UNPCK_MoveComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void SetupPlayerInputComponent(class UEnhancedInputComponent* enhancedInputComponent);

	FVector2D MovementVector;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
	float Attckspeed = 0;
	float basespeed = 0;
	UPROPERTY(EditAnywhere, Category = Sound)
		class USoundBase* dashSound;

	UPROPERTY(EditAnywhere, Category = Input)
		class UInputAction* mouseXY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
		class UInputAction* moveKey;
	UPROPERTY(EditAnywhere, Category = Input)
		class UInputAction* dashKey;
	UPROPERTY(EditAnywhere, Category = Input)
		class UInputAction* jumpKey;
	UPROPERTY(EditAnywhere, Category = Input)
		class UInputAction* Crouch;
	UPROPERTY(EditAnywhere, Category = Input)
		class UInputAction* Walk;
	void Dash();
	void DashFinish();
	void InputJump();
	void Crouching();
	void UnCrouching();
	void SetWalk();
	void UnSetWalk();

	void Move(const struct FInputActionValue& value);
	void RotateAxis(const struct FInputActionValue& value);

	//ÆÄÄí¸£
	void GrabLedge();
	void ExitLedge();
	void ClimbLedgeStart();
	void ClimbLedgeFinish();
	void JumpRight(bool jumpR);
	void JumpRightLedge();
	void JumpLeft(bool jumpL);

	
	
	FVector MovetoLocation();
	bool HiptoLedge();

	//ÆÄÄí¸£ º¯¼ö
	FVector heightLocation, wallLocation, wallNormal;
	FName pelvisSocket;
	bool isClimbingLedge, isHanging, canMoveRight, canMoveLeft;
	bool movingRight, movingLeft, canJumpLeft, canJumpRight;
	bool isJumping, canTurnLeft, canTurnRight, canJumpUp, turnedBack;

private:
	float dashDelay = 2;
	float currentTime = 0;
	class ANPCK_Player* me;
	class UNPCK_AnimInstance* anim;
	float dashSpeed = 7;
	bool dashActive = false;
	class UKYI_GrappleComponent* grappling;
	class APlayerController* playerCon;
	class UCharacterMovementComponent* characMoveComp;
};
