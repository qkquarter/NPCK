// Fill out your copyright notice in the Description page of Project Settings.


#include "BossEnemyAnim.h"
#include "BossEnemy.h"
#include "CSC_Weapons.h"
#include <Components/CapsuleComponent.h>
#include "PJH_EnemyFSM.h"

void UBossEnemyAnim::NativeBeginPlay() {
	Super::NativeBeginPlay();

	APawn* pawn = TryGetPawnOwner();
	me = Cast<ABossEnemy>(pawn);


}

void UBossEnemyAnim::NativeUpdateAnimation(float DeltaSeconds) {
	Super::NativeUpdateAnimation(DeltaSeconds);
}
/*
void UBossEnemyAnim::AnimNotify_AttackStart() {
	me->weapon->Collision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	
	//UE_LOG(LogTemp, Warning, TEXT("AttackStart"));
}
void UBossEnemyAnim::AnimNotify_AttackEnd() {
	me->weapon->Collision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//UE_LOG(LogTemp, Warning, TEXT("AttackEnd"));
}
void UBossEnemyAnim::AnimNotify_SetAttackFalse() {
	attackIdx = -1;
	bAttack = false;
}
void UBossEnemyAnim::AnimNotify_VulnerableEnd() {
	// bVulnerable을 여기서 하면 안된다. 지금 애니메이션 반복 재생으로 방향 바꿈

}
void UBossEnemyAnim::AnimNotify_HitEnd() {
	// bVulnerable? 좀 더 생각
	bAttack = false;
	me->fsm->changeState(EEnemyState::Idle);
}
void UBossEnemyAnim::playHitMontage() {
	if (!Montage_IsPlaying(hitMontage)) {
		Montage_Play(hitMontage, 1.0f);
		changeHitMontageSection();
	}
}
void UBossEnemyAnim::changeHitMontageSection() {
	if (bVulnerable) {
		FName newName = *FString::Printf(TEXT("Vulnerable"));
		Montage_JumpToSection(newName, hitMontage);
		bAttack = false;
	}
	else {
		int32 newSection = FMath::RandRange(1, 5);
		FName newName = *FString::Printf(TEXT("Hit%d"), newSection);
		Montage_JumpToSection(newName, hitMontage);
	}
}*/