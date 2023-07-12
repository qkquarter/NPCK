// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KYI_GrapplePoint.generated.h"

UCLASS()
class NPCK_API AKYI_GrapplePoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKYI_GrapplePoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//컴포넌트
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* detection;
	UPROPERTY(EditAnywhere)
		class UBoxComponent* deactivateZone;
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* landingZone;
	UPROPERTY(EditAnywhere)
		class UWidgetComponent* widgetComp;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> widget;
	//변수구현
	UPROPERTY(EditAnywhere)
		class ANPCK_Player* playerRef;
	UPROPERTY(EditAnywhere)
		class UKYI_DetectionNode* widgetRef;
	UPROPERTY(EditAnywhere)
		bool used = false;
	UPROPERTY(EditAnywhere)
		bool active = false;

	//함수구현
	void Activate(class ANPCK_Player* player);
	void Deactivate();
	void CheckDistanceFromPlayer();
	UFUNCTION()
	void Use();
	UFUNCTION()
	void Reactivate();

	UFUNCTION()
		void BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void EndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
