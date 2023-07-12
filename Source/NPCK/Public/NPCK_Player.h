// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NPCK_PlayerState.h"
#include "NPCK_Player.generated.h"

UCLASS()
class NPCK_API ANPCK_Player : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPCK_Player();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void PostInitializeComponents();

	//UI
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UserInterface)
		TSubclassOf<class UNPCK_Inventory> invenFactory;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UserInterface)
		class UNPCK_Inventory* inventory;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UserInterface)
		TSubclassOf<class UNPCK_MainUI> UIFactory;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UserInterface)
		class UNPCK_MainUI* playerUI;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UserInterface)
		TSubclassOf<class UDeadUI> UIFactoryDead;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UserInterface)
		class UDeadUI* deadUI;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UserInterface)
		bool invenOn = false;
	UPROPERTY(EditAnywhere, Category = Input)
		class UInputAction* invenKey;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PostProcess)
	class UPostProcessComponent* postProcess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
		class UChildActorComponent* Katana;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
		class UCameraComponent* cam;

	//UPROPERTY(EditAnywhere, Category = Camera)
	//class ACameraActor* cam2;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera)
		class USpringArmComponent* springArm;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Components)
		class UPJH_GuardComponent* guardComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
		class UNPCK_MoveComponent* moveComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Components)
		class UPJH_ParryComponent* parryComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Components)
		class UKYI_GrappleComponent* grappleComp;

	UPROPERTY(EditAnywhere, Category = Input_Settings)
		class UInputMappingContext* myMapping;

	//그래플링에 필요한 요소
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* kunai;
	UPROPERTY(EditAnywhere)
		class UCableComponent* rope;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UNPCK_AnimInstance* anim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UCSC_AttackComponent* atComp;

	UPROPERTY(EditAnywhere)
		class UCSC_LockOnComponent* loComp;

	//UPROPERTY(EditAnywhere)
	//	class UCSC_Finisher* Finisher;

	class ACSC_Weapons* weapon;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ANPCK_PlayerState* NPCKPlayerState;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<APlayerState> UsingPlayerState;

	UPROPERTY(EditAnywhere)
	class USoundBase* guardBreakSound;

	UPROPERTY(EditAnywhere)
	class USoundBase* mortalAttackSound;

	UPROPERTY(EditAnywhere)
	class USoundBase* slashSound;

public:
	void InventoryOnOff();
};
