// Fill out your copyright notice in the Description page of Project Settings.


#include "CSC_AttackComponent.h"
#include "NPCK_Player.h"
#include <../Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputComponent.h>
#include <../Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputSubsystems.h>
#include <Engine/EngineBaseTypes.h>
#include "NPCK_AnimInstance.h"
#include <../Plugins/EnhancedInput/Source/EnhancedInput/Public/InputAction.h>
#include "CSC_Weapons.h"
#include <Components/CapsuleComponent.h>
#include "PJH_EnemyBase.h"
#include <GameFramework/Actor.h>
#include <Kismet/KismetMathLibrary.h>
#include "PJH_EnemyBaseAnim.h"
#include "PJH_GuardComponent.h"
#include <Kismet/GameplayStatics.h>
#include "PJH_ParryComponent.h"
#include "PJH_EnemyFSM.h"
#include <GameFramework/MovementComponent.h>
#include <GameFramework/PawnMovementComponent.h>
#include <Kismet/KismetSystemLibrary.h>
#include <GameFramework/SpringArmComponent.h>
#include <../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponent.h>
#include <../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraFunctionLibrary.h>

 
// Sets default values for this component's properties
// Sets default values for this component's properties
UCSC_AttackComponent::UCSC_AttackComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;


	
	// ...
}



// Called when the game starts
void UCSC_AttackComponent::BeginPlay()
{
	Super::BeginPlay();
    
		Player = Cast<ANPCK_Player>(GetOwner());
		anim = Cast<UNPCK_AnimInstance>(Player->GetMesh()->GetAnimInstance());

		


		if (Player != nullptr){
			anim->OnEndAttackCheck.AddLambda([this]() -> void {
				Enemies.Empty();
				if (IsComboInputOn && !(CurrentCombo == MaxCombo))
		
				{
					
					AttackStartComboState();
					
					anim->JumpToAttackMontageSection(CurrentCombo);
					IsComboInputOn = false;
				}
				else
				{
					AttackEndComboState();
					Player->NPCKPlayerState->UpdateState();
					
				}
				});
		
			anim->OnResetHitInfo.AddLambda([this]() -> void {
				
				Enemies.Empty();
				if (Enemies.IsEmpty())
				{
					

				}

				});
			
		}
		}





// Called every frame
void UCSC_AttackComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (bFinish) {
		if (finishTime > 2.0f) {
			finishTime = 0;
			bFinish = false;
			changeCameraView(FRotator(0), 300);
		}
		else {
			finishTime += DeltaTime;
		}
	}
}	

void UCSC_AttackComponent::SetupPlayerInputComponent(class UEnhancedInputComponent* EnhancedInputComponent) 
{

	
	EnhancedInputComponent->BindAction(AttackInPut, ETriggerEvent::Started, this, &UCSC_AttackComponent::Attack);
	EnhancedInputComponent->BindAction(FinisherInput, ETriggerEvent::Started, this, &UCSC_AttackComponent::PlayFinisher);
	
	
	
}

void UCSC_AttackComponent::Attack()
{
    // 실행 했을떄 isattack이 false 면 
	// 콤보 1로가고 isattacking true
    // 1번콤보 실행
	//콤보 실행중 is attaking 일때 추가 입력받으면 콤보인풋 true
	if(Player->NPCKPlayerState->Mystate == EPlayerState::Attack || Player->NPCKPlayerState->RequestPlayerState(EPlayerState::Attack))
  {
	
	if (IsAttacking) 
	{
		//////GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("ComboAttack"));
		IsComboInputOn = true;
		
	}
	else 
	{   if(Player->NPCKPlayerState->Mystate == EPlayerState::Attack)
		{//////GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("FirstAttack"));
		AttackStartComboState();
		anim->PlayAttackMontage();
		anim->JumpToAttackMontageSection(CurrentCombo);
		}
	}
	
  }
 
	
}

void UCSC_AttackComponent::AttackStartComboState()
{
	
	IsAttacking = true;
	if (CurrentCombo >=4)
	{
		CurrentCombo = 0;
	}
	CurrentCombo = FMath::Clamp<int32>(CurrentCombo + 1, 1, MaxCombo);
	 
}

void UCSC_AttackComponent::AttackEndComboState()
{   
    IsAttacking =false;
	IsComboInputOn = false;
	CurrentCombo = 0;

	
	

}

// katana collision player ignore 하니까 적 katana 도 같이 적용
// 적 전용 katana 생성

void UCSC_AttackComponent::SetEnemies(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
  if (Enemies.Contains(OtherActor) || anim->isGuard)
  {
	return;  
  }

   Enemies.Add(OtherActor);
   APJH_EnemyBase* localEnemy = Cast<APJH_EnemyBase>(OtherActor);
    if (localEnemy != nullptr)
   {
		localEnemy->fsm->receiveDamage(10,10);
		//SweepResult.ImpactPoint
		 UE_LOG(LogTemp, Warning, TEXT("Overlap"));
		 if (localEnemy->fsm->mState == EEnemyState::Guard) {
			 UGameplayStatics::PlaySound2D(GetWorld(), localEnemy->guardSound);
		 }
		 else {
			 Player->weapon->BloodTrail->Activate(true);
			 UGameplayStatics::PlaySound2D(GetWorld(), Player->slashSound);
			 UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), Player->weapon->BloodSpot, Player->weapon->Collision->GetComponentLocation() + SweepResult.ImpactPoint, FRotator::ZeroRotator);

		 }

		
		 //UGameplayStatics::PlaySoundAtLocation(GetWorld(), Player->weapon->BloodSound, OtherComp->GetComponentLocation());
		 

		 
   }

	 

}


void UCSC_AttackComponent::SetVictim(AActor* Target, bool Positionedbehind)
{
	Enemy = Cast<APJH_EnemyBase>(Target);
	isassassination = Positionedbehind;
}

void UCSC_AttackComponent::PlayFinisher()
{    
	if (Enemy == nullptr)
	{
		return;
	}
	else {
		if (!Player->NPCKPlayerState->RequestPlayerState(EPlayerState::Finisher)) {
			return;
		}
	}

	////GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Finisher"));
	FRotator PlayerRot = Player->GetActorRotation();
	FRotator LookatEnemyRotation = UKismetMathLibrary::FindLookAtRotation(Player->GetActorLocation(), Enemy->GetActorLocation());
	FRotator TargetRot = (FRotator(PlayerRot.Pitch, LookatEnemyRotation.Yaw, PlayerRot.Roll));
	FRotator LookatPlayerRotation = FRotator(Enemy->GetActorRotation().Pitch, UKismetMathLibrary::FindLookAtRotation(Enemy->GetActorLocation(), Player->GetActorLocation()).Yaw, Enemy->GetActorRotation().Roll);
	float distance = (Player->GetActorLocation() - Enemy->GetActorLocation()).Size();


	
	UCapsuleComponent* PlayerCapsule = Player->GetCapsuleComponent();


	if (isassassination && distance < 200)
	{
		FVector TargetLocation = Enemy->GetActorLocation() - (LookatEnemyRotation.Vector()*50);
		MoveComponentToLocation(PlayerCapsule, TargetLocation, TargetRot, 0.2,TEXT("Ambush"));

		changeCameraView(FRotator(0, 180, 0), 200);
		bFinish = true;
		return;
	}
	else if(!isassassination && distance < 200)
	{
		FVector TargetLocation = Enemy->GetActorLocation() - (LookatEnemyRotation.Vector() * 150);
		MoveComponentToLocation(PlayerCapsule, TargetLocation, TargetRot, 0.2, TEXT("Finish"));

		changeCameraView(FRotator(0, 90, 0), 200);
		bFinish = true;
	}

}



void UCSC_AttackComponent::UnderAttack(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, float damage, float posture, float Imfact, bool isParryable)
{   

	if (Player->NPCKPlayerState->RequestPlayerState(EPlayerState::Hit))
	{
		//////GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("ChangeHit"));
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("True"));
	}
	else
	{
		return;
	}
	FVector hit = OtherActor->GetActorLocation(); hit.Z = 0;
	FVector center = Player->GetActorLocation(); center.Z = 0;
	FVector direction = hit - center;

	//벡터 내적
	float dot = FVector::DotProduct(Player->GetActorForwardVector(), direction.GetSafeNormal());
	float AcosRadian = FMath::Acos(dot);
	float angle = FMath::RadiansToDegrees(AcosRadian);
	
	if (isParryable) {
		if (Player->parryComp->bCanParry && angle < 80 && Player->parryComp->bStartParry && Player->NPCKPlayerState->RequestPlayerState(EPlayerState::Parry)) {
			// 패링 성공
			Player->parryComp->bStartParry = false;
			
			// determine parry section
			FVector hitPoint = OtherComp->GetComponentLocation();
			FVector dir = Player->GetActorLocation() - hitPoint;
			FVector cross = FVector::CrossProduct(Player->GetActorForwardVector(), dir.GetSafeNormal());

			// parry motion number
			int32 newNum;
			if (cross.Z < 0) {
				if (hitPoint.Z > 120) {
					newNum = 1;
				}
				else {
					newNum = 2;
				}
			}
			else {
				if (hitPoint.Z > 120) {
					newNum = 3;
				}
				else {
					newNum = 4;
				}
			}
			anim->PlayParryMontage(newNum);

			// 플레이어 체간 회복 멈춤
			Player->guardComp->setRecoverTime(0.0f);

			// 넉백
			Player->LaunchCharacter(OtherActor->GetActorForwardVector() * posture * 10, false, false);

			APJH_EnemyBase* testEnemy = Cast<APJH_EnemyBase>(OtherActor);
			testEnemy->fsm->receiveDamage(0, posture / 2);

			//Player->NPCKPlayerState->SetPlayerState(EPlayerState::Parry);

			// 파티클 시스템
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Player->parryComp->particle, OtherComp->GetComponentLocation(), FRotator::ZeroRotator, FVector(0.3f), true);
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), Player->parryComp->parrySound, OtherComp->GetComponentLocation());

			// 적 무기 component 와 한번만 충돌하게 설정
			OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
		else if (anim->isGuard && angle < 80) { // 가드 상태이고 공격이 전방에 있을때

			Player->guardComp->changeGuardGauge(damage);

			// 가드 몽타주 애니메이션
			//me->anim->changeGuardMontageSection(damage);
			//me->anim->playGuardMontage();

			// 플레이어 체간 회복 멈춤
			Player->guardComp->setRecoverTime(0.0f);

			Player->NPCKPlayerState->Posture += posture;

			anim->isHit = true;

			anim->playGuardHitMontage();

			// 넉백
			Player->LaunchCharacter(OtherActor->GetActorForwardVector() * posture * 10, false, false);

			// 파티클 시스템
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Player->guardComp->particle, OtherComp->GetComponentLocation(), FRotator::ZeroRotator, FVector(0.3f), true);
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), Player->guardComp->guardSound, OtherComp->GetComponentLocation());
		}
		else { // 가드 실패 / 피격
			anim->isHit = true;
			anim->Montage_Stop(0.1);
			anim->playHitMontage();

			// 플레이어 체간 회복 멈춤
			Player->guardComp->setRecoverTime(0.0f);

			Player->NPCKPlayerState->HP -= damage;
			Player->NPCKPlayerState->Posture += posture;

			if (Player->NPCKPlayerState->HP <= 0) {
				Player->NPCKPlayerState->SetPlayerState(EPlayerState::Die);
				anim->Montage_Stop(0.1);
				anim->Montage_Play(anim->dieMontage);
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Die"));

			}

			// 넉백
			Player->LaunchCharacter(OtherActor->GetActorForwardVector() * Imfact * 10, false, false);

			// 패링 입력 초기화
			anim->startParry = false;

			//Player->NPCKPlayerState->SetPlayerState(EPlayerState::Hit);

			UGameplayStatics::PlaySoundAtLocation(GetWorld(), Player->guardComp->hitSound, OtherComp->GetComponentLocation());

			
		}
	}
	else { // 가드 실패 / 피격
		anim->isHit = true;
		anim->Montage_Stop(0.1);
		anim->playHitMontage();

		// 플레이어 체간 회복 멈춤
		Player->guardComp->setRecoverTime(0.0f);

		Player->NPCKPlayerState->HP -= damage;
		Player->NPCKPlayerState->Posture += posture;

		if (Player->NPCKPlayerState->HP <= 0) {
			Player->NPCKPlayerState->SetPlayerState(EPlayerState::Die);
			anim->Montage_Stop(0.1);
			anim->Montage_Play(anim->dieMontage);
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Die"));
		}

		// 넉백
		Player->LaunchCharacter(OtherActor->GetActorForwardVector() * Imfact * 10, false, false);

		// 패링 입력 초기화
		anim->startParry = false;

		Player->NPCKPlayerState->SetPlayerState(EPlayerState::Hit);

		UGameplayStatics::PlaySoundAtLocation(GetWorld(), Player->guardComp->hitSound, OtherComp->GetComponentLocation());
	}

	// other actor collision 꺼줘서 한번만 충돌나도록 설정
	OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	// 체간 회복 멈춤
	Player->guardComp->recoverTime = 0;

	if (Player->NPCKPlayerState->HP <= 0) {
		Player->NPCKPlayerState->RequestPlayerState(EPlayerState::Die);
		
	}
}                     
void UCSC_AttackComponent::MoveComponentToLocation(class UCapsuleComponent* Component, FVector TargetLocation, FRotator TargetRotation, float MoveTime, FName Finisher)
{
	LatentInfo.CallbackTarget = this;
	LatentInfo.ExecutionFunction = Finisher; // 이동이 완료되면 호출할 함수명
	LatentInfo.UUID = GetUniqueID();
	LatentInfo.Linkage = 0;
	anim->Montage_Stop(0.1);
	UKismetSystemLibrary::MoveComponentTo(Component, TargetLocation, TargetRotation, false, false, 0.2, true, EMoveComponentAction::Type::Move, LatentInfo);
	

	//FLatentActionInfo info;
	//info.CallbackTarget = this;
	//info.ExecutionFunction
	//UKismetSystemLibrary::Delay(GetWorld(), 0.2f, )
}


void UCSC_AttackComponent::Ambush()
{
	int32 montagenum = UKismetMathLibrary::RandomInteger64InRange(1, 4);
	Enemy->Once = true;

	////GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Isambush"));
	anim->Montage_Play(anim->Player_assassinationMontage);
	anim->Montage_JumpToSection(FName(*FString::Printf(TEXT("Ambush%d"), montagenum)), anim->Player_assassinationMontage);


	
	Enemy->anim->Montage_Play(Enemy->anim->Enemy_assassinationMontage);
	Enemy->anim->Montage_JumpToSection(FName(*FString::Printf(TEXT("Ambushed%d"), montagenum)), Enemy->anim->Enemy_assassinationMontage);
	Enemy->GetCapsuleComponent()->IgnoreActorWhenMoving(Player, true);
	Player->GetCapsuleComponent()->IgnoreActorWhenMoving(Enemy, true);
	
	Enemy->fsm->changeState(EEnemyState::Die);
	UGameplayStatics::PlaySound2D(GetWorld(), Player->mortalAttackSound);
}

void UCSC_AttackComponent::Finish()
{
	FRotator LookatPlayerRotation = FRotator(Enemy->GetActorRotation().Pitch, UKismetMathLibrary::FindLookAtRotation(Enemy->GetActorLocation(), Player->GetActorLocation()).Yaw, Enemy->GetActorRotation().Roll);
	Enemy->Once = true;
	Enemy->SetActorRotation(LookatPlayerRotation);
	int32 montagenum = UKismetMathLibrary::RandomInteger64InRange(1, 7);
	anim->Montage_Play(anim->Player_FinisherMontage);
	anim->Montage_JumpToSection(FName(*FString::Printf(TEXT("Execution%d"), montagenum)), anim->Player_FinisherMontage);

	////GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("FInish"));
	Enemy->anim->Montage_Play(Enemy->anim->Enemy_FinisherMontage);
	Enemy->anim->Montage_JumpToSection(FName(*FString::Printf(TEXT("Executed%d"), montagenum)), Enemy->anim->Enemy_FinisherMontage);

	Enemy->fsm->changeState(EEnemyState::Die);
	UGameplayStatics::PlaySound2D(GetWorld(), Player->mortalAttackSound);
}
void UCSC_AttackComponent::changeCameraView(FRotator newRotation, float newLength) {
	if (newLength == 300) {
		Player->springArm->bInheritPitch = true;
		Player->springArm->bInheritRoll = true;
		Player->springArm->bInheritYaw = true;
		Player->springArm->SetWorldRotation(newRotation);
		Player->springArm->TargetArmLength = newLength;

		Player->EnableInput(GetWorld()->GetFirstPlayerController());
	}
	else {
		Player->springArm->bInheritPitch = false;
		Player->springArm->bInheritRoll = false;
		Player->springArm->bInheritYaw = false;
		Player->springArm->SetWorldRotation(newRotation);
		Player->springArm->TargetArmLength = newLength;

		Player->DisableInput(GetWorld()->GetFirstPlayerController());
	}
}


