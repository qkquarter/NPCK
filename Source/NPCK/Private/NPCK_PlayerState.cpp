// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCK_PlayerState.h"
#include "NPCK_Player.h"
#include "CSC_AttackComponent.h"
#include <GameFramework/PlayerController.h>
#include <GameFramework/CharacterMovementComponent.h>
#include <Components/CapsuleComponent.h>
#include "NPCK_AnimInstance.h"
#include "DeadUI.h"
ANPCK_PlayerState::ANPCK_PlayerState()
{
	PrimaryActorTick.bCanEverTick = true;
	//PrimaryComponentTick.bCanEverTick = true;
}

void ANPCK_PlayerState::Tick(float DeltaTime)
{
	
    
	if (TemprequestState != EPlayerState::IdleMove)
	{ 
		Emptytimer += DeltaTime; 
		TemprequestState = Emptytimer < 0.1 ? TemprequestState : (TemprequestState = EPlayerState::IdleMove) , Emptytimer = 0 ;
	}
	switch (Mystate)
	{
	case EPlayerState::IdleMove:
	    OnIdleMove();
		break;

	case EPlayerState::Attack:
		OnAttack();		
		break;

		case EPlayerState::Hit:
		OnHit();
			break;

		case EPlayerState::Finisher:
		OnFinisher();
			break;

		case EPlayerState::Grappling:
		OnGrappling();
			break;

		case EPlayerState::Parry:
		OnParry();
			break;

		case EPlayerState::Dash:
		OnDash();
			break;

		case EPlayerState::Jump:
		OnJump();
			break;

		case EPlayerState::Die:
		OnDie();
			break;

	default:
		// Handle other cases
		break;
	}

}



void ANPCK_PlayerState::SetPlayerState(EPlayerState NewState)
{
		
		switch (Mystate)
		{
		case EPlayerState::IdleMove:

			break;

		case EPlayerState::Attack:
		    if (Player != nullptr)
		    {
				Player->GetCharacterMovement()->MaxWalkSpeed = 600;
				Player->atComp->AttackEndComboState();
		    }
			break;

		case EPlayerState::Hit:
			
			break;

		case EPlayerState::Finisher:
			//PlayerCon->EnableInput(PlayerCon);
			
			break;

		case EPlayerState::Grappling:
			
			break;

		case EPlayerState::Parry:
			
			break;

		case EPlayerState::Dash:
			
			break;

		case EPlayerState::Jump:
			
			break;

		case EPlayerState::Combat:
			
			break;

		case EPlayerState::Die:
			//PlayerCon->SetInputMode(GameMode);
			//Player->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			break;

		default:
			// Handle other cases
			break;
		}
	
	    Mystate = NewState;	
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("DieState"));
}


bool ANPCK_PlayerState::RequestPlayerState(EPlayerState Requeststate)
{
	bool Request =  false;

	if ( Mystate < EPlayerState::Finisher && (Requeststate == EPlayerState :: Hit || Requeststate == EPlayerState::Parry))
	{
	  
			SetPlayerState(Requeststate);
			Request = true;
		

	}
	else
	{
		if (Requeststate > Mystate) {
			SetPlayerState(Requeststate); 
			Request = true; 

		}
		else
		{
			TemprequestState = TemprequestState < Requeststate ? TemprequestState : TemprequestState = Requeststate;
		}
	}


	return Request;
}

void ANPCK_PlayerState::BeginPlay()
{
  Super::BeginPlay();

 // Player = Cast<ANPCK_Player>(GetOwner());

  
}



void ANPCK_PlayerState::UpdateState()
{
   // 배열 비어 있다면 idle
   // 아니면 가장큰값 실행
	if (Mystate != EPlayerState::Die )
	{
		if(Player->anim->Montage_IsPlaying(Player->anim->StartMontageTemp))
		{
			Player->anim->Montage_Stop(0.2f);
		}

		SetPlayerState(EPlayerState::IdleMove);
   }
  
}

void ANPCK_PlayerState::OnIdleMove()
{
	
if (!CanChangeState)
{
   CanChangeState = true;
}
if (Player->anim->IsAnyMontagePlaying())
{
	Player->anim->Montage_Stop(0.3,Player->anim->StartMontageTemp);
}

	// 대기 상태로 변경
}


void ANPCK_PlayerState::OnAttack()
{



		Player->GetCharacterMovement()->MaxWalkSpeed = 150;
		Player->GetCharacterMovement()->RotationRate = FRotator(0.0f, 40, 0.0f); // ...at this rotation rate
	
}

void ANPCK_PlayerState::OnHit()
{ 
   //

}

void ANPCK_PlayerState::OnFinisher()
{ 
	
	
	/*if ((Player->anim->Montage_IsPlaying(Player->anim->Player_assassinationMontage) || Player->anim->Montage_IsPlaying(Player->anim->Player_FinisherMontage)))
	{
	  
	}
	else
	{
		UpdateState();
	}*/
	//PlayerCon->DisableInput(PlayerCon);
	// 몽타주 재생하는  동안 인풋 불가능p
	// 카메라 액션 재생
}

void ANPCK_PlayerState::OnGrappling()
{ 
	CanChangeState = false;
	// 마우스로 카메라만 회전 가능
}


void ANPCK_PlayerState::OnParry()
{    
	CanChangeState = false;
	// 이동 불가 
	// 컨트롤러 인풋으로 플레이어 회전 불가
}

void ANPCK_PlayerState::OnDash()
{
	// 캐릭터 콜리전 대쉬시간동안 무효화
}

void ANPCK_PlayerState::OnJump()
{ 
	
  //이떄 공격이나 처형을 하면 점프어택 몽타주 실행
}

void ANPCK_PlayerState::OnCombat()
{
	
  // 상태일때만 공격, 처형 가능함
}

void ANPCK_PlayerState::OnDie()
{ 
	CanChangeState = false;
	//PlayerCon->SetInputMode(UIMode);
	//Player->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	// 캐릭터 인풋 사용불가 및 위젯 생성
	
	if (!UIOnce) {
		UIOnce = true;
		Player->deadUI->AddToViewport();
		//Player->deadUI->PlayAnimation(Player->deadUI->Fade);
	}
	
}

void ANPCK_PlayerState::SetPlayer(ANPCK_Player* StateOwner)
{
	Player = Cast<ANPCK_Player>(StateOwner);
	PlayerCon = GetWorld()->GetFirstPlayerController();
}