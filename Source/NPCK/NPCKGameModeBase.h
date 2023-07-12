// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NPCKGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class NPCK_API ANPCKGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	class ABossEnemy* bossEnemy;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UShinobiExecutionUI> executionContainer;

	UPROPERTY(EditAnywhere)
	class UShinobiExecutionUI* executionUI;

	ANPCKGameModeBase();

	void BeginPlay() override;
	void Tick(float DeltaSeconds) override;
	void showExecutionUI();

};
