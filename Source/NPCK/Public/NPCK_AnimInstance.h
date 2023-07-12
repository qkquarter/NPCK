// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "NPCK_AnimInstance.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnNextAttackCheckDelegate);
DECLARE_MULTICAST_DELEGATE(FOnEndAttackCheckDelegate);
DECLARE_MULTICAST_DELEGATE(FOnEndFinisherCheckDelegate);
DECLARE_MULTICAST_DELEGATE(FOnResetHitInfoDelegate);

UCLASS()
class NPCK_API UNPCK_AnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UNPCK_AnimInstance();

	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D MoveValue{MoveValue.X = 0, MoveValue.Y = 0};
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Speed = 0;
	// 넉백 거리 계산을 위한 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float impact = 0;
	// 현재 점수 횟수
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 jumpCount = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class ANPCK_Player* me;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool inAir = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isCrouching = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isWalk = false;


	//가드 상태
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isGuard = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isLeft = false;
	//피격 상태
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isHit = false;
	//가드 브레이크 상태
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool guardBreak = false;
	//패링 상태
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool startParry = false;
	//그래플링 몽타주
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UAnimMontage* grappleMontage;
	// 가드 실행 몽타주
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UAnimMontage* guardMontage;
	// 가드 해제 몽타주
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UAnimMontage* parryMontage;
	// 플레이어 처형 몽타주 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Montage)
		class UAnimMontage* Player_FinisherMontage;
	// 플레이어 암살 몽타주
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Montage)
		class UAnimMontage* Player_assassinationMontage;
	// 피격 몽타주
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UAnimMontage* hitMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UAnimMontage* dieMontage;
	// 연속공격 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attack, Meta = (AllowPrivateAccess = true))
		class UAnimMontage* AttackMontage;
	//연속공격 델리게이트
	FOnNextAttackCheckDelegate OnNextAttackCheck;
	//공격종료 델리게이트
	FOnEndAttackCheckDelegate OnEndAttackCheck;
	//처형종료 델리게이트
	FOnEndFinisherCheckDelegate OnEndFinisherCheck;
	//연타리셋 델리게이트
	FOnResetHitInfoDelegate OnResetHitInfo;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* guardHitMontage;

public:
	// 몽타주가 실행될떄 실행된 몽타주 저장
	UFUNCTION()
		void GetCurrentPlayMontage(UAnimMontage* Montage);
	class UAnimMontage* StartMontageTemp;
	class UAnimMontage* EndMontageTemp;
	// 몽타주가 끝났을떄 끝난 몽타주 저장
	UFUNCTION()
		void GetEndedMontage(UAnimMontage* Montage, bool binterp);

		/// 콤보어택 노티파이  
	UFUNCTION()
		void AnimNotify_EndAttack();

	UFUNCTION()
		void AnimNotify_ResetHitInfo();

	UFUNCTION()
		void PlayAttackMontage();
	// 다음에 실행할 섹션네임 생성
	    FName GetAttackMontageSectionName(int32 Section);
	//  다음 몽타주 섹션 실행
	    void JumpToAttackMontageSection(int32 NewSection);




	//그래플링 애니메이션 노티파이 김용일
	UFUNCTION()
		void AnimNotify_ThrowRope();
	UFUNCTION()
		void AnimNotify_StartGrapplingMovement();
	UFUNCTION()
		void AnimNotify_RopeAppears();
	UFUNCTION()
		void AnimNotify_RopeDisappear();
	UFUNCTION()
		void AnimNotify_AnimEnd();


	// 패링 몽타주 실행 함수
	void PlayParryMontage(int32 sectionNum);
	// 가드 몽타주 실행 함수
	void playGuardMontage();
    // 피격 몽타주 실행 함수
	void playHitMontage();

	void playGuardHitMontage();











};
