// Fill out your copyright notice in the Description page of Project Settings.


#include "BossEnemyFSM.h"
#include "BossEnemy.h"
#include <AIModule/Classes/AIController.h>
#include <Kismet/GameplayStatics.h>
#include "NPCK_Player.h"
#include <NavigationSystem/Public/NavigationSystem.h>
#include "BossEnemyAnim.h"
#include "CSC_Weapons.h"
#include <Components/CapsuleComponent.h>
#include "../NPCKGameModeBase.h"
#include "Boss_UI.h"
#include <Components/BoxComponent.h>

UBossEnemyFSM::UBossEnemyFSM() {

	
}

void UBossEnemyFSM::BeginPlay() {
	Super::BeginPlay();

	// initialize
	boss = Cast<ABossEnemy>(Super::me);
	anim = Cast<UBossEnemyAnim>(Super::anim);

}

void UBossEnemyFSM::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}

void UBossEnemyFSM::IdleState() {
	// targetOn == false 계속 탐색
	// targetOn == true 바로 attack or guard

	if (targetOn) { // 플레이어 발견했을 경우
		int32 tmp = FMath::RandRange(0, 100);
		// 30% 확률로 가드 / 70% 확률로 공격
		if (tmp < 30) {
			changeState(EEnemyState::Guard);
		}
		else {
			changeState(EEnemyState::Attack);
		}
	}
	else { // 플레이어 발견못했을 경우

		if (checkRange(searchRange)) {
			changeState(EEnemyState::Move);
			targetOn = true;

			// ui 추가
			boss->BossUI->AddToViewport();
			UGameplayStatics::PlaySound2D(GetWorld(), boss->alertSound);
		}
	}
}

void UBossEnemyFSM::AttackState() {
	// 공격 중이 아니면 pattern 하나 선택해서 애니메이션 실행
	// 애니메이션 종료시 delay 만큼 대기
	// 그 후 범위 안에 있으면 다시 pattern 선택
	//ai->StopMovement();
	// 계속 플레이어를 향해 회전
	// 공격범위 check
	if (checkRange(attackRange)) {
		//selectIdx();
		if (!anim->bAttack) {
			if (isWaitComplete(attackInfos[attackIdx].attackDelay)) {
				//UE_LOG(LogTemp, Warning, TEXT("Wait Complete"));
				selectIdx();
				adjustProbability(attackIdx);
				anim->bAttack = true;

				me->LaunchCharacter(me->GetActorForwardVector() * 10 * attackInfos[attackIdx].postureDamage, false, false);
			}
		}
	}
	else { // 공격범위 밖이면 move
		if (!anim->bAttack) {
			changeState(EEnemyState::Move);
		}
	}
}
void UBossEnemyFSM::GuardState() { //재정의
	ai->StopMovement();
	// 2초간 가드 유지
	// 공격받으면 hp 데미지 안받음, 체간 데미지 받음, 가드 애니메이션 추가 필요
	// 추가적으로 좌우로 왔다갔다 하면? 좋을듯?
	// 가드일때 플레이어를 향해 회전

	FVector direction = target->GetActorLocation() - me->GetActorLocation();
	//UE_LOG(LogTemp, Warning, TEXT("%f %f %f"), direction.X, direction.Y, direction.Z);
	//UE_LOG(LogTemp, Warning, TEXT("%f %f %f"), direction.Rotation().Roll, direction.Rotation().Pitch, direction.Rotation().Yaw);
	me->SetActorRotation(direction.Rotation());
	
	if (isWaitComplete(2.0f)) {
		changeState(EEnemyState::Idle);
		isGuard = false;
	}
}

void UBossEnemyFSM::changeState(EEnemyState state) {
	//UE_LOG(LogTemp, Warning, TEXT("%d -----> %d"), mState, state);
	mState = state;
	anim->state = mState;

	switch (mState) {
	case EEnemyState::Idle:
		break;
	case EEnemyState::Move:
		break;
	case EEnemyState::Attack:
		ai->StopMovement();
		//currentTime = 3.0f;
		break;
	case EEnemyState::Guard:
		ai->StopMovement();
		isGuard = true;
		break;
	case EEnemyState::Damaged:
		ai->StopMovement();
		//anim->playHitMontage();
		break;
	case EEnemyState::Vulnerable:
		ai->StopMovement();
		currentTime = 0.0f;
		UGameplayStatics::PlaySound2D(GetWorld(), boss->postureBrokenSound, 2.0f);
		//anim->bVulnerable = true;
		break;
	case EEnemyState::Die:
		me->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		// 칼 collision 도 꺼버리자
		me->weapon->Collision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		me->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		me->Back->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		Cast<ANPCKGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()))->showExecutionUI();
		boss->BossUI->RemoveFromParent();
		break;
	default:
		break;
	}
}


void UBossEnemyFSM::adjustProbability(int32 index) {
	typeProbability[index] /= 2;

	for (int32 i = 0; i < typeProbability.Num(); i++) {
		if (i != index) {
			typeProbability[i] += (typeProbability[index] / 4);
		}
		//UE_LOG(LogTemp, Warning, TEXT("%d : %f"), i, typeProbability[i]);
	}

	//UE_LOG(LogTemp, Warning, TEXT("%d"), attackIdx);
}
void UBossEnemyFSM::selectIdx() {
	float randomProp = FMath::RandRange(0, 100);
	float prop = 0;

	for (int32 i = 0; i < typeProbability.Num(); i++) {
		if (randomProp <= prop) break;
		prop += typeProbability[i];
		attackIdx = i;
	}
	//attackIdx = 1;
	//UE_LOG(LogTemp, Warning, TEXT("prop : %f"), randomProp);
	//UE_LOG(LogTemp, Warning, TEXT("%d"), attackIdx);
	anim->attackIdx = attackIdx;
}


void UBossEnemyFSM::setAttackInfos() {
	// 추후에 csv load 방식으로 바꾸자
	// pattern 1
	FAttackData tempData;
	tempData.damage = 10;
	tempData.postureDamage = 10;
	tempData.isGuardable = true;
	tempData.isParryable = true;
	tempData.attackDelay = 0.5f;
	attackInfos.Add(tempData);
	typeProbability.Add(20.0f);

	// pattern 2
	tempData.damage = 15;
	tempData.postureDamage = 15;
	tempData.isGuardable = true;
	tempData.isParryable = true;
	tempData.attackDelay = 0.5f;
	attackInfos.Add(tempData);
	typeProbability.Add(20.0f);

	// pattern 3
	tempData.damage = 10;
	tempData.postureDamage = 20;
	tempData.isGuardable = true;
	tempData.isParryable = true;
	tempData.attackDelay = 0.5f;
	attackInfos.Add(tempData);
	typeProbability.Add(20.0f);

	// pattern 4
	tempData.damage = 20;
	tempData.postureDamage = 20;
	tempData.isGuardable = true;
	tempData.isParryable = true;
	tempData.attackDelay = 0.5f;
	attackInfos.Add(tempData);
	typeProbability.Add(20.0f);

	// pattern 5
	tempData.damage = 30;
	tempData.postureDamage = 15;
	tempData.isGuardable = true;
	tempData.isParryable = true;
	tempData.attackDelay = 1.0f;
	attackInfos.Add(tempData);
	typeProbability.Add(20.0f);
}