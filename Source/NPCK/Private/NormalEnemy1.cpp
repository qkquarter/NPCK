// Fill out your copyright notice in the Description page of Project Settings.
// Created by PJH 2023.03.28


#include "NormalEnemy1.h"
#include "NormalEnemy1_FSM.h"
#include "NormalEnemy1_Anim.h"
#include <GameFramework/CharacterMovementComponent.h>
#include "CSC_Weapons.h"
#include <Components/CapsuleComponent.h>
#include "NormalEnemyUI.h"
#include <UMG/Public/Components/WidgetComponent.h>

ANormalEnemy1::ANormalEnemy1() {
	PrimaryActorTick.bCanEverTick = true;
	
	fsm = CreateDefaultSubobject<UNormalEnemy1_FSM>(TEXT("FSM"));
	Super::Katana->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("Hand_RSocket"));

	setMaxPosture(100);
	setPosture(0);
	setHealthPoint(100);

	EnemyUI = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
	ConstructorHelpers::FClassFinder<UNormalEnemyUI> tempUI(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UI/N_EnemyHealth_2.N_EnemyHealth_2_C'"));
	if (tempUI.Succeeded()) {
		EnemyUI->SetWidgetClass(tempUI.Class);
	}
	
	EnemyUI->SetupAttachment(RootComponent);
	EnemyUI->SetWidgetSpace(EWidgetSpace::World);
	EnemyUI->SetDrawSize(FVector2D(1000, 1000));
	EnemyUI->SetVisibility(true);
}

void ANormalEnemy1::BeginPlay() {
	Super::BeginPlay();

	anim = Cast<UNormalEnemy1_Anim>(Super::anim);
	
	UUserWidget* EnemyWidget = EnemyUI->GetUserWidgetObject();
	test = Cast<UNormalEnemyUI>(EnemyWidget);
	test->init(this);
}

void ANormalEnemy1::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	test->setHealthPosutre(getHealthPoint(), getPostrue());

}