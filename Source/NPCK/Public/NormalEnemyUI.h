// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NormalEnemyUI.generated.h"

/**
 * 
 */
UCLASS()
class NPCK_API UNormalEnemyUI : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidget))
		class UProgressBar* EnemyHealthProgressBar;

	UPROPERTY(meta = (BindWidget))
		class UProgressBar* PostureProgressBar;

	void NativeConstruct() override;
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	float maxHealth = 0;
	float curHealth = 0;
	float maxPosture = 0;
	float curPosture = 0;

	class APJH_EnemyBase* enemy;

	void setHealthPosutre(float Health, float Posture);
	float GetHealthPercentage();
	float GetPosturePercentage();
	void init(APJH_EnemyBase* owner);
};
