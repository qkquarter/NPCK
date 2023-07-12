// Fill out your copyright notice in the Description page of Project Settings.


#include "PJH_GuardComponent.h"
#include "NPCK_Player.h"
#include <../Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputComponent.h>
#include <../Plugins/EnhancedInput/Source/EnhancedInput/Public/InputAction.h>
#include "NPCK_AnimInstance.h"
#include <GameFramework/CharacterMovementComponent.h>
#include "PJH_ParryComponent.h"
#include <Kismet/GameplayStatics.h>
#include "PJH_EnemyFSM.h"

// Sets default values for this component's properties
UPJH_GuardComponent::UPJH_GuardComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UPJH_GuardComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	me = Cast<ANPCK_Player>(GetOwner());
}

// Called every frame
void UPJH_GuardComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	if (isWaitComplete(1.5f)) { // 1.5초 동안 방해받지 않으면 체간 회복 시작
		recoverGuardGauge();
	}
}

void UPJH_GuardComponent::SetupPlayerInputComponent(UEnhancedInputComponent* enhancedInputComponent) {
	enhancedInputComponent->BindAction(guardKey, ETriggerEvent::Started, this, &UPJH_GuardComponent::inputGuard);
	enhancedInputComponent->BindAction(guardKey, ETriggerEvent::Completed, this, &UPJH_GuardComponent::releaseGuard);
}

void UPJH_GuardComponent::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, 
										int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	// 잠깐 중지
	return;

	//// 전방인지 확인 - 각도가 요상한데
	//FVector hit = OtherActor->GetActorLocation(); hit.Z = 0;
	//FVector center = me->GetActorLocation(); center.Z = 0;
	//FVector direction = hit - center;
	//float dot = FVector::DotProduct(me->GetActorForwardVector(), direction.GetSafeNormal());
	//float AcosRadian = FMath::Acos(dot);
	//float angle = FMath::RadiansToDegrees(AcosRadian);

	//if (OtherActor != me && isGuard && angle < 80) {
	//	UE_LOG(LogTemp, Warning, TEXT("Comp : Guard Successful %f"), angle);
	//	//임시로 가드게이지 여기서 차감
	//	changeGuardGauge(40.0f);
	//	me->LaunchCharacter(OtherActor->GetActorForwardVector() * 300, false, false);
	//}
	//else {
	//	UE_LOG(LogTemp, Warning, TEXT("Comp : Guard Failed %f"), angle);
	//	// 맞았을때 가드 게이지에 따라서 
	//	me->anim->isHit = true;
	//	me->LaunchCharacter(OtherActor->GetActorForwardVector() * 300, false, false);
	//}
	//
	//// other actor collision 꺼줘서 한번만 충돌나도록 설정
	//OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void UPJH_GuardComponent::inputGuard() {

	me->anim->isGuard = true;
	//me->anim->playGuardMontage();


}
void UPJH_GuardComponent::releaseGuard() {

	//me->anim->playGuardMontage();
	me->anim->isGuard = false; 
	
}

void UPJH_GuardComponent::changeGuardGauge(float num) {
	//guardGauge -= num;
	me->NPCKPlayerState->Posture += num;

	if (me->NPCKPlayerState->Posture > 100) { // 자세 무너짐

		me->anim->isGuard = false;
		//me->anim->guardBreak = true;
		
		// 가드 몽타주 애니메이션
		//me->anim->playGuardMontage();
		me->anim->playHitMontage();
		
		// 잠시동안 행동불가
		//me->DisableInput(GetWorld()->GetFirstPlayerController());

		UGameplayStatics::PlaySound2D(GetWorld(), me->guardBreakSound);
	}
}
float UPJH_GuardComponent::getGuardGauge() {
	return me->NPCKPlayerState->Posture;
}
void UPJH_GuardComponent::setGuardGauge(float num) {
	me->NPCKPlayerState->Posture = num;
}
void UPJH_GuardComponent::recoverGuardGauge() {
	if (me->NPCKPlayerState->Posture >= 100) {
		me->NPCKPlayerState->Posture = 0; return;
	}
	else if (me->NPCKPlayerState->Posture <= 0) return;
	// 체력 비율에 따라서 가드게이지 회복 속도 변화
	// 행동(공격, 패링 등) 하면 가드게이지 잠깐 회복 멈춤
	// 가드 유지시 가드게이지 회복 빨라짐
	
	if (me->NPCKPlayerState->HP <= 25) {
		me->NPCKPlayerState->Posture -= GetWorld()->GetDeltaSeconds() * 3 * (1 + (isGuard * 2));
	}
	else if (me->NPCKPlayerState->HP <= 70) {
		me->NPCKPlayerState->Posture -= GetWorld()->GetDeltaSeconds() * 6 * (1 + (isGuard * 2));
	}
	else {
		me->NPCKPlayerState->Posture -= GetWorld()->GetDeltaSeconds() * 9 * (1 + (isGuard * 2));
	}
}
void UPJH_GuardComponent::receiveAttack(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FAttackData atkData, bool isParryable, bool isGuardable) {
	// 전방 확인
	FVector hit = OtherActor->GetActorLocation(); hit.Z = 0;
	FVector center = me->GetActorLocation(); center.Z = 0;
	FVector direction = hit - center;
	//
	////벡터 내적
	float dot = FVector::DotProduct(me->GetActorForwardVector(), direction.GetSafeNormal());
	float AcosRadian = FMath::Acos(dot);
	float angle = FMath::RadiansToDegrees(AcosRadian);


	if (isGuardable) {
		if (me->anim->isGuard && angle < 80) { // 가드 상태이고 공격이 전방에 있을때
			changeGuardGauge(atkData.postureDamage);

			// 가드 몽타주 애니메이션
			//me->anim->changeGuardMontageSection(damage);
			//me->anim->playGuardMontage();

			//me->anim->setDamage(atkData.damage);
			me->anim->isHit = true;

			me->anim->playGuardHitMontage();

			// 넉백
			me->LaunchCharacter(OtherActor->GetActorForwardVector(), false, false);

			// 파티클 시스템
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), particle, OtherComp->GetComponentLocation(), FRotator::ZeroRotator, true);
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), guardSound, OtherComp->GetComponentLocation());
		}
		else { // 가드 실패 / 피격
			me->anim->isHit = true;
			me->anim->playHitMontage();

			// 플레이어 체력 감소


			// 넉백
			me->LaunchCharacter(OtherActor->GetActorForwardVector() * atkData.postureDamage, false, false);

			// 패링 입력 초기화
			me->anim->startParry = false;

			UGameplayStatics::PlaySoundAtLocation(GetWorld(), hitSound, OtherComp->GetComponentLocation());
		}
	}
	else {
		me->anim->isHit = true;
		me->anim->playHitMontage();

		// 플레이어 체력 감소

		// 넉백
		me->LaunchCharacter(OtherActor->GetActorForwardVector() * atkData.postureDamage, false, false);

		// 패링 입력 초기화
		me->anim->startParry = false;

		UGameplayStatics::PlaySoundAtLocation(GetWorld(), hitSound, OtherComp->GetComponentLocation());
	}
	
	// other actor collision 꺼줘서 한번만 충돌나도록 설정
	OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	// 체간 회복 멈춤
	recoverTime = 0;

	//if (me->anim->isGuard  && angle < 80) { // 가드 상태이고 공격이 전방에 있을때
	//	changeGuardGauge(damage);

	//	// 가드 몽타주 애니메이션
	//	//me->anim->changeGuardMontageSection(damage);
	//	//me->anim->playGuardMontage();

	//	me->anim->setDamage(damage);
	//	me->anim->isHit = true;

	//	me->anim->playGuardHitMontage();

	//	// 넉백
	//	//me->LaunchCharacter(OtherActor->GetActorForwardVector() * damage * 10, false, false);

	//	// 파티클 시스템
	//	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), particle, OtherComp->GetComponentLocation(), FRotator::ZeroRotator, true);
	//	UGameplayStatics::PlaySoundAtLocation(GetWorld(), guardSound, OtherComp->GetComponentLocation());
	//}
	//else { // 가드 실패 / 피격
	//	me->anim->isHit = true;
	//	me->anim->playHitMontage();

	//	// 넉백
	//	me->LaunchCharacter(OtherActor->GetActorForwardVector() * damage * 10, false, false);

	//	// 패링 입력 초기화
	//	me->anim->startParry = false;
	//}
	//
	//// other actor collision 꺼줘서 한번만 충돌나도록 설정
	//OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//// 체간 회복 멈춤
	//recoverTime = 0;

}
bool UPJH_GuardComponent::isWaitComplete(float delayTime) {
	if (recoverTime > delayTime) { // 체간 회복 시작
		return true;
	}
	else {
		recoverTime += GetWorld()->DeltaTimeSeconds;
		return false;
	}
}
/*
	가드 테스트
	1. 플레이어 + 가드 컴포넌트 - completed
	   플레이어 이동 회전 추가 - completed
	2. 적 + 휘두르는 애니메이션 + notify 로 무기 collision 조정 - completed
	3. 플레이어 enhanced input 으로 가드 입력 - completed
	4. 가드 애니메이션 재생 - completed
	5. 가드 상태 전환 - completed
	   충돌처리 - completed - 충돌처리를 컴포넌트 안에서 하는게 나을려나? - completed
	   충돌처리가 한번만 되게 - 좀 더 지켜봐야됨
	6. 전방 방향만 가드 가능하도록 - 각도가 맞는지 확인해봐야 됨 - impactPoint 보단 other actor location 으로 측정 - completed
	   가드 게이지 - 가드게이지 가득차면 자세 무너짐(일정 시간 조작 불가) - 조작불가 구현필요

	   공격받을때, 공격할때, 일시적으로 체간회복 멈춤. - completed
	   time change 함수 구현 - completed
	   가드 아닐때 피격 애니메이션 추가 - 으아아아아 안돼 왜 - completed
	   

	   체력 비율에 따른 가드 게이지 회복함수 - completed
	   가드 게이지를 어떻게 넘겨줄 것인가 / overlap 에서 other actor cast 로? enemy 에 함수 추가? - 상의필요
	7. 관련 애니메이션 재생 - 가드 게이지에 따라서 1 2 3 애니메이션 출력? - 1번만 completed
	   서브 스테이트 머신으로 상황에 따른 애니메이션 출력 / 몽타주 애니메이션으로 하자 - completed 서브 스테이트 머신으로 함

	receiveAttack / (공격력, 체간데미지), 넉백 거리 - completed
*/