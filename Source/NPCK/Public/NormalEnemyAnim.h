// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PJH_EnemyBaseAnim.h"

#include "NormalEnemyAnim.generated.h"

/**
 * 
 */
UCLASS()
class NPCK_API UNormalEnemyAnim : public UPJH_EnemyBaseAnim
{
	GENERATED_BODY()

public:
	void NativeBeginPlay() override;
	void NativeUpdateAnimation(float DeltaSeconds) override;


};
