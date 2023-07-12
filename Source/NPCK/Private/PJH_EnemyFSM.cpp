// Fill out your copyright notice in the Description page of Project Settings.


#include "PJH_EnemyFSM.h"
#include "PJH_EnemyBase.h"
#include "PJH_EnemyBaseAnim.h"
#include <Kismet/GameplayStatics.h>
#include <NavigationSystem/Public/NavigationSystem.h>
#include <NavigationSystem/Public/NavigationSystemTypes.h>
#include <AIModule/Classes/AITypes.h>
#include <AIModule/Classes/AIController.h>
#include "NPCK_Player.h"
#include "CSC_Weapons.h"
#include <Components/CapsuleComponent.h>
#include "CSC_AttackComponent.h"
#include <Components/BoxComponent.h>

// Sets default values for this component's properties
UPJH_EnemyFSM::UPJH_EnemyFSM()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPJH_EnemyFSM::BeginPlay()
{
	Super::BeginPlay();
	//me= Cast<>(GetOwner());
	AActor* actor = UGameplayStatics::GetActorOfClass(GetWorld(), ANPCK_Player::StaticClass());
	target = Cast<ANPCK_Player>(actor);
	setAttackInfos();
	
	me = Cast<APJH_EnemyBase>(GetOwner());
	anim = Cast<UPJH_EnemyBaseAnim>(me->GetMesh()->GetAnimInstance());
	ai = Cast<AAIController>(me->GetController());
	
	
}


// Called every frame
void UPJH_EnemyFSM::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	switch (mState) {
	case EEnemyState::Idle:
		IdleState();
		break;
	case EEnemyState::Move:
		MoveState();
		break;
	case EEnemyState::Attack:
		AttackState();
		break;
	case EEnemyState::Guard:
		GuardState();
		break;
	case EEnemyState::Damaged:
		DamagedState();
		break;
	case EEnemyState::Vulnerable:
		VulnerableState();
		break;
	case EEnemyState::Die:
		DieState();
		break;
	default:
		break;
	}
	// ...

}

TArray<FAttackData> UPJH_EnemyFSM::getAttackInfos() {
	return attackInfos;
}

void UPJH_EnemyFSM::receiveDamage(float damage, float postureDamage)
{
	{////GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("damage"));
	if (mState == EEnemyState::Guard || damage == 0) {
		 //���� ���� : ������ x ü�������� o
		me->changePosture(postureDamage);
	}
	else {
		 //������ o, ü�������� o
		me->changeHealthPoint(-damage);
		me->changePosture(postureDamage);
		changeState(EEnemyState::Damaged);
		if (anim->IsAnyMontagePlaying())
		{
		anim->Montage_Stop(0.1);

		}
		anim->playHitMontage();
	}
	 //���⼭ ������ �ٲ�ߵǴµ� ����

	if (me->getPostrue() >= me->getMaxPosture()) {
		anim->bVulnerable = true;

		target->atComp->SetVictim(me, false);
		me->ShotDown();

		
		anim->playHitMontage();
		changeState(EEnemyState::Vulnerable);
	}

}
}

void UPJH_EnemyFSM::IdleState() {
	// targetOn == false ��� Ž��
	// targetOn == true �ٷ� attack or guard

	if (targetOn) { // �÷��̾� �߰����� ���
		int32 tmp = FMath::RandRange(0, 100);
		// 50% Ȯ���� ���� / 50% Ȯ���� ����
		if (tmp < 50) {
			changeState(EEnemyState::Guard);
		}
		else {
			changeState(EEnemyState::Attack);
		}
	}
	else { // �÷��̾� �߰߸����� ���

		if (checkRange(searchRange)) {
			changeState(EEnemyState::Move);
			targetOn = true;
		}
	}
}
void UPJH_EnemyFSM::MoveState() 
{
	// ��ǥ�� �̵�, ���ݹ��� ���̸� attack
	destination = target->GetActorLocation();

	// navigation setting
	UNavigationSystemV1* ns = UNavigationSystemV1::GetNavigationSystem(GetWorld());
	FPathFindingQuery query;
	FAIMoveRequest req;
	req.SetAcceptanceRadius(80);
	req.SetGoalLocation(destination);
	ai->BuildPathfindingQuery(req, query);
	FPathFindingResult r = ns->FindPathSync(query);
	
	if ((r.Result == ENavigationQueryResult::Success)) 
	{
		EPathFollowingRequestResult::Type result = ai->MoveToLocation(destination);

		FVector dir = target->GetActorLocation() - me->GetActorLocation();
	
		if (dir.Length() < attackRange) 
		{
			changeState(EEnemyState::Attack);
		}

		if (result == EPathFollowingRequestResult::AlreadyAtGoal) 
		{
			changeState(EEnemyState::Idle);
		}
	}
}

void UPJH_EnemyFSM::AttackState() {
	// ���� ���� �ƴϸ� pattern �ϳ� �����ؼ� �ִϸ��̼� ����
	// �ִϸ��̼� ����� delay ��ŭ ���
	// �� �� ���� �ȿ� ������ �ٽ� pattern ����
	ai->StopMovement();
	// ���ݹ��� check
	if (checkRange(attackRange)) {
		//selectIdx();
		if (!anim->bAttack) {
			if (isWaitComplete(attackInfos[attackIdx].attackDelay)) {
				UE_LOG(LogTemp, Warning, TEXT("Wait Complete"));
				selectIdx();
				anim->bAttack = true;
			}
		}

	}
	else { // ���ݹ��� ���̸� move
		if (!anim->bAttack) {
			changeState(EEnemyState::Move);
		}
	}
}
void UPJH_EnemyFSM::GuardState() {
	ai->StopMovement();
	// 2�ʰ� ���� ����
	// ���ݹ����� hp ������ �ȹ���, ü�� ������ ����, ���� �ִϸ��̼� �߰� �ʿ�
	// �߰������� �¿�� �Դٰ��� �ϸ�? ������?
	if (isWaitComplete(2.0f)) {
		changeState(EEnemyState::Idle);
		isGuard = false;
	}
}
void UPJH_EnemyFSM::DamagedState() {
	ai->StopMovement();
	// 0.5�ʰ� ���, �� �� idle
	// �ð��� �ִϱ� �ִϸ��̼� ������ �ð��̶� �¹����� �ʴ� ��찡 �ֱ⿡ �ִϸ��̼� ���� ����϶� state ��ȭ ��ߵɵ�
	//if (isWaitComplete(0.5f)) {
	//	changeState(EEnemyState::Idle);
	//}
}
void UPJH_EnemyFSM::VulnerableState() {
	ai->StopMovement();

	// 3�ʰ� ���, �� �� idle
	if (isWaitComplete(3.0f)) {
		anim->bVulnerable = false;
		anim->Montage_Stop(0.0f);
		me->setPosture(me->getMaxPosture() / 2);
		changeState(EEnemyState::Idle);
	}
}
void UPJH_EnemyFSM::DieState() {
	// ������ collision off
	// �� �� �� ��ü �������? �̰� ���߿� �����غ���
}

void UPJH_EnemyFSM::changeState(EEnemyState state) {
	//UE_LOG(LogTemp, Warning, TEXT("%d -----> %d"), mState, state);
	mState = state;
	anim->state = mState;

	switch (mState) {
	case EEnemyState::Idle:
		break;
	case EEnemyState::Move:
		break;
	case EEnemyState::Attack:
		ai->StopMovement();
		//currentTime = 3.0f;
		break;
	case EEnemyState::Guard:
		ai->StopMovement();
		isGuard = true;
		break;
	case EEnemyState::Damaged:
		ai->StopMovement();
		//anim->playHitMontage();
		break;
	case EEnemyState::Vulnerable:
		ai->StopMovement();
		currentTime = 0.0f;
		//anim->bVulnerable = true;
		me->ShotDown();
		UGameplayStatics::PlaySound2D(GetWorld(), me->brokenSound);
		break;
	case EEnemyState::Die:
		me->GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		// Į collision �� ��������
		me->weapon->Collision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		me->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		me->Back->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		break;
	default:
		break;
	}
}

bool UPJH_EnemyFSM::checkRange(float distance) {
	FVector direction = target->GetActorLocation() - me->GetActorLocation();

	if ((direction.Length() < distance) && me->GetDotProductTo(target) >= 0) {
		return true;
	}
	else {
		return false;
	}
}
bool UPJH_EnemyFSM::isWaitComplete(float delayTime) {
	if (currentTime > delayTime) {
		currentTime = 0;
		return true;
	}
	else {
		currentTime += GetWorld()->GetDeltaSeconds();
		return false;
	}
}
void UPJH_EnemyFSM::adjustProbability(int32 index) {
	/*typeProbability[index] /= 2;

	for (int32 i = 0; i < typeProbability.Num(); i++) {
		if (i != index) {
			typeProbability[i] += (typeProbability[index] / 4);
		}
	}*/
}
void UPJH_EnemyFSM::selectIdx() {
	/*float randomProp = FMath::RandRange(0, 100);
	float prop = typeProbability[0];

	for (int32 i = 1; i < typeProbability.Num(); i++) {
		if (randomProp < prop) break;
		prop += typeProbability[i];
		attackIdx = i;
	}
	UE_LOG(LogTemp, Warning, TEXT("%d"), attackIdx);
	anim->attackIdx = attackIdx;*/

	int32 newNum = FMath::RandRange(1, 100);
	if (newNum % 2 == 0) {
		attackIdx = 0;
		anim->attackIdx = attackIdx;
	}
	else {
		attackIdx = 1;
		anim->attackIdx = attackIdx;
	}
}

void UPJH_EnemyFSM::setAttackInfos() {
	// ���Ŀ� csv load ������� �ٲ���
	// pattern 1
	FAttackData tempData;
	tempData.damage = 10;
	tempData.postureDamage = 10;
	tempData.isGuardable = true;
	tempData.isParryable = true;
	tempData.attackDelay = 1.0f;
	attackInfos.Add(tempData);
	typeProbability.Add(20.0f);

	// pattern 2
	tempData.damage = 15;
	tempData.postureDamage = 15;
	tempData.isGuardable = true;
	tempData.isParryable = true;
	tempData.attackDelay = 1.0f;
	attackInfos.Add(tempData);
	typeProbability.Add(20.0f);
}