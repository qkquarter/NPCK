// Fill out your copyright notice in the Description page of Project Settings.


#include "BossEnemy.h"
#include "BossEnemyFSM.h"
#include "BossEnemyAnim.h"
#include <GameFramework/CharacterMovementComponent.h>
#include "CSC_Weapons.h"
#include <Components/CapsuleComponent.h>
#include "PJH_EnemyFSM.h"
#include "Boss_UI.h"

ABossEnemy::ABossEnemy() {
	PrimaryActorTick.bCanEverTick = true;
	
	// 여기서 체간 체력 초기화
	setMaxPosture(500);
	setPosture(0);
	setHealthPoint(500);
	
	//fsm = Cast<UBossEnemyFSM>(fsm);
	fsm = CreateDefaultSubobject<UBossEnemyFSM>(TEXT("FSM"));

	Super::Katana->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("Hand_RSocket"));

	ConstructorHelpers::FClassFinder<UBoss_UI> tempUI(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UI/N_EnemyHealth.N_EnemyHealth_C'"));
	if (tempUI.Succeeded()) {
		BossUIContainer = tempUI.Class;
	}
}

void ABossEnemy::BeginPlay() {
	Super::BeginPlay();

	anim = Cast<UBossEnemyAnim>(Super::anim);
	BossUI = CreateWidget<UBoss_UI>(GetWorld(), BossUIContainer);
}

void ABossEnemy::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	BossUI->setHealthPosutre(getHealthPoint(), getPostrue());
	
}