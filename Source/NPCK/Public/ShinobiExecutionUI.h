// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShinobiExecutionUI.generated.h"

/**
 * 
 */
UCLASS()
class NPCK_API UShinobiExecutionUI : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void NativeConstruct() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidgetAnim), Transient)
	class UWidgetAnimation* NewAnimation;

	FWidgetAnimationDynamicEvent animationEnd;

	UFUNCTION()
	void endAnimation();
};
