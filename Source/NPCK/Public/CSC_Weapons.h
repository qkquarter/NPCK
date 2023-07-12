// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CSC_Weapons.generated.h"

UCLASS()
class NPCK_API ACSC_Weapons : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACSC_Weapons();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraComponent* BloodTrail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraSystem* BloodSpot;
	//UNiagarapar

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* BloodSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* rootcomp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCapsuleComponent* Collision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttackDamage;

	void setAttachedActor(AActor* actor);
	void NotifyActorBeginOverlap(AActor* OtherActor);

	UPROPERTY(EditAnywhere)
	AActor* attachedActor;
};
