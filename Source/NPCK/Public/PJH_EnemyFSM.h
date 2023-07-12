// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CSC_PlayerInterFace.h"
#include "PJH_EnemyFSM.generated.h"

UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	Idle,
	Move,
	Attack,
	Guard,	// 패리 포함
	Damaged,
	Vulnerable, // 인살 상태
	Die
};
USTRUCT(BlueprintType)
struct FAttackData {
	GENERATED_BODY()

public:
	float damage;
	float postureDamage;
	bool isParryable;
	bool isGuardable;
	float attackDelay;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NPCK_API UPJH_EnemyFSM : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPJH_EnemyFSM();
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = FSM)
	EEnemyState mState = EEnemyState::Idle;
	
	// 가상함수
	virtual void IdleState() ;
	 void MoveState() ;
	
	 void DamagedState();
	 void VulnerableState() ;
	 void DieState();
	// void UnderAttack(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, float damage, float posture, float Imfact, bool isParryable);
	 void receiveDamage(float damage, float postureDamage);
	 bool checkRange(float distance);
	 bool isWaitComplete(float delayTime);
	
	virtual void GuardState();
	virtual void AttackState();
	virtual void changeState(EEnemyState state);
	virtual void setAttackInfos();
	virtual void adjustProbability(int32 idx);
	virtual void selectIdx();
	


public:
	TArray<FAttackData> attackInfos;
	TArray<float> typeProbability;
	int32 attackIdx = 0;
	TArray<FAttackData> getAttackInfos();
	
	float searchRange = 500.0f;
	float attackRange = 100.0f;
	FVector destination;


	class APJH_EnemyBase* me;
	class AAIController* ai;
	class UPJH_EnemyBaseAnim*  anim;
	class ANPCK_Player* target;

	// 경과 시간 계산 변수
	float currentTime = 0;
	bool targetOn = false; // 적 포착시 true
	bool isGuard = false;
	bool isVulnerable = false;

};
