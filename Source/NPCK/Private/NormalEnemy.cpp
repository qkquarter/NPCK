// Fill out your copyright notice in the Description page of Project Settings.


#include "NormalEnemy.h"
#include "NormalEnemyFSM.h"
#include "NormalEnemyAnim.h"
#include <GameFramework/CharacterMovementComponent.h>
#include "CSC_Weapons.h"
#include <Components/CapsuleComponent.h>
#include <UMG/Public/Components/WidgetComponent.h>
#include "NormalEnemyUI.h"

ANormalEnemy::ANormalEnemy() {
	PrimaryActorTick.bCanEverTick = true;
	
	
	fsm = CreateDefaultSubobject<UNormalEnemyFSM>(TEXT("FSM"));
	Super::Katana->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("Hand_RSocket"));

	setMaxPosture(50);
	setPosture(0);
	setHealthPoint(50);

	EnemyUI = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
	ConstructorHelpers::FClassFinder<UNormalEnemyUI> tempUI(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UI/N_EnemyHealth_2.N_EnemyHealth_2_C'"));
	if (tempUI.Succeeded()) {
		EnemyUI->SetWidgetClass(tempUI.Class);
	}

	EnemyUI->SetupAttachment(RootComponent);
	EnemyUI->SetWidgetSpace(EWidgetSpace::World);
	EnemyUI->SetDrawSize(FVector2D(1000, 1000));
	EnemyUI->SetRelativeLocation(FVector(0, 0, 30));
	EnemyUI->SetRelativeScale3D(FVector(0.1f, 0.1f, 0.2f));
	EnemyUI->SetVisibility(true);
}

void ANormalEnemy::BeginPlay() {
	Super::BeginPlay();

	anim = Cast<UPJH_EnemyBaseAnim>(Super::anim);

	UUserWidget* EnemyWidget = EnemyUI->GetUserWidgetObject();
	test = Cast<UNormalEnemyUI>(EnemyWidget);
	test->init(this);
	
}

void ANormalEnemy::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	test->setHealthPosutre(getHealthPoint(), getPostrue());
}