// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KYI_GrappleComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class NPCK_API UKYI_GrappleComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UKYI_GrappleComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetupPlayerInputComponent(class UEnhancedInputComponent* EnhancedInputComponent);

	//캐릭터에 있는 요소들을 일단 캐싱한다
	UPROPERTY(EditAnywhere, Category = "Caching")
		class ANPCK_Player* player;
	UPROPERTY(EditAnywhere, Category = "Caching")
		class UStaticMeshComponent* kunai;
	UPROPERTY(EditAnywhere, Category = "Caching")
		class UCableComponent* rope;
	UPROPERTY(EditAnywhere, Category = "Caching")
		class USkeletalMeshComponent* characMesh;
	//효과음
	UPROPERTY(EditAnywhere, Category = "Sound")
		class USoundBase* jumpSound;
	UPROPERTY(EditAnywhere, Category = "Sound")
		class USoundBase* grappleSound;
	//애니메이션
	UPROPERTY(EditAnywhere, Category = "Animation")
		class UAnimMontage* grappleAnim;
	//그래플링 입력
	UPROPERTY(EditAnywhere, Category = "Input")
		class UInputAction* IA_grapple;
	//로프 커브
	UPROPERTY(EditAnywhere, Category = "Grappling Movement")
		class UCurveFloat* airSpeedCurve;
	UPROPERTY(EditAnywhere, Category = "Grappling Movement")
		class UCurveFloat* groundSpeedCurve;
	UPROPERTY(EditAnywhere, Category = "Grappling Movement")
		class UCurveFloat* airHeightOffsetCurve;
	UPROPERTY(EditAnywhere, Category = "Grappling Movement")
		class UCurveFloat* groundHeightOffsetCurve;
	UPROPERTY(EditAnywhere, Category = "Rope Control")
		class UCurveFloat* airRopeLength;
	UPROPERTY(EditAnywhere, Category = "Rope Control")
		class UCurveFloat* groundRopeLength;
	UPROPERTY(EditAnywhere, Category = "Rope Control")
		class UCurveFloat* airRopePosition;
	UPROPERTY(EditAnywhere, Category = "Rope Control")
		class UCurveFloat* groundRopePosition;
	//위치 참조점
	UPROPERTY(EditAnywhere, Category = "Reference")
		class AKYI_GrapplePoint* grapplePointRef;
	UPROPERTY(EditAnywhere, Category = "Reference")
		class AKYI_GrapplePoint* currentGrapplePoint;
	UPROPERTY(EditAnywhere, Category = "Reference")
		class AActor* detectedActor;
	UPROPERTY(EditAnywhere, Category = "Reference")
		FVector startingPosition;
	UPROPERTY(EditAnywhere, Category = "Reference")
		FVector grapplingPosition;

	//비교 변수
	UPROPERTY(EditAnywhere)
		float highestDotProduct;
	UPROPERTY(EditAnywhere)
		float detectionRadius = 2000;
	UPROPERTY(EditAnywhere)
		float grappleThrowDistance = 1200;
	UPROPERTY(EditAnywhere)
		float montagePosition;
	UPROPERTY(EditAnywhere)
		float ropeBaseLength;
	UPROPERTY(EditAnywhere)
		bool movingWithGrapple = false;
	UPROPERTY(EditAnywhere)
		bool inGrapplingAnimation = false;

	//구현 함수
	void Grapple();
	void ThrowRope();
	void DeactivateGrapplePointRef();
	void ActivateGrapplePoint();
	void GrapplingMovement();
	void RopeVisibility(bool visible);
	void CheckForGrapplePoint();
	void ResetMovement();
	void StartGrapplingMovement();
	void MoveRope();
};
