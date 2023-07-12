// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PJH_EnemyBaseAnim.h"
#include "BossEnemyFSM.h"
#include "BossEnemyAnim.generated.h"

/**
 * 
 */
UCLASS()
class NPCK_API UBossEnemyAnim : public UPJH_EnemyBaseAnim
{
	GENERATED_BODY()

public:
	void NativeBeginPlay() override;
	void NativeUpdateAnimation(float DeltaSeconds) override;

	////현재상태
	//UPROPERTY(EditAnywhere, BlueprintReadOnly)
	//	EEnemyState state = EEnemyState::Idle;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly)
	//	bool bAttack = false;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly)
	//	bool bVulnerable = false;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly)
	//	class ABossEnemy* me;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly)
	//	class UAnimMontage* hitMontage;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly)
	//	int32 attackIdx;

	//UFUNCTION()
	//	void AnimNotify_AttackEnd();

	//UFUNCTION()
	//	void AnimNotify_AttackStart();

	//UFUNCTION()
	//	void AnimNotify_SetAttackFalse();

	//UFUNCTION()
	//	void AnimNotify_VulnerableEnd();

	//UFUNCTION()
	//	void AnimNotify_HitEnd();

	//void playHitMontage();
	//void changeHitMontageSection();
};
