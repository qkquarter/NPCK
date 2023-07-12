// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PJH_EnemyFSM.h"
#include "BossEnemyFSM.generated.h"

/**
 * 
 */
UCLASS()
class NPCK_API UBossEnemyFSM : public UPJH_EnemyFSM
{
	GENERATED_BODY()

public:
	UBossEnemyFSM();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	virtual void IdleState() override;
	virtual void changeState(EEnemyState state) override;
	virtual void setAttackInfos()override;
	virtual void adjustProbability(int32 idx)override;
	virtual void selectIdx()override;
	virtual void AttackState()override;
	virtual void GuardState()override;

	class ABossEnemy* boss;
};
