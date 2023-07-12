// Fill out your copyright notice in the Description page of Project Settings.
// Created by PJH 2023.03.28


#include "NormalEnemy1_Anim.h"
#include "NormalEnemy1.h"
#include "CSC_Weapons.h"
#include <Components/CapsuleComponent.h>
#include "PJH_EnemyFSM.h"

void UNormalEnemy1_Anim::NativeBeginPlay() {
	Super::NativeBeginPlay();

	APawn* pawn = TryGetPawnOwner();
	me = Cast<ANormalEnemy1>(pawn);
}

void UNormalEnemy1_Anim::NativeUpdateAnimation(float DeltaSeconds) {
	Super::NativeUpdateAnimation(DeltaSeconds);

}
