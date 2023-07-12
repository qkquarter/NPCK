// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCK_AnimInstance.h"
#include "NPCK_Player.h"
#include "PJH_GuardComponent.h"
#include <GameFramework/CharacterMovementComponent.h>
#include "PJH_ParryComponent.h"
#include "CSC_AttackComponent.h"
#include "KYI_GrappleComponent.h"
#include <Kismet/KismetMathLibrary.h>
#include "CSC_Weapons.h"
#include <Components/CapsuleComponent.h>
#include <Math/UnrealMathUtility.h>
#include "CSC_FInisher.h"

UNPCK_AnimInstance::UNPCK_AnimInstance() {

}

void UNPCK_AnimInstance::NativeBeginPlay() {
	Super::NativeBeginPlay();

	APawn* pawn = TryGetPawnOwner();
	me = Cast<ANPCK_Player>(pawn);


	OnMontageStarted.AddDynamic(this, &UNPCK_AnimInstance::GetCurrentPlayMontage);
	OnMontageEnded.AddDynamic(this, &UNPCK_AnimInstance::GetEndedMontage);
	
}

void UNPCK_AnimInstance::NativeUpdateAnimation(float DeltaSeconds) {
	Super::NativeUpdateAnimation(DeltaSeconds);
	if (me) 
	{
	    
	    //공중인지 확인
		inAir = me->GetCharacterMovement()->IsFalling();

		// 현재속도
		Speed = me->GetVelocity().Length();

		// 블렌드 스페이스용 2d 백터 초기화
		MoveValue.X = FMath::Clamp(MoveValue.X *Speed, -600, 600);
		MoveValue.Y = FMath::Clamp(MoveValue.Y *Speed, -600, 600);

		me->GetCharacterMovement()->MaxWalkSpeed = (isWalk||isCrouching) ? 300 : 600;
		
		isLeft = (MoveValue.X < 0.0f);
		
		
		if (!inAir)
		{
			jumpCount = 0;
		}
		

	}
}


void UNPCK_AnimInstance::playGuardMontage() {


	Montage_Play(guardMontage, 1.0f);
	// 현재 방향에 맞는 몽타주 실행
	if (isLeft) {
		Montage_JumpToSection(FName(*FString::Printf(TEXT("Apose2DL"))), guardMontage);
	}
	else
	{
		Montage_JumpToSection(FName(*FString::Printf(TEXT("Apose2DR"))), guardMontage);

	}
}

void UNPCK_AnimInstance::playHitMontage() {
	float sectionNum = FMath::RandRange(1, 5);
	FName newSection = *FString::Printf(TEXT("Hit%d"), sectionNum);

	// play hitMontage
	if (me->NPCKPlayerState->Posture >= 100) {
		newSection = *FString::Printf(TEXT("GuardBreak"));
	}
	else if (Montage_IsPlaying(hitMontage)) 
	{
	  Montage_Stop(0.1);
	  Montage_Play(hitMontage, 1.0f);

	}
	Montage_Play(hitMontage, 1.0f);	
	Montage_JumpToSection(newSection, hitMontage);
}




//KYI 그래플링 노티파이
void UNPCK_AnimInstance::AnimNotify_ThrowRope() {
	me->grappleComp->ThrowRope();
}

void UNPCK_AnimInstance::AnimNotify_StartGrapplingMovement() {
	me->grappleComp->StartGrapplingMovement();
}

void UNPCK_AnimInstance::AnimNotify_RopeAppears() {
	me->grappleComp->RopeVisibility(true);
}

void UNPCK_AnimInstance::AnimNotify_RopeDisappear() {
	me->grappleComp->RopeVisibility(false);
}

void UNPCK_AnimInstance::AnimNotify_AnimEnd() {
	me->grappleComp->ResetMovement();
}





//// CSC Combo Attack

void UNPCK_AnimInstance::PlayAttackMontage() {
	Montage_Play(AttackMontage, 1.0f);
	

}


void UNPCK_AnimInstance::JumpToAttackMontageSection(int32 NewSection)
{
	Montage_JumpToSection(GetAttackMontageSectionName(NewSection), AttackMontage);
}

void UNPCK_AnimInstance::AnimNotify_EndAttack()
{
	OnEndAttackCheck.Broadcast();

}

void UNPCK_AnimInstance::AnimNotify_ResetHitInfo()
{
   OnResetHitInfo.Broadcast();

}

FName UNPCK_AnimInstance::GetAttackMontageSectionName(int32 Section)
{
    FName CurrentSection = *FString::Printf(TEXT("Combo%d"), Section);
	

	return FName(CurrentSection);	

}

void UNPCK_AnimInstance::GetCurrentPlayMontage(UAnimMontage* Montage)
{
StartMontageTemp = Montage;
if (Montage == AttackMontage)
{
// 시작된 몽타주가 공격몽타주라면 Katana Collision on
 me->weapon->Collision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
 return;
}
else
{
	me->atComp->IsAttacking ? me->atComp->AttackEndComboState() : me->atComp->IsAttacking;
}
///////////////

if (Montage == guardMontage)
{

  me->parryComp->bCanParry = true;

  me->parryComp->CanPlayParry = true;
  return;
}
///////
if (Montage == Player_FinisherMontage || Montage == Player_assassinationMontage)
{
  me->atComp->isplayingFinisher = true;
  return;
}



}


void UNPCK_AnimInstance::GetEndedMontage(UAnimMontage* Montage, bool binterp)
{
EndMontageTemp = Montage;


	///////////////// 어택 몽타주 판정
	if (Montage == AttackMontage)
	{
		me->weapon->Collision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		if (!binterp)
		{
			
			me->atComp->AttackEndComboState();
			me->NPCKPlayerState->UpdateState();
		}
		else
		{
			if (!me->atComp->IsComboInputOn)
			{
				me->atComp->AttackEndComboState();
				
			}
		}
		
		return;
	}
	///////////////// 피니셔 몽타주 판정
	if (Montage == Player_FinisherMontage ||  Player_assassinationMontage)
	{
		me->atComp->isplayingFinisher = false;
		me->NPCKPlayerState->UpdateState();

	}
	////////// 가드 몽타주 판정
	if (Montage == guardMontage)
	{
		me->parryComp->bCanParry = false;
		me->guardComp->isGuard = true;
		me->parryComp->CanPlayParry = false;
	}
	if (Montage == guardHitMontage || hitMontage)
	{
		me->NPCKPlayerState->UpdateState();

	}
	if (Montage == parryMontage) {

		me->NPCKPlayerState->UpdateState();
	}

	if (Montage == grappleMontage) {
		me->NPCKPlayerState->UpdateState();
	}
	
	
}

void UNPCK_AnimInstance::PlayParryMontage(int32 sectionNum)
{
  Montage_Play(parryMontage);
  FName newSection = *FString::Printf(TEXT("Parry%d"), sectionNum);
  Montage_JumpToSection(newSection, parryMontage);
  //UE_LOG(LogTemp, Warning, TEXT("parry start"));
  /* if (isLeft)
   {
	   Montage_JumpToSection(FName(*FString::Printf(TEXT("Guard%d"))), parryMontage);
   }*/

}


void UNPCK_AnimInstance::playGuardHitMontage() {
	Montage_Play(guardHitMontage);
}