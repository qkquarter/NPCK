// Copyright Epic Games, Inc. All Rights Reserved.


#include "NPCKGameModeBase.h"
#include <Kismet/GameplayStatics.h>
#include "BossEnemy.h"
#include "PJH_EnemyFSM.h"
#include "ShinobiExecutionUI.h"

ANPCKGameModeBase::ANPCKGameModeBase() {
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FClassFinder<UShinobiExecutionUI> tempUI(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UI/N_ShinobiExcution.N_ShinobiExcution_C'"));
	if (tempUI.Succeeded()) {
		executionContainer = tempUI.Class;
	}
	else
	{
		////GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("UIFail"));
	}
}

void ANPCKGameModeBase::BeginPlay() {
	Super::BeginPlay();

	bossEnemy = Cast<ABossEnemy>(UGameplayStatics::GetActorOfClass(GetWorld(), ABossEnemy::StaticClass()));
	executionUI = CreateWidget<UShinobiExecutionUI>(GetWorld(), executionContainer);
	////GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("game"));
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *bossEnemy->GetName());
}

void ANPCKGameModeBase::Tick(float DeltaSeconds) {
	Super::Tick(DeltaSeconds);

}

void ANPCKGameModeBase::showExecutionUI() {
	////GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Onui"));
	executionUI->AddToViewport();
	executionUI->PlayAnimation(executionUI->NewAnimation, 0.0f, 1, EUMGSequencePlayMode::PingPong, 1.0f, false);
}