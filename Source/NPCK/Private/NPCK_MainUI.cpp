// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCK_MainUI.h"
#include <UMG/Public/Components/ProgressBar.h>
#include "NPCK_Player.h"
#include <Kismet/GameplayStatics.h>
#include "NPCK_PlayerState.h"
#include "PJH_GuardComponent.h"

void UNPCK_MainUI::NativeConstruct() {
	Super::NativeConstruct();

	HealthProgressBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("HealthProgressBar")));
	PostureProgressBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PostureProgressBar")));

	ANPCK_Player* player = Cast<ANPCK_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), ANPCK_Player::StaticClass()));
	maxHealth = player->NPCKPlayerState->HP;
	curHealth = maxHealth;
	maxPosture = player->guardComp->maxGuardGauge;
	curPosture = player->NPCKPlayerState->Posture;
}

void UNPCK_MainUI::NativeTick(const FGeometry& MyGeometry, float InDeltaTime) {
	Super::NativeTick(MyGeometry, InDeltaTime);

	HealthProgressBar->SetPercent(GetHealthPercentage());
	PostureProgressBar->SetPercent(GetPosturePercentage());
}

float UNPCK_MainUI::GetHealthPercentage() {
	return curHealth / maxHealth;
}
float UNPCK_MainUI::GetPosturePercentage() {
	return curPosture / maxPosture;
}
void UNPCK_MainUI::setHealth(float hp) {
	curHealth = hp;
}
void UNPCK_MainUI::setPosture(float po) {
	curPosture = po;
}