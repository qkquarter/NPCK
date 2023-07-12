// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NPCK_MainMenu.generated.h"

/**
 * 
 */
UCLASS()
class NPCK_API UNPCK_MainMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	
	UPROPERTY()
	APlayerController* player;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* AnyKeyBtn;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UButton* PlayBtn;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* LoadBtn;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* QuitBtn;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UCircularThrobber* loading;

	UFUNCTION()
	void ClickPlay();
	UFUNCTION()
	void ClickQuit();
	UFUNCTION()
	void ClickAnyKey();
	UFUNCTION()
	void ClickLoad();
};
