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

	if (isWaitComplete(1.5f)) { // 1.5�� ���� ���ع��� ������ ü�� ȸ�� ����
		recoverGuardGauge();
	}
}

void UPJH_GuardComponent::SetupPlayerInputComponent(UEnhancedInputComponent* enhancedInputComponent) {
	enhancedInputComponent->BindAction(guardKey, ETriggerEvent::Started, this, &UPJH_GuardComponent::inputGuard);
	enhancedInputComponent->BindAction(guardKey, ETriggerEvent::Completed, this, &UPJH_GuardComponent::releaseGuard);
}

void UPJH_GuardComponent::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, 
										int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	// ��� ����
	return;

	//// �������� Ȯ�� - ������ ����ѵ�
	//FVector hit = OtherActor->GetActorLocation(); hit.Z = 0;
	//FVector center = me->GetActorLocation(); center.Z = 0;
	//FVector direction = hit - center;
	//float dot = FVector::DotProduct(me->GetActorForwardVector(), direction.GetSafeNormal());
	//float AcosRadian = FMath::Acos(dot);
	//float angle = FMath::RadiansToDegrees(AcosRadian);

	//if (OtherActor != me && isGuard && angle < 80) {
	//	UE_LOG(LogTemp, Warning, TEXT("Comp : Guard Successful %f"), angle);
	//	//�ӽ÷� ��������� ���⼭ ����
	//	changeGuardGauge(40.0f);
	//	me->LaunchCharacter(OtherActor->GetActorForwardVector() * 300, false, false);
	//}
	//else {
	//	UE_LOG(LogTemp, Warning, TEXT("Comp : Guard Failed %f"), angle);
	//	// �¾����� ���� �������� ���� 
	//	me->anim->isHit = true;
	//	me->LaunchCharacter(OtherActor->GetActorForwardVector() * 300, false, false);
	//}
	//
	//// other actor collision ���༭ �ѹ��� �浹������ ����
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

	if (me->NPCKPlayerState->Posture > 100) { // �ڼ� ������

		me->anim->isGuard = false;
		//me->anim->guardBreak = true;
		
		// ���� ��Ÿ�� �ִϸ��̼�
		//me->anim->playGuardMontage();
		me->anim->playHitMontage();
		
		// ��õ��� �ൿ�Ұ�
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
	// ü�� ������ ���� ��������� ȸ�� �ӵ� ��ȭ
	// �ൿ(����, �и� ��) �ϸ� ��������� ��� ȸ�� ����
	// ���� ������ ��������� ȸ�� ������
	
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
	// ���� Ȯ��
	FVector hit = OtherActor->GetActorLocation(); hit.Z = 0;
	FVector center = me->GetActorLocation(); center.Z = 0;
	FVector direction = hit - center;
	//
	////���� ����
	float dot = FVector::DotProduct(me->GetActorForwardVector(), direction.GetSafeNormal());
	float AcosRadian = FMath::Acos(dot);
	float angle = FMath::RadiansToDegrees(AcosRadian);


	if (isGuardable) {
		if (me->anim->isGuard && angle < 80) { // ���� �����̰� ������ ���濡 ������
			changeGuardGauge(atkData.postureDamage);

			// ���� ��Ÿ�� �ִϸ��̼�
			//me->anim->changeGuardMontageSection(damage);
			//me->anim->playGuardMontage();

			//me->anim->setDamage(atkData.damage);
			me->anim->isHit = true;

			me->anim->playGuardHitMontage();

			// �˹�
			me->LaunchCharacter(OtherActor->GetActorForwardVector(), false, false);

			// ��ƼŬ �ý���
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), particle, OtherComp->GetComponentLocation(), FRotator::ZeroRotator, true);
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), guardSound, OtherComp->GetComponentLocation());
		}
		else { // ���� ���� / �ǰ�
			me->anim->isHit = true;
			me->anim->playHitMontage();

			// �÷��̾� ü�� ����


			// �˹�
			me->LaunchCharacter(OtherActor->GetActorForwardVector() * atkData.postureDamage, false, false);

			// �и� �Է� �ʱ�ȭ
			me->anim->startParry = false;

			UGameplayStatics::PlaySoundAtLocation(GetWorld(), hitSound, OtherComp->GetComponentLocation());
		}
	}
	else {
		me->anim->isHit = true;
		me->anim->playHitMontage();

		// �÷��̾� ü�� ����

		// �˹�
		me->LaunchCharacter(OtherActor->GetActorForwardVector() * atkData.postureDamage, false, false);

		// �и� �Է� �ʱ�ȭ
		me->anim->startParry = false;

		UGameplayStatics::PlaySoundAtLocation(GetWorld(), hitSound, OtherComp->GetComponentLocation());
	}
	
	// other actor collision ���༭ �ѹ��� �浹������ ����
	OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	// ü�� ȸ�� ����
	recoverTime = 0;

	//if (me->anim->isGuard  && angle < 80) { // ���� �����̰� ������ ���濡 ������
	//	changeGuardGauge(damage);

	//	// ���� ��Ÿ�� �ִϸ��̼�
	//	//me->anim->changeGuardMontageSection(damage);
	//	//me->anim->playGuardMontage();

	//	me->anim->setDamage(damage);
	//	me->anim->isHit = true;

	//	me->anim->playGuardHitMontage();

	//	// �˹�
	//	//me->LaunchCharacter(OtherActor->GetActorForwardVector() * damage * 10, false, false);

	//	// ��ƼŬ �ý���
	//	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), particle, OtherComp->GetComponentLocation(), FRotator::ZeroRotator, true);
	//	UGameplayStatics::PlaySoundAtLocation(GetWorld(), guardSound, OtherComp->GetComponentLocation());
	//}
	//else { // ���� ���� / �ǰ�
	//	me->anim->isHit = true;
	//	me->anim->playHitMontage();

	//	// �˹�
	//	me->LaunchCharacter(OtherActor->GetActorForwardVector() * damage * 10, false, false);

	//	// �и� �Է� �ʱ�ȭ
	//	me->anim->startParry = false;
	//}
	//
	//// other actor collision ���༭ �ѹ��� �浹������ ����
	//OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//// ü�� ȸ�� ����
	//recoverTime = 0;

}
bool UPJH_GuardComponent::isWaitComplete(float delayTime) {
	if (recoverTime > delayTime) { // ü�� ȸ�� ����
		return true;
	}
	else {
		recoverTime += GetWorld()->DeltaTimeSeconds;
		return false;
	}
}
/*
	���� �׽�Ʈ
	1. �÷��̾� + ���� ������Ʈ - completed
	   �÷��̾� �̵� ȸ�� �߰� - completed
	2. �� + �ֵθ��� �ִϸ��̼� + notify �� ���� collision ���� - completed
	3. �÷��̾� enhanced input ���� ���� �Է� - completed
	4. ���� �ִϸ��̼� ��� - completed
	5. ���� ���� ��ȯ - completed
	   �浹ó�� - completed - �浹ó���� ������Ʈ �ȿ��� �ϴ°� ��������? - completed
	   �浹ó���� �ѹ��� �ǰ� - �� �� ���Ѻ��ߵ�
	6. ���� ���⸸ ���� �����ϵ��� - ������ �´��� Ȯ���غ��� �� - impactPoint ���� other actor location ���� ���� - completed
	   ���� ������ - ��������� �������� �ڼ� ������(���� �ð� ���� �Ұ�) - ���ۺҰ� �����ʿ�

	   ���ݹ�����, �����Ҷ�, �Ͻ������� ü��ȸ�� ����. - completed
	   time change �Լ� ���� - completed
	   ���� �ƴҶ� �ǰ� �ִϸ��̼� �߰� - ���ƾƾƾ� �ȵ� �� - completed
	   

	   ü�� ������ ���� ���� ������ ȸ���Լ� - completed
	   ���� �������� ��� �Ѱ��� ���ΰ� / overlap ���� other actor cast ��? enemy �� �Լ� �߰�? - �����ʿ�
	7. ���� �ִϸ��̼� ��� - ���� �������� ���� 1 2 3 �ִϸ��̼� ���? - 1���� completed
	   ���� ������Ʈ �ӽ����� ��Ȳ�� ���� �ִϸ��̼� ��� / ��Ÿ�� �ִϸ��̼����� ���� - completed ���� ������Ʈ �ӽ����� ��

	receiveAttack / (���ݷ�, ü��������), �˹� �Ÿ� - completed
*/