// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PJH_EnemyFSM.h"
#include "PJH_EnemyBaseAnim.generated.h"


/**
 * 
 */
UCLASS()
class NPCK_API UPJH_EnemyBaseAnim : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeBeginPlay() override ;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	//현재상태
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		EEnemyState state = EEnemyState::Idle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		bool bAttack = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		bool bVulnerable = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class APJH_EnemyBase* me;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class UAnimMontage* hitMontage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 attackIdx;

	UFUNCTION()
		void AnimNotify_AttackEnd();

	UFUNCTION()
		void AnimNotify_AttackStart();

	UFUNCTION()
		void AnimNotify_SetAttackFalse();

	UFUNCTION()
		void AnimNotify_VulnerableEnd();

	UFUNCTION()
		void AnimNotify_HitEnd();

	void playHitMontage();
	void changeHitMontageSection();

	// 에너미 처형 몽타주
	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = Montage)
		class UAnimMontage* Enemy_FinisherMontage;
	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category = Montage)
		// 에너미 암살 몽타주
		class UAnimMontage* Enemy_assassinationMontage;
};
