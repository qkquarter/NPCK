// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCK_Player.h"
#include "PJH_GuardComponent.h"
#include <../Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputComponent.h>
#include <GameFramework/PlayerController.h>
#include <../Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputSubsystems.h>
#include <Camera/CameraComponent.h>
#include "NPCK_MoveComponent.h"
#include "NPCK_AnimInstance.h"
#include <Components/CapsuleComponent.h>
#include "PJH_ParryComponent.h"
#include "CSC_AttackComponent.h"
#include "KYI_GrappleComponent.h"
#include <../Plugins/Runtime/CableComponent/Source/CableComponent/Classes/CableComponent.h>
#include <GameFramework/SpringArmComponent.h>
#include "CSC_LockOnComponent.h"
#include "CSC_Weapons.h"
#include "CSC_FInisher.h"
#include "NPCK_Inventory.h"
#include <Kismet/GameplayStatics.h>
#include <UMG/Public/Blueprint/WidgetBlueprintLibrary.h>
#include "NPCK_PlayerState.h"
#include "NPCK_MainUI.h"
#include <Components/PostProcessComponent.h>
#include <Camera/CameraActor.h>
#include "DeadUI.h"

// Sets default values
ANPCK_Player::ANPCK_Player()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	springArm->SetupAttachment(RootComponent);
	cam = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	cam->SetupAttachment(springArm);

	//cam2 = CreateDefaultSubobject<ACameraActor>(TEXT("executionCamera"));
	
	//cam2 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ExecutionCamera"));

	Katana = CreateDefaultSubobject<UChildActorComponent>(TEXT("Katana"));

	//Katana->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("Katana"));
	Katana->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("Hand_RSocket"));

	postProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcess"));
	postProcess->SetVisibility(false);

	//�����׼��ϱ� ���ؼ� �ʿ��� ���� ����
	rope = CreateDefaultSubobject<UCableComponent>(TEXT("Rope"));
	rope->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, FName("hand_l"));
	rope->SetVisibility(false);
	////�����տ� �ִ� ������
	kunai = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Kunai"));
	kunai->SetRelativeLocation(FVector(40.997116f, -32.749016f, 7.768951f));
	kunai->SetRelativeRotation(FRotator(-90.0f, 0.0f, 0.0f));
	kunai->SetRelativeScale3D(FVector(1.5f));
	kunai->SetVisibility(false);

	//��� component


	// csc ������� ���� ����� �̰� ĳ���Ϳ� �־��ְ� childactor �Ⱦ��� collision ����
	guardComp = CreateDefaultSubobject<UPJH_GuardComponent>(TEXT("Guard Component"));
	//�и� component
	
	//�̵� component
	moveComp = CreateDefaultSubobject<UNPCK_MoveComponent>(TEXT("Player Move"));
	//�׷��ø� component
	grappleComp = CreateDefaultSubobject<UKYI_GrappleComponent>(TEXT("Grappling Component"));
	//���� component
	atComp = CreateDefaultSubobject<UCSC_AttackComponent>(TEXT("Attack Component"));
	// Lock component
	loComp = CreateDefaultSubobject<UCSC_LockOnComponent>(TEXT("LockOn Component"));
	// FInisher
	//Finisher = CreateDefaultSubobject<UCSC_Finisher>(TEXT("Finisher"));
	  

	parryComp = CreateDefaultSubobject<UPJH_ParryComponent>(TEXT("Parr"));
	//UI ����
	ConstructorHelpers::FClassFinder<UNPCK_Inventory> tempInven(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UI/Inventory/InventoryWidgetProto.InventoryWidgetProto_C'"));
	if (tempInven.Succeeded()) {
		invenFactory = tempInven.Class;
	}
	ConstructorHelpers::FClassFinder<UNPCK_MainUI> tempUI(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UI/N_MainInterface.N_MainInterface_C'"));
	if (tempUI.Succeeded()) {
		UIFactory = tempUI.Class;
	}
	ConstructorHelpers::FClassFinder<UDeadUI> tempDeadUI(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UI/N_Death.N_Death_C'"));
	if (tempUI.Succeeded()) {
		UIFactoryDead = tempDeadUI.Class;
	}

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	//���� Ƚ�� 2ȸ
	JumpMaxCount = 2;
	JumpMaxHoldTime = 1.0f;
	//ĳ���� �޽� ��ġ ����
	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));

	//	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(guardComp, &UPJH_GuardComponent::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ANPCK_Player::BeginPlay() {
	Super::BeginPlay();
	//Enhanced Input ����
	// 1. �÷��̾� ��Ʈ�ѷ��� �����´�.
	APlayerController* playerCon = GetWorld()->GetFirstPlayerController();
	// 2. �÷��̾� ��Ʈ�ѷ����� EnhancedInputLocalPlayerSubsystem�� �����´�.
	UEnhancedInputLocalPlayerSubsystem* subsys = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(playerCon->GetLocalPlayer());
	// 3. ������ Subsystem�� IMC�� ����Ѵ�.(�켱���� 0��)
	subsys->AddMappingContext(myMapping, 0);

	anim = Cast<UNPCK_AnimInstance>(GetMesh()->GetAnimInstance());
	weapon = Cast<ACSC_Weapons>(Katana->GetChildActor());
	if (IsValid(weapon)) {
		weapon->Collision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		weapon->Collision->OnComponentBeginOverlap.AddDynamic(atComp, &UCSC_AttackComponent::SetEnemies);
		
	}
	//UI ����
	inventory = CreateWidget<UNPCK_Inventory>(GetWorld(), invenFactory);
	auto PS = UGameplayStatics::GetActorOfClass(GetWorld(), ANPCK_PlayerState::StaticClass());

	NPCKPlayerState = Cast<ANPCK_PlayerState>(PS);
	if (NPCKPlayerState != nullptr) {
	NPCKPlayerState->SetPlayer(this);
		UE_LOG(LogTemp, Warning, TEXT("Success"));
	}
	playerUI = CreateWidget<UNPCK_MainUI>(GetWorld(), UIFactory);
	//if (UGameplayStatics::GetCurrentLevelName(GetWorld()).Contains("DemoMap")) {
	//	playerUI->AddToViewport();
	//}
	deadUI = CreateWidget<UDeadUI>(GetWorld(), UIFactoryDead);
}

// Called every frame	
void ANPCK_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	playerUI->setHealth(NPCKPlayerState->HP);
	playerUI->setPosture(NPCKPlayerState->Posture);
}

// Called to bind functionality to input
void ANPCK_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* enhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if (enhancedInputComponent != nullptr) {
		guardComp->SetupPlayerInputComponent(enhancedInputComponent);
		moveComp->SetupPlayerInputComponent(enhancedInputComponent);
		parryComp->SetupPlayerInputComponent(enhancedInputComponent);
		atComp->SetupPlayerInputComponent(enhancedInputComponent);
		grappleComp->SetupPlayerInputComponent(enhancedInputComponent);
		loComp->SetupPlayerInputComponent(enhancedInputComponent);
		//Finisher->SetupPlayerInputComponent(enhancedInputComponent);

		//UI ��ư
		enhancedInputComponent->BindAction(invenKey, ETriggerEvent::Started, this, &ANPCK_Player::InventoryOnOff);
		if (loComp != nullptr) {
			UE_LOG(LogTemp, Warning, TEXT("This is a warning log!"));
		}

	}
	
	// Test - delete later
	//PlayerInputComponent->BindAction(TEXT("1"), IE_Pressed, this, );
}

void ANPCK_Player::PostInitializeComponents() {
	Super::PostInitializeComponents();

}


void ANPCK_Player::InventoryOnOff() {
	APlayerController* player = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (UGameplayStatics::GetCurrentLevelName(GetWorld()).Contains("DemoMap")) {
		if (!invenOn) {
			inventory->AddToViewport();
			player->bShowMouseCursor = true;
			invenOn = true;
		}
		else {
			player->bShowMouseCursor = false;
			inventory->RemoveFromParent();
			invenOn = false;
		}

	}
}