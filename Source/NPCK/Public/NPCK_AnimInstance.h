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
	// �˹� �Ÿ� ����� ���� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float impact = 0;
	// ���� ���� Ƚ��
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


	//���� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isGuard = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isLeft = false;
	//�ǰ� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isHit = false;
	//���� �극��ũ ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool guardBreak = false;
	//�и� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool startParry = false;
	//�׷��ø� ��Ÿ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UAnimMontage* grappleMontage;
	// ���� ���� ��Ÿ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UAnimMontage* guardMontage;
	// ���� ���� ��Ÿ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UAnimMontage* parryMontage;
	// �÷��̾� ó�� ��Ÿ�� 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Montage)
		class UAnimMontage* Player_FinisherMontage;
	// �÷��̾� �ϻ� ��Ÿ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Montage)
		class UAnimMontage* Player_assassinationMontage;
	// �ǰ� ��Ÿ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UAnimMontage* hitMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UAnimMontage* dieMontage;
	// ���Ӱ��� 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attack, Meta = (AllowPrivateAccess = true))
		class UAnimMontage* AttackMontage;
	//���Ӱ��� ��������Ʈ
	FOnNextAttackCheckDelegate OnNextAttackCheck;
	//�������� ��������Ʈ
	FOnEndAttackCheckDelegate OnEndAttackCheck;
	//ó������ ��������Ʈ
	FOnEndFinisherCheckDelegate OnEndFinisherCheck;
	//��Ÿ���� ��������Ʈ
	FOnResetHitInfoDelegate OnResetHitInfo;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* guardHitMontage;

public:
	// ��Ÿ�ְ� ����ɋ� ����� ��Ÿ�� ����
	UFUNCTION()
		void GetCurrentPlayMontage(UAnimMontage* Montage);
	class UAnimMontage* StartMontageTemp;
	class UAnimMontage* EndMontageTemp;
	// ��Ÿ�ְ� �������� ���� ��Ÿ�� ����
	UFUNCTION()
		void GetEndedMontage(UAnimMontage* Montage, bool binterp);

		/// �޺����� ��Ƽ����  
	UFUNCTION()
		void AnimNotify_EndAttack();

	UFUNCTION()
		void AnimNotify_ResetHitInfo();

	UFUNCTION()
		void PlayAttackMontage();
	// ������ ������ ���ǳ��� ����
	    FName GetAttackMontageSectionName(int32 Section);
	//  ���� ��Ÿ�� ���� ����
	    void JumpToAttackMontageSection(int32 NewSection);




	//�׷��ø� �ִϸ��̼� ��Ƽ���� �����
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


	// �и� ��Ÿ�� ���� �Լ�
	void PlayParryMontage(int32 sectionNum);
	// ���� ��Ÿ�� ���� �Լ�
	void playGuardMontage();
    // �ǰ� ��Ÿ�� ���� �Լ�
	void playHitMontage();

	void playGuardHitMontage();











};
