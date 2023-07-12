// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "PJH_EnemyBase.generated.h"


UCLASS()
class NPCK_API APJH_EnemyBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APJH_EnemyBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	//virtual void SetVictim(class AActor* Target, bool Positionedbehind) override;

	void setHealthPoint(float num);
	void changeHealthPoint(float num);
	float getHealthPoint();

	void setPosture(float num);
	void changePosture(float num);
	float getPostrue();
	void setMaxPosture(float num);
	float getMaxPosture();

	void setAttackPoint(float num);
	void changeAttackPoint(float num);
	float getAttackPoint();

	UFUNCTION()
	void BackOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void BackEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	

	void ShotDown();


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* Back;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FSM)
	class UPJH_EnemyFSM* fsm;

	UPROPERTY(EditAnywhere)
	class UPJH_EnemyBaseAnim* anim;

	bool Once;
	class ANPCK_Player* Player; 
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HitNum = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UChildActorComponent* Katana;

	// 추후에 삭제할지 안할지 결정
	UPROPERTY(EditAnywhere, Category = weapon)
	class ACSC_Weapons* weapon;

	UPROPERTY(EditAnywhere)
		class USoundBase* brokenSound;

	UPROPERTY(EditAnywhere)
		class USoundBase* guardSound;

private:
	float HealthPoint = 0;
	float Posture = 0;
	float AttackPoint = 0;
	float maxPosture = 0;
};
