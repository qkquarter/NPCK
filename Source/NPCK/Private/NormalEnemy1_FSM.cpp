// Fill out your copyright notice in the Description page of Project Settings.
// Created by PJH 2023.03.28


#include "NormalEnemy1_FSM.h"
#include "NormalEnemy1.h"
#include "NormalEnemy1_Anim.h"
#include <UMG/Public/Components/WidgetComponent.h>

UNormalEnemy1_FSM::UNormalEnemy1_FSM() {

}

void UNormalEnemy1_FSM::BeginPlay() {
	Super::BeginPlay();
	// initialize
	me = Cast<ANormalEnemy1>(Super::me);
	anim = Cast<UNormalEnemy1_Anim>(Super::anim);

}

void UNormalEnemy1_FSM::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


}

void UNormalEnemy1_FSM::IdleState() {
	Super::IdleState();
}
void UNormalEnemy1_FSM::GuardState()
{
	Super::GuardState();
}


void UNormalEnemy1_FSM::AttackState()
{
	Super::AttackState();
}

void UNormalEnemy1_FSM::changeState(EEnemyState state) {
	Super::changeState(state);

	if (mState == EEnemyState::Die) {
		ANormalEnemy1* temp = Cast<ANormalEnemy1>(me);
		temp->EnemyUI->SetVisibility(false);
	}
}

void UNormalEnemy1_FSM::adjustProbability(int32 index) {
	typeProbability[index] /= 2;

	for (int32 i = 0; i < typeProbability.Num(); i++) {
		if (i != index) {
			typeProbability[i] += (typeProbability[index] / 4);
		}
	}
}
void UNormalEnemy1_FSM::selectIdx() {
	float randomProp = FMath::RandRange(0, 100);
	float prop = typeProbability[0];

	for (int32 i = 1; i < typeProbability.Num(); i++) {
		if (randomProp < prop) break;
		prop += typeProbability[i];
		attackIdx = i;
	}
	UE_LOG(LogTemp, Warning, TEXT("%d"), attackIdx);
	anim->attackIdx = attackIdx;
}

void UNormalEnemy1_FSM::setAttackInfos() {
	// 추후에 csv load 방식으로 바꾸자
	// pattern 1
	FAttackData tempData;
	tempData.damage = 10;
	tempData.postureDamage = 10;
	tempData.isGuardable = true;
	tempData.isParryable = true;
	tempData.attackDelay = 1.0f;
	attackInfos.Add(tempData);
	typeProbability.Add(20.0f);

	// pattern 2
	tempData.damage = 15;
	tempData.postureDamage = 15;
	tempData.isGuardable = true;
	tempData.isParryable = true;
	tempData.attackDelay = 1.0f;
	attackInfos.Add(tempData);
	typeProbability.Add(20.0f);

	// pattern 3
	tempData.damage = 10;
	tempData.postureDamage = 20;
	tempData.isGuardable = true;
	tempData.isParryable = true;
	tempData.attackDelay = 1.0f;
	attackInfos.Add(tempData);
	typeProbability.Add(20.0f);

	// pattern 4
	tempData.damage = 20;
	tempData.postureDamage = 20;
	tempData.isGuardable = true;
	tempData.isParryable = true;
	tempData.attackDelay = 1.0f;
	attackInfos.Add(tempData);
	typeProbability.Add(20.0f);

	// pattern 5
	tempData.damage = 30;
	tempData.postureDamage = 15;
	tempData.isGuardable = true;
	tempData.isParryable = true;
	tempData.attackDelay = 2.0f;
	attackInfos.Add(tempData);
	typeProbability.Add(20.0f);
}