// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PJH_EnemyBase.h"
#include "BossEnemy.generated.h"

/**
 * 
 */
UCLASS()
class NPCK_API ABossEnemy : public APJH_EnemyBase
{
	GENERATED_BODY()

public:
	ABossEnemy();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UserInterface)
		TSubclassOf<class UBoss_UI> BossUIContainer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UserInterface)
		class UBoss_UI* BossUI;

	UPROPERTY(EditAnywhere)
	class USoundBase* alertSound;
	
	UPROPERTY(EditAnywhere)
	class USoundBase* postureBrokenSound;

	class UBossEnemyFSM* bossFSM;
};
