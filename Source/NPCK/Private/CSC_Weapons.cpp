// Fill out your copyright notice in the Description page of Project Settings.


#include "CSC_Weapons.h"
#include <Components/SceneComponent.h>
#include <Components/StaticMeshComponent.h>
#include <Components/CapsuleComponent.h>
#include "NPCK_Player.h"
#include "PJH_EnemyFSM.h"
#include "PJH_ParryComponent.h"
#include "PJH_EnemyBase.h"
#include "CSC_AttackComponent.h"
#include <../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponent.h>
#include <Kismet/GameplayStatics.h>
#include <Sound/SoundBase.h>
#include "NPCK_AnimInstance.h"

// Sets default values
ACSC_Weapons::ACSC_Weapons()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootcomp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(rootcomp);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Katana"));
	Mesh->SetupAttachment(rootcomp);
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
	Collision->SetupAttachment(Mesh);
	Collision->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	BloodTrail = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BloodTrail"));
	BloodTrail->SetupAttachment(Mesh);
	BloodTrail->SetUserParametersToDefaultValues();
	
}

// Called when the game starts or when spawned
void ACSC_Weapons::BeginPlay()
{
	Super::BeginPlay();

	
	// anim instance addlambda

}

// Called every frame
void ACSC_Weapons::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	//Collision->OnComponentBeginOverlap
}

void ACSC_Weapons::setAttachedActor(AActor* actor) {
	// 지워도 될듯?
	attachedActor = actor;
	Collision->MoveIgnoreActors.Add(attachedActor);
}
void ACSC_Weapons::NotifyActorBeginOverlap(AActor* OtherActor) {
	// 지울 예정
	//if (OtherActor->GetName().Contains(TEXT("Enemy"))) {
	//	UE_LOG(LogTemp, Warning, TEXT("Enemy Hit"));
	//	APJH_EnemyBase* temp = Cast<APJH_EnemyBase>(OtherActor);
	//	if (IsValid(temp))
	//	{
	//		temp->fsm->receiveDamage(10.0f);
	//	}
	//	
	//	// attack component 로 연결?
	//	Collision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//}
	if (OtherActor->GetName().Contains(TEXT("NPCK"))) {
		// 적 공격정보 받아오기 enemy base 에 attackInfos 배치
		APJH_EnemyBase* enemy = Cast<APJH_EnemyBase>(attachedActor);
		
		// 적 공격 받으면 체간회복 멈추게 하기

		//UE_LOG(LogTemp, Warning, TEXT("Player Hit"));
		ANPCK_Player* tempCharacter = Cast<ANPCK_Player>(OtherActor);

		//tempCharacter->parryComp->receiveAttack(attachedActor, Collision, enemy->fsm->attackInfos[enemy->fsm->attackIdx], true, true);

		//float enemydamage = FMath::RandRange(AttackDamage*0.8 , AttackDamage*1.2);
		
		if (tempCharacter != nullptr )
		{
			tempCharacter->atComp->UnderAttack(attachedActor,
				Collision,
				enemy->fsm->attackInfos[enemy->fsm->attackIdx].damage,
				enemy->fsm->attackInfos[enemy->fsm->attackIdx].postureDamage,
				enemy->fsm->attackInfos[enemy->fsm->attackIdx].postureDamage,
				true);

			if (!tempCharacter->anim->isGuard) {
				BloodTrail->Activate(true);
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), BloodSound, tempCharacter->GetActorLocation());
			}
				
		}
		
		
		//class AActor* OtherActor, class UPrimitiveComponent* OtherComp, float damage, float posture, float Imfact, bool isParryable, float Damage

	}
}