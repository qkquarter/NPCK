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
	
	// 가드 상태
	bool isGuard = false;
	// 피격 상태
	bool isHit = false;
	// 가드브레이크 상태
	bool bGuardBreak = false;

	// num 만큼 체간 감소
	UFUNCTION(BlueprintCallable)
	void changeGuardGauge(float num);

	// 체간 수치 가져오기
	UFUNCTION(BlueprintCallable)
	float getGuardGauge(); 

	// 체간 설정
	UFUNCTION(BlueprintCallable)
	void setGuardGauge(float num);

	// 공격 받을 때
	UFUNCTION(BlueprintCallable)
	void receiveAttack(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FAttackData atkData, bool isParryable, bool isGuardable);

	//체간 회복
	void recoverGuardGauge();
	bool isWaitComplete(float delayTime);
	void setRecoverTime(float time) { recoverTime = time; }

	// 사운드 정보 추가예정
	UPROPERTY(EditAnywhere)
	class USoundBase* guardSound;

	// 파티클 정보
	UPROPERTY(EditAnywhere)
	class UParticleSystem* particle;


	UPROPERTY(EditAnywhere)
	class USoundBase* hitSound;

	class ANPCK_Player* me;
	// 플레이어 체간
	float guardGauge = 0;
	float maxGuardGauge = 100;
	// 체간 회복 대기시간
	float recoverTime = 0;
};
