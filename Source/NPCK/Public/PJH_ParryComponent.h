// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PJH_ParryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NPCK_API UPJH_ParryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPJH_ParryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void SetupPlayerInputComponent(class UEnhancedInputComponent* enhancedInputComponent);
		
	UPROPERTY(EditAnywhere)
	class UInputAction* parryKey;

	void inputParry();
	void releaseParry();

	// 패링 가능 여부
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bCanParry = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool CanPlayParry = false;



	// 패링 키 입력 여부
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bStartParry = false;

	// 공격받았을 때
	UFUNCTION(BlueprintCallable)
	void receiveAttack(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FAttackData atkData, bool isParryable, bool isGuardable);

	// 사운드 정보 추가예정
	UPROPERTY(EditAnywhere)
	class USoundBase* parrySound;

	// 파티클 정보
	UPROPERTY(EditAnywhere)
	class UParticleSystem* particle;

	UPROPERTY(EditAnywhere)
	class USoundBase* hitSound;

private:
	class ANPCK_Player* me;
	float parryTime = 0.0f;
};