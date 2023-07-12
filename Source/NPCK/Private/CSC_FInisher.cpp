// Fill out your copyright notice in the Description page of Project Settings.


#include "CSC_FInisher.h"
#include <Kismet/KismetSystemLibrary.h>
#include <GameFramework/Actor.h>
#include <../Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputComponent.h>
#include "NPCK_AnimInstance.h"
#include "PJH_EnemyBase.h"
#include <Kismet/KismetMathLibrary.h>
#include "NPCK_Player.h"
#include <../Plugins/EnhancedInput/Source/EnhancedInput/Public/InputAction.h>
#include "PJH_EnemyBaseAnim.h"
#include "PJH_EnemyFSM.h"
#include <Kismet/GameplayStatics.h>
#include <Camera/CameraComponent.h>
#include <GameFramework/SpringArmComponent.h>
#include <Camera/CameraActor.h>

// Sets default values for this component's properties
UCSC_Finisher::UCSC_Finisher()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UCSC_Finisher::BeginPlay()
{
	Super::BeginPlay();

	Player = Cast<ANPCK_Player>(GetOwner());
}

void UCSC_Finisher::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UCSC_Finisher::SetupPlayerInputComponent(class UEnhancedInputComponent* EnhancedInputComponent) {
	//EnhancedInputComponent->BindAction(InputFinish, ETriggerEvent::Started, this, &UCSC_Finisher::PlayFinisher);
}

void UCSC_Finisher::SetVictim(AActor* Target, bool Positionedbehind)
{
  Enemy = Cast<APJH_EnemyBase>(Target);
  isassassination = Positionedbehind;
}

void UCSC_Finisher::PlayFinisher()
{
	if (!IsValid(Enemy))
	{
	return;
	}
	FRotator PlayerRot = Player->GetActorRotation();
	FRotator LookatEnemyRotation = UKismetMathLibrary::FindLookAtRotation(Player->GetActorLocation(), Enemy->GetActorLocation());
	FRotator TargetRot = (FRotator(PlayerRot.Pitch, LookatEnemyRotation.Yaw, PlayerRot.Roll));
	FRotator LookatPlayerRotation = FRotator(Enemy->GetActorRotation().Pitch, UKismetMathLibrary::FindLookAtRotation(Enemy->GetActorLocation(), Player->GetActorLocation()).Yaw, Enemy->GetActorRotation().Roll);
	float distance = (Player->GetActorLocation() - Enemy->GetActorLocation()).Size();

	if (isassassination && distance < 200)
	{
		Enemy->Once = true;
		Player->SetActorRotation(LookatEnemyRotation);
		int32 montagenum = UKismetMathLibrary::RandomInteger64InRange(1,4);
		Player->anim->Montage_Play(Player->anim->Player_assassinationMontage);
		Player->anim->Montage_JumpToSection(FName(*FString::Printf(TEXT("Ambush%d"), montagenum)), Player->anim->Player_assassinationMontage);
		//////GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Ambush%d"),montagenum);
		if (Enemy->anim->Enemy_assassinationMontage != nullptr)
		{
			Enemy->anim->Montage_Play(Enemy->anim->Enemy_assassinationMontage);
			Enemy->anim->Montage_JumpToSection(FName(*FString::Printf(TEXT("Ambushed%d"), montagenum)), Enemy->anim->Enemy_assassinationMontage);
			//////GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Ambushed%d"), montagenum);

			// set enemy dead
			
		}
		UGameplayStatics::PlaySound2D(GetWorld(), Player->mortalAttackSound);

		return;
	}
	else if (!isassassination && distance < 200)
	{
		Enemy->Once = true;
		Player->SetActorRotation(LookatEnemyRotation);
		Enemy->SetActorRotation(LookatPlayerRotation);
		int32 montagenum = UKismetMathLibrary::RandomInteger64InRange(1, 7);
		Player->anim->Montage_Play(Player->anim->Player_FinisherMontage);
		Player->anim->Montage_JumpToSection(FName(*FString::Printf(TEXT("Execution%d"), montagenum)), Player->anim->Player_FinisherMontage);
		


		Enemy->anim->Montage_Play(Enemy->anim->Enemy_FinisherMontage);
		Enemy->anim->Montage_JumpToSection(FName(*FString::Printf(TEXT("Executed%d"), montagenum)), Enemy->anim->Enemy_FinisherMontage);
		FName montagename = Enemy->anim->Montage_GetCurrentSection(Enemy->anim->Enemy_FinisherMontage);
		FName pmontagename = Player->anim->Montage_GetCurrentSection(Player->anim->Player_FinisherMontage);
		//////GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, (TEXT("MyFName is %s"), *montagename.ToString()));
		////GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("EnemyMontage is %s"), *montagename.ToString()));
		////GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("EnemyMontage is %s"), *pmontagename.ToString()));
	     
		// set enemy dead
		Enemy->fsm->changeState(EEnemyState::Die);

     }
	
}
