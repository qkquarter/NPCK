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
   // �迭 ��� �ִٸ� idle
   // �ƴϸ� ����ū�� ����
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

	// ��� ���·� ����
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
	// ��Ÿ�� ����ϴ�  ���� ��ǲ �Ұ���p
	// ī�޶� �׼� ���
}

void ANPCK_PlayerState::OnGrappling()
{ 
	CanChangeState = false;
	// ���콺�� ī�޶� ȸ�� ����
}


void ANPCK_PlayerState::OnParry()
{    
	CanChangeState = false;
	// �̵� �Ұ� 
	// ��Ʈ�ѷ� ��ǲ���� �÷��̾� ȸ�� �Ұ�
}

void ANPCK_PlayerState::OnDash()
{
	// ĳ���� �ݸ��� �뽬�ð����� ��ȿȭ
}

void ANPCK_PlayerState::OnJump()
{ 
	
  //�̋� �����̳� ó���� �ϸ� �������� ��Ÿ�� ����
}

void ANPCK_PlayerState::OnCombat()
{
	
  // �����϶��� ����, ó�� ������
}

void ANPCK_PlayerState::OnDie()
{ 
	CanChangeState = false;
	//PlayerCon->SetInputMode(UIMode);
	//Player->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	// ĳ���� ��ǲ ���Ұ� �� ���� ����
	
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