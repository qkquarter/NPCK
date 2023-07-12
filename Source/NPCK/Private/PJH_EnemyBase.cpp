// Fill out your copyright notice in the Description page of Project Settings.


#include "PJH_EnemyBase.h"
#include <Components/BoxComponent.h>
#include "NPCK_Player.h"
#include "CSC_FInisher.h"
#include "PJH_EnemyBaseAnim.h"
#include "CSC_AttackComponent.h"
#include <GameFramework/CharacterMovementComponent.h>
#include "CSC_Weapons.h"
#include <Components/CapsuleComponent.h>
#include "PJH_EnemyFSM.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
APJH_EnemyBase::APJH_EnemyBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//fsm = CreateDefaultSubobject<UPJH_EnemyFSM>(TEXT("FSM"));

	Back = CreateDefaultSubobject<UBoxComponent>(TEXT("Back"));
	Back->SetupAttachment(RootComponent);
	Back->SetRelativeLocation(FVector(-70, 0, 0));
	Back->SetRelativeScale3D(FVector(1, 1, 2.75f));

	setHealthPoint(100.0f);
	setPosture(100.0f);
	setAttackPoint(10.0f);
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;
	

	// weapon set
	Katana = CreateDefaultSubobject<UChildActorComponent>(TEXT("Katana"));
	Katana->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("Katana"));
}

// Called when the game starts or when spawned
void APJH_EnemyBase::BeginPlay()
{
	Super::BeginPlay();
	weapon = Cast<ACSC_Weapons>(Katana->GetChildActor());
	if (weapon != nullptr) { // weapon 이 enemy 를 무시하도록 editor 에서 설정
		weapon->Collision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		weapon->setAttachedActor(this);
		
	}
	Back->OnComponentBeginOverlap.AddDynamic(this, &APJH_EnemyBase::BackOverlap);
	Back->OnComponentEndOverlap.AddDynamic(this, &APJH_EnemyBase::BackEndOverlap);
	anim = Cast<UPJH_EnemyBaseAnim>(GetMesh()->GetAnimInstance());
	
	Player = Cast<ANPCK_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), ANPCK_Player::StaticClass()));
}

// Called every frame
void APJH_EnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}

// Called to bind functionality to input
void APJH_EnemyBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APJH_EnemyBase::setHealthPoint(float num) {
	HealthPoint = num;
}
void APJH_EnemyBase::changeHealthPoint(float num) {
	HealthPoint += num;
}
float APJH_EnemyBase::getHealthPoint() {
	return HealthPoint;
}
void APJH_EnemyBase::setPosture(float num) {
	Posture = num;
}
void APJH_EnemyBase::changePosture(float num) {
	Posture += num;
}
float APJH_EnemyBase::getPostrue() {
	return Posture;
}
void APJH_EnemyBase::setMaxPosture(float num) {
	maxPosture = num;
}
float APJH_EnemyBase::getMaxPosture() {
	return maxPosture;
}
void APJH_EnemyBase::setAttackPoint(float num) {
	AttackPoint = num;
}
void APJH_EnemyBase::changeAttackPoint(float num) {
	AttackPoint += num;
}
float APJH_EnemyBase::getAttackPoint() {
	return AttackPoint;
}

void APJH_EnemyBase::BackOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult)
{
  if (OtherActor->IsA<ANPCK_Player>() && !Once)
  {
 
  Player = Cast<ANPCK_Player>(OtherActor);
  Player->atComp->SetVictim(this, true);

  
  
  }
}

void APJH_EnemyBase ::BackEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->IsA<ANPCK_Player>())
	{
		
		
		Player->atComp->SetVictim(this, false);

	}
}

void APJH_EnemyBase::ShotDown()
{
	
  if (!Once)
  {
	  Player->atComp->SetVictim(this, false);
  }
   
}


