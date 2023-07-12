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

	//로프액션하기 위해서 필요한 로프 생성
	rope = CreateDefaultSubobject<UCableComponent>(TEXT("Rope"));
	rope->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, FName("hand_l"));
	rope->SetVisibility(false);
	////로프앞에 있는 수리검
	kunai = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Kunai"));
	kunai->SetRelativeLocation(FVector(40.997116f, -32.749016f, 7.768951f));
	kunai->SetRelativeRotation(FRotator(-90.0f, 0.0f, 0.0f));
	kunai->SetRelativeScale3D(FVector(1.5f));
	kunai->SetVisibility(false);

	//방어 component


	// csc 기반으로 무기 만들고 이걸 캐릭터에 넣어주고 childactor 안쓰고 collision 조절
	guardComp = CreateDefaultSubobject<UPJH_GuardComponent>(TEXT("Guard Component"));
	//패링 component
	
	//이동 component
	moveComp = CreateDefaultSubobject<UNPCK_MoveComponent>(TEXT("Player Move"));
	//그래플링 component
	grappleComp = CreateDefaultSubobject<UKYI_GrappleComponent>(TEXT("Grappling Component"));
	//공격 component
	atComp = CreateDefaultSubobject<UCSC_AttackComponent>(TEXT("Attack Component"));
	// Lock component
	loComp = CreateDefaultSubobject<UCSC_LockOnComponent>(TEXT("LockOn Component"));
	// FInisher
	//Finisher = CreateDefaultSubobject<UCSC_Finisher>(TEXT("Finisher"));
	  

	parryComp = CreateDefaultSubobject<UPJH_ParryComponent>(TEXT("Parr"));
	//UI 선언
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

	//점프 횟수 2회
	JumpMaxCount = 2;
	JumpMaxHoldTime = 1.0f;
	//캐릭터 메시 위치 설정
	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));

	//	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(guardComp, &UPJH_GuardComponent::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ANPCK_Player::BeginPlay() {
	Super::BeginPlay();
	//Enhanced Input 설정
	// 1. 플레이어 콘트롤러를 가져온다.
	APlayerController* playerCon = GetWorld()->GetFirstPlayerController();
	// 2. 플레이어 콘트롤러에서 EnhancedInputLocalPlayerSubsystem를 가져온다.
	UEnhancedInputLocalPlayerSubsystem* subsys = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(playerCon->GetLocalPlayer());
	// 3. 가져온 Subsystem에 IMC를 등록한다.(우선순위 0번)
	subsys->AddMappingContext(myMapping, 0);

	anim = Cast<UNPCK_AnimInstance>(GetMesh()->GetAnimInstance());
	weapon = Cast<ACSC_Weapons>(Katana->GetChildActor());
	if (IsValid(weapon)) {
		weapon->Collision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		weapon->Collision->OnComponentBeginOverlap.AddDynamic(atComp, &UCSC_AttackComponent::SetEnemies);
		
	}
	//UI 생성
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

		//UI 버튼
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