// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PJH_EnemyFSM.h"
#include "NormalEnemyFSM.generated.h"

/**
 * 
 */
UCLASS()
class NPCK_API UNormalEnemyFSM : public UPJH_EnemyFSM
{
	GENERATED_BODY()
	
public:
	UNormalEnemyFSM();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void IdleState();
	virtual void GuardState();
	virtual void AttackState();
	virtual void changeState(EEnemyState state);
	virtual void setAttackInfos();
	virtual void adjustProbability(int32 idx);
	virtual void selectIdx();

	


};
