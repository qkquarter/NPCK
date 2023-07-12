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
	enhancedInputComponent->BindAction(parryKey, ETriggerEvent::Started, this, &UPJH_ParryComponent::inputParry); // triggered 보단 started  더 적합
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
	// 공격 받은게 전방인지 확인 - 지금은 적 actor location 기반으로 하지만, 나중에는 hitinfo.impactPoint 로 해야될지도(각도가 이상하게 나와서 보류중)
	FVector hit = OtherActor->GetActorLocation(); hit.Z = 0;
	FVector center = me->GetActorLocation(); center.Z = 0;
	FVector direction = hit - center;

	// 벡터 내적
	float dot = FVector::DotProduct(me->GetActorForwardVector(), direction.GetSafeNormal());
	float AcosRadian = FMath::Acos(dot);
	float angle = FMath::RadiansToDegrees(AcosRadian);

	
	if (isParryable) { // 패링 가능 공격
		if (bCanParry && angle < 80 && bStartParry) { // 패링 가능상태 + 공격을 캐릭터 전방에서 받았을때
			// 패링 성공
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

			// 플레이어 체간 회복 멈춤
			me->guardComp->setRecoverTime(0.0f);

			// 넉백
			me->LaunchCharacter(OtherActor->GetActorForwardVector() * atkData.postureDamage, false, false);
			
			// 적에게 체간데미지 주기
			//UChildActorComponent* childComp = Cast<UChildActorComponent>(OtherActor);
			//OtherActor->GetOwner();
			//ACSC_Weapons* weapon = Cast<ACSC_Weapons>(OtherActor);

			APJH_EnemyBase* testEnemy = Cast<APJH_EnemyBase>(OtherActor);
			if (IsValid(testEnemy)) {
				//testEnemy->fsm->receiveDamage(0, atkData.postureDamage / 2);
				//UE_LOG(LogTemp, Warning, TEXT("%f"), testEnemy->getPostrue());
			}

			// 파티클 시스템
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), particle, OtherComp->GetComponentLocation(), FRotator::ZeroRotator, FVector(0.5f), true);
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), parrySound, OtherComp->GetComponentLocation());
			
			// 적 무기 component 와 한번만 충돌하게 설정
			OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
		else {
			// 패링 실패 - 가드로 넘어감
			me->guardComp->receiveAttack(OtherActor, OtherComp, atkData, isParryable, isGuardable);
		}
	}
	else { // 패링 불가능한 공격
		// 피격 애니메이션 실행
		me->anim->isHit = true;
		me->anim->playHitMontage();

		// 플레이어 체력 감소


		// 플레이어 체간 회복 멈춤
		me->guardComp->setRecoverTime(0.0f);

		// 넉백
		me->LaunchCharacter(OtherActor->GetActorForwardVector() * atkData.postureDamage, false, false);

		// 패링 입력 초기화
		me->parryComp->bStartParry = false;

		UGameplayStatics::PlaySoundAtLocation(GetWorld(), hitSound, OtherComp->GetComponentLocation());
	}
}
/*
	가드 키 / 패링 키 동일
	5 프레임 선딜 / 30프레임 동안 패링 가능

	패링 타이밍 안맞으면 가드 - completed
	가드 애니메이션 끝나고 다시 맞아도 가드로 되게(패링 초기화 안되게) - completed

	가드 애니메이션이 계속 재생되니까 패링이 계속 되는구나...........
	가드 애니메이션 몽타주로 만들고 끝부분 무한루프 아니면 또 bool 추가? - bool 추가 completed

	함수 구조 자체를 receive attack 을 parry comp 에 주고 parry 아니면 guard 로 넘어가게? - parry comp -> guard comp 넘겨줌 completed

	패링 해도 가드게이지 회복 멈춰야댐 - completed

	아직 가드 피격 후 바로 패링키 입력해도 패링이 느림. 잘 안되는듯? 생각해봐야됨
*/

/*
2023.03.29
캐릭터 앞에 box 넣어서 hitpoint 로 위치값 받기.


*/