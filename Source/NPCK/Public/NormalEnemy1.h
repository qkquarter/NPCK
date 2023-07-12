// Fill out your copyright notice in the Description page of Project Settings.
// Created by PJH 2023.03.28
// this is an elite monster

#pragma once

#include "CoreMinimal.h"
#include "PJH_EnemyBase.h"
#include "NormalEnemy1.generated.h"

/**
 * 
 */
UCLASS()
class NPCK_API ANormalEnemy1 : public APJH_EnemyBase
{
	GENERATED_BODY()
	
public:
	ANormalEnemy1();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UserInterface)
		TSubclassOf<class UNormalEnemyUI> EnemyUIContainer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UserInterface)
		class UWidgetComponent* EnemyUI;
	
	class UNormalEnemyUI* test;
};
