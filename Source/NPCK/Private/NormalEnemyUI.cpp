// Fill out your copyright notice in the Description page of Project Settings.


#include "NormalEnemyUI.h"
#include "PJH_EnemyBase.h"
#include <UMG/Public/Components/ProgressBar.h>

void UNormalEnemyUI::NativeConstruct() {
	Super::NativeConstruct();

	EnemyHealthProgressBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("EnemyHealthProgressBar")));
	PostureProgressBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PostureProgressBar")));

}
void UNormalEnemyUI::NativeTick(const FGeometry& MyGeometry, float InDeltaTime) {
	Super::NativeTick(MyGeometry, InDeltaTime);
	
	EnemyHealthProgressBar->SetPercent(GetHealthPercentage());
	PostureProgressBar->SetPercent(GetPosturePercentage());
}

void UNormalEnemyUI::setHealthPosutre(float Health, float Posture) {
	curHealth = Health;
	curPosture = Posture;
}
float UNormalEnemyUI::GetHealthPercentage() {
	return curHealth / maxHealth;
}
float UNormalEnemyUI::GetPosturePercentage() {
	return curPosture / maxPosture;
}
void UNormalEnemyUI::init(APJH_EnemyBase* owner) {

	maxHealth = owner->getHealthPoint();
	curHealth = maxHealth;
	maxPosture = owner->getMaxPosture();
	curPosture = owner->getPostrue();
}