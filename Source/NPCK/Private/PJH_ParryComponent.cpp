// Fill out your copyright notice in the Description page of Project Settings.


#include "PJH_ParryComponent.h"
#include <../Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputComponent.h>
#include "NPCK_Player.h"
#include "PJH_GuardComponent.h"
#include "NPCK_AnimInstance.h"
#include <Kismet/GameplayStatics.h>
#include <Particles/ParticleSystem.h>
#include "PJH_EnemyBase.h"
#include "CSC_Weapons.h"
#include "PJH_EnemyFSM.h"

// Sets default values for this component's properties
UPJH_ParryComponent::UPJH_ParryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UPJH_ParryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UPJH_ParryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	if (bStartParry) {
		if (parryTime >= 0.5f) {
			parryTime = 0;
			bStartParry = false;
		}
		else {
			//UE_LOG(LogTemp, Warning, TEXT("%f"), parryTime);
			parryTime += DeltaTime;
		}
	}
}
void UPJH_ParryComponent::SetupPlayerInputComponent(UEnhancedInputComponent* enhancedInputComponent) {
	enhancedInputComponent->BindAction(parryKey, ETriggerEvent::Started, this, &UPJH_ParryComponent::inputParry); // triggered ���� started  �� ����
	enhancedInputComponent->BindAction(parryKey, ETriggerEvent::Completed, this, &UPJH_ParryComponent::releaseParry);

	me = Cast<ANPCK_Player>(GetOwner());
	enhancedInputComponent->BindAction(parryKey, ETriggerEvent::Triggered, me->guardComp, &UPJH_GuardComponent::inputGuard);
}

void UPJH_ParryComponent::inputParry() {
	/*if (!bStartParry) {
		bStartParry = true;
	}*/
	bStartParry = true;
	bCanParry = true;
}
void UPJH_ParryComponent::releaseParry() {
	bCanParry = false;
	bStartParry = false;
	parryTime = 0.0f;
}
void UPJH_ParryComponent::receiveAttack(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FAttackData atkData, bool isParryable, bool isGuardable) {
	// ���� ������ �������� Ȯ�� - ������ �� actor location ������� ������, ���߿��� hitinfo.impactPoint �� �ؾߵ�����(������ �̻��ϰ� ���ͼ� ������)
	FVector hit = OtherActor->GetActorLocation(); hit.Z = 0;
	FVector center = me->GetActorLocation(); center.Z = 0;
	FVector direction = hit - center;

	// ���� ����
	float dot = FVector::DotProduct(me->GetActorForwardVector(), direction.GetSafeNormal());
	float AcosRadian = FMath::Acos(dot);
	float angle = FMath::RadiansToDegrees(AcosRadian);

	
	if (isParryable) { // �и� ���� ����
		if (bCanParry && angle < 80 && bStartParry) { // �и� ���ɻ��� + ������ ĳ���� ���濡�� �޾�����
			// �и� ����
			me->anim->startParry = true;
			//UE_LOG(LogTemp, Warning, TEXT("parry start"));

			bStartParry = false;

			// determine parry section
			FVector hitPoint = OtherComp->GetComponentLocation();
			FVector dir = me->GetActorLocation() - hitPoint;
			FVector cross = FVector::CrossProduct(me->GetActorForwardVector(), dir.GetSafeNormal());

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
			me->anim->PlayParryMontage(newNum);

			// �÷��̾� ü�� ȸ�� ����
			me->guardComp->setRecoverTime(0.0f);

			// �˹�
			me->LaunchCharacter(OtherActor->GetActorForwardVector() * atkData.postureDamage, false, false);
			
			// ������ ü�������� �ֱ�
			//UChildActorComponent* childComp = Cast<UChildActorComponent>(OtherActor);
			//OtherActor->GetOwner();
			//ACSC_Weapons* weapon = Cast<ACSC_Weapons>(OtherActor);

			APJH_EnemyBase* testEnemy = Cast<APJH_EnemyBase>(OtherActor);
			if (IsValid(testEnemy)) {
				//testEnemy->fsm->receiveDamage(0, atkData.postureDamage / 2);
				//UE_LOG(LogTemp, Warning, TEXT("%f"), testEnemy->getPostrue());
			}

			// ��ƼŬ �ý���
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), particle, OtherComp->GetComponentLocation(), FRotator::ZeroRotator, FVector(0.5f), true);
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), parrySound, OtherComp->GetComponentLocation());
			
			// �� ���� component �� �ѹ��� �浹�ϰ� ����
			OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
		else {
			// �и� ���� - ����� �Ѿ
			me->guardComp->receiveAttack(OtherActor, OtherComp, atkData, isParryable, isGuardable);
		}
	}
	else { // �и� �Ұ����� ����
		// �ǰ� �ִϸ��̼� ����
		me->anim->isHit = true;
		me->anim->playHitMontage();

		// �÷��̾� ü�� ����


		// �÷��̾� ü�� ȸ�� ����
		me->guardComp->setRecoverTime(0.0f);

		// �˹�
		me->LaunchCharacter(OtherActor->GetActorForwardVector() * atkData.postureDamage, false, false);

		// �и� �Է� �ʱ�ȭ
		me->parryComp->bStartParry = false;

		UGameplayStatics::PlaySoundAtLocation(GetWorld(), hitSound, OtherComp->GetComponentLocation());
	}
}
/*
	���� Ű / �и� Ű ����
	5 ������ ���� / 30������ ���� �и� ����

	�и� Ÿ�̹� �ȸ����� ���� - completed
	���� �ִϸ��̼� ������ �ٽ� �¾Ƶ� ����� �ǰ�(�и� �ʱ�ȭ �ȵǰ�) - completed

	���� �ִϸ��̼��� ��� ����Ǵϱ� �и��� ��� �Ǵ±���...........
	���� �ִϸ��̼� ��Ÿ�ַ� ����� ���κ� ���ѷ��� �ƴϸ� �� bool �߰�? - bool �߰� completed

	�Լ� ���� ��ü�� receive attack �� parry comp �� �ְ� parry �ƴϸ� guard �� �Ѿ��? - parry comp -> guard comp �Ѱ��� completed

	�и� �ص� ��������� ȸ�� ����ߴ� - completed

	���� ���� �ǰ� �� �ٷ� �и�Ű �Է��ص� �и��� ����. �� �ȵǴµ�? �����غ��ߵ�
*/

/*
2023.03.29
ĳ���� �տ� box �־ hitpoint �� ��ġ�� �ޱ�.


*/