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
	// targetOn == false ��� Ž��
	// targetOn == true �ٷ� attack or guard

	if (targetOn) { // �÷��̾� �߰����� ���
		int32 tmp = FMath::RandRange(0, 100);
		// 30% Ȯ���� ���� / 70% Ȯ���� ����
		if (tmp < 30) {
			changeState(EEnemyState::Guard);
		}
		else {
			changeState(EEnemyState::Attack);
		}
	}
	else { // �÷��̾� �߰߸����� ���

		if (checkRange(searchRange)) {
			changeState(EEnemyState::Move);
			targetOn = true;

			// ui �߰�
			boss->BossUI->AddToViewport();
			UGameplayStatics::PlaySound2D(GetWorld(), boss->alertSound);
		}
	}
}

void UBossEnemyFSM::AttackState() {
	// ���� ���� �ƴϸ� pattern �ϳ� �����ؼ� �ִϸ��̼� ����
	// �ִϸ��̼� ����� delay ��ŭ ���
	// �� �� ���� �ȿ� ������ �ٽ� pattern ����
	//ai->StopMovement();
	// ��� �÷��̾ ���� ȸ��
	// ���ݹ��� check
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
	else { // ���ݹ��� ���̸� move
		if (!anim->bAttack) {
			changeState(EEnemyState::Move);
		}
	}
}
void UBossEnemyFSM::GuardState() { //������
	ai->StopMovement();
	// 2�ʰ� ���� ����
	// ���ݹ����� hp ������ �ȹ���, ü�� ������ ����, ���� �ִϸ��̼� �߰� �ʿ�
	// �߰������� �¿�� �Դٰ��� �ϸ�? ������?
	// �����϶� �÷��̾ ���� ȸ��

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
		// Į collision �� ��������
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
	// ���Ŀ� csv load ������� �ٲ���
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