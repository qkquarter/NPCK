// Fill out your copyright notice in the Description page of Project Settings.


#include "NormalEnemyAnim.h"
#include "NormalEnemy.h"
#include "CSC_Weapons.h"
#include <Components/CapsuleComponent.h>
#include "PJH_EnemyFSM.h"



void UNormalEnemyAnim::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	APawn* pawn = TryGetPawnOwner();
	me = Cast<ANormalEnemy>(pawn);
}

void UNormalEnemyAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
}
