// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NPCK_MainUI.generated.h"

/**
 * 
 */
UCLASS()
class NPCK_API UNPCK_MainUI : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidget))
	class UProgressBar* HealthProgressBar;

	UPROPERTY(meta = (BindWidget))
	class UProgressBar* PostureProgressBar;

	void NativeConstruct() override;
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	float GetHealthPercentage();
	float GetPosturePercentage();

	float maxHealth = 0;
	float curHealth = 0;
	float maxPosture = 0;
	float curPosture = 0;

	void setHealth(float hp);
	void setPosture(float po);
};
