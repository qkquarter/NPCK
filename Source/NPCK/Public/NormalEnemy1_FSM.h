// Fill out your copyright notice in the Description page of Project Settings.
// Created by PJH 2023.03.28

#pragma once

#include "CoreMinimal.h"
#include "PJH_EnemyFSM.h"
#include "NormalEnemy1_FSM.generated.h"

UCLASS()
class NPCK_API UNormalEnemy1_FSM : public UPJH_EnemyFSM
{
	GENERATED_BODY()
	
public:
	UNormalEnemy1_FSM();

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
