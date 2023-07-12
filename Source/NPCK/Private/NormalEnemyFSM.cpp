// Fill out your copyright notice in the Description page of Project Settings.


#include "NormalEnemyFSM.h"
#include "NormalEnemy.h"

#include "NormalEnemyAnim.h"
#include <UMG/Public/Components/WidgetComponent.h>


UNormalEnemyFSM::UNormalEnemyFSM() {

}

void UNormalEnemyFSM::BeginPlay() {
	Super::BeginPlay();

	// initialize

	me = Cast<ANormalEnemy>(Super::me);
	anim = Cast<UNormalEnemyAnim>(Super::anim);

}

void UNormalEnemyFSM::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);



}

void UNormalEnemyFSM::IdleState() {
	Super::IdleState();
}

void UNormalEnemyFSM::GuardState()
{
	Super::GuardState();
}


void UNormalEnemyFSM::AttackState()
{
	Super::AttackState();
}

void UNormalEnemyFSM::changeState(EEnemyState state)
{
 Super::changeState(state);

 if (mState == EEnemyState::Die) {
	 ANormalEnemy* temp = Cast<ANormalEnemy>(me);
	 temp->EnemyUI->SetVisibility(false);
 }
}

void UNormalEnemyFSM::setAttackInfos()
{
Super::setAttackInfos();
}

void UNormalEnemyFSM::adjustProbability(int32 idx)
{
Super::adjustProbability(idx);
}

void UNormalEnemyFSM::selectIdx()
{
Super::selectIdx();
}
