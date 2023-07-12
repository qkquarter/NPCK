#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "NPCK_PlayerState.generated.h"

UENUM(BlueprintType)
enum class EPlayerState : uint8
{
    IdleMove = 0,
	Combat = 1,
	Dash = 2,
	Jump = 3,
	Attack = 4,
	Grappling = 5,
	Parry = 6,
	Hit = 7,
    Finisher = 8,
    Die  = 9
};

/**
 *
 */
UCLASS()
class NPCK_API ANPCK_PlayerState : public APlayerState
{
    GENERATED_BODY()

public:
  ANPCK_PlayerState();
  
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Player State")
	void SetPlayerState(EPlayerState NewState);
	bool RequestPlayerState(EPlayerState Requeststate);

	EPlayerState TemprequestState = EPlayerState::IdleMove;
	void UpdateState();
	float Emptytimer;

public:
	//void UpdateState(EPlayerState Currentstate);
	void OnIdleMove();
	void OnAttack();
	void OnHit();
	void OnFinisher();
	void OnGrappling();
	//void OnGuard();
	void OnParry();
	void OnDash();
	void OnJump();
	void OnCombat();
	//void OnLockOn();
	void OnDie();


	void SetPlayer(class ANPCK_Player* StateOwner);
public:
	bool CanChangeState = true;
	float HP = 100;
	float Posture = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ANPCK_Player* Player;
	class APlayerController* PlayerCon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerState Mystate = EPlayerState::IdleMove;

	FInputModeUIOnly UIMode;
	FInputModeGameOnly GameMode;
	FInputModeGameAndUI GameAndUIMode;
	
	double StartingRotation;
	float ClampRotation;
	bool AttackOnce = true;
	bool FinisherOnce;

	bool UIOnce;
};