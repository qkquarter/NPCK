// Fill out your copyright notice in the Description page of Project Settings.
// Created by PJH 2023.03.28

#pragma once

#include "CoreMinimal.h"
#include "PJH_EnemyBaseAnim.h"
#include "NormalEnemy1_FSM.h"
#include "NormalEnemy1_Anim.generated.h"


UCLASS()
class NPCK_API UNormalEnemy1_Anim : public UPJH_EnemyBaseAnim
{
	GENERATED_BODY()
	
public:
	void NativeBeginPlay() override;
	void NativeUpdateAnimation(float DeltaSeconds) override;


};
