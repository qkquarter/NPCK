// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PJH_GuardComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NPCK_API UPJH_GuardComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPJH_GuardComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void SetupPlayerInputComponent(class UEnhancedInputComponent* enhancedInputComponent);

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void inputGuard();
	void releaseGuard();

	UPROPERTY(EditAnywhere)
	class UInputAction* guardKey;
	
	// ���� ����
	bool isGuard = false;
	// �ǰ� ����
	bool isHit = false;
	// ����극��ũ ����
	bool bGuardBreak = false;

	// num ��ŭ ü�� ����
	UFUNCTION(BlueprintCallable)
	void changeGuardGauge(float num);

	// ü�� ��ġ ��������
	UFUNCTION(BlueprintCallable)
	float getGuardGauge(); 

	// ü�� ����
	UFUNCTION(BlueprintCallable)
	void setGuardGauge(float num);

	// ���� ���� ��
	UFUNCTION(BlueprintCallable)
	void receiveAttack(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FAttackData atkData, bool isParryable, bool isGuardable);

	//ü�� ȸ��
	void recoverGuardGauge();
	bool isWaitComplete(float delayTime);
	void setRecoverTime(float time) { recoverTime = time; }

	// ���� ���� �߰�����
	UPROPERTY(EditAnywhere)
	class USoundBase* guardSound;

	// ��ƼŬ ����
	UPROPERTY(EditAnywhere)
	class UParticleSystem* particle;


	UPROPERTY(EditAnywhere)
	class USoundBase* hitSound;

	class ANPCK_Player* me;
	// �÷��̾� ü��
	float guardGauge = 0;
	float maxGuardGauge = 100;
	// ü�� ȸ�� ���ð�
	float recoverTime = 0;
};
