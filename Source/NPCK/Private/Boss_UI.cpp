// Fill out your copyright notice in the Description page of Project Settings.


#include "Boss_UI.h"
#include <UMG/Public/Components/ProgressBar.h>
#include "BossEnemy.h"
#include <Kismet/GameplayStatics.h>

void UBoss_UI::NativeConstruct() {
	Super::NativeConstruct();

	EnemyHealthProgressBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("EnemyHealthProgressBar")));
	PostureProgressBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PostureProgressBar")));

	ABossEnemy* boss = Cast<ABossEnemy>(UGameplayStatics::GetActorOfClass(GetWorld(), ABossEnemy::StaticClass()));
	maxHealth = boss->getHealthPoint();
	curHealth = maxHealth;
	maxPosture = boss->getMaxPosture();
	curPosture = boss->getPostrue();
}
void UBoss_UI::NativeTick(const FGeometry& MyGeometry, float InDeltaTime) {
	Super::NativeTick(MyGeometry, InDeltaTime);

	EnemyHealthProgressBar->SetPercent(GetHealthPercentage());
	PostureProgressBar->SetPercent(GetPosturePercentage());
}

void UBoss_UI::setHealthPosutre(float Health, float Posture) {
	curHealth = Health;
	curPosture = Posture;
}
float UBoss_UI::GetHealthPercentage() {
	return curHealth / maxHealth;
}
float UBoss_UI::GetPosturePercentage() {
	return curPosture / maxPosture;
}