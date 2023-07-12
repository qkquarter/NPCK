// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CSC_PlayerInterFace.h"
#include "NPCK_PlayerState.h"
#include "CSC_AttackComponent.generated.h"




UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NPCK_API UCSC_AttackComponent : public UActorComponent, public ICSC_PlayerInterFace
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCSC_AttackComponent();
	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void SetupPlayerInputComponent(class UEnhancedInputComponent* EnhancedInputComponent);

public:
    UPROPERTY(EditAnywhere, Category = "Input")
    class UInputAction* AttackInPut;
	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* FinisherInput;
	UPROPERTY(BlueprintReadWrite)
	TArray <class AActor*> Enemies; 
	

	class ANPCK_Player* Player;
	class APJH_EnemyBase* Enemy;

	class UNPCK_AnimInstance* anim;
	class UPJH_EnemyBaseAnim* Enemyanim;
	//공격중인지 확인
	UPROPERTY(BlueprintReadWrite)
	bool IsAttacking = false;
	//다음콤보 가능한 상태인지 확인
	UPROPERTY(BlueprintReadWrite)
	bool CanNextCombo;
	//콤보입력 들어왔는지 확인
	UPROPERTY(BlueprintReadWrite)
    bool IsComboInputOn = false;
	//현재콤보
	UPROPERTY(BlueprintReadWrite)
    int32 CurrentCombo = 0;
	//최대콤보
	UPROPERTY(BlueprintReadWrite)
	int32 MaxCombo = 4;
	EPlayerState AtState;
	bool isassassination;
	bool isplayingFinisher;
	FLatentActionInfo LatentInfo;

	float attackdamage = 30;

	bool bFinish;
	float finishTime = 0.0f;
public:
	virtual void SetVictim(class AActor* Target, bool Positionedbehind) override;
	virtual void PlayFinisher()override;
	//virtual void UnderAttack(float Damage, float posture, float Imfact, AActor* Attacker) override;
	//void receiveAttack(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, float damage, bool isParryable);
	void AttackStartComboState();
	void AttackEndComboState();
	void Attack();
	UFUNCTION()
	void SetEnemies(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	virtual void UnderAttack(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, float damage, float posture, float Imfact, bool isParryable) override;
	
	void MoveComponentToLocation(class UCapsuleComponent* Component, FVector TargetLocation, FRotator TargetRotation, float MoveTime, FName Finisher);
	UFUNCTION()
	void Ambush();
	UFUNCTION()
	void Finish();

	//float TakeDamage(float DamageAmount,FDamageEvent const& DamageEvent,AController* EventInstigator,AActor* DamageCauser);
	void changeCameraView(FRotator newRotation, float newLength);
	
};
