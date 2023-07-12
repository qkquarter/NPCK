#include "CSC_LockOnComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "NPCK_Player.h"
#include "GameFramework/Character.h"
#include <../Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputComponent.h>
#include <../Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputSubsystems.h>
#include <../Plugins/EnhancedInput/Source/EnhancedInput/Public/InputAction.h>
#include "Kismet/KismetMathLibrary.h"
#include "PJH_EnemyBase.h"
#include <GameFramework/CharacterMovementComponent.h>

UCSC_LockOnComponent::UCSC_LockOnComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UCSC_LockOnComponent::BeginPlay()
{
    Super::BeginPlay();
    OwningCharacter = Cast<ANPCK_Player>(GetOwner());

    
    TraceObjectTypes.Add(Enemy);
}
void UCSC_LockOnComponent::SetupPlayerInputComponent(class UEnhancedInputComponent* EnhancedInputComponent)
{

    EnhancedInputComponent->BindAction(LockOnInput, ETriggerEvent::Started, this, &UCSC_LockOnComponent::ToggleLockOn);
    if (EnhancedInputComponent != nullptr)
    {

        UE_LOG(LogTemp, Warning, TEXT("This is a warning log!"));
    }
}
void UCSC_LockOnComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    if (bIsLockedOn && LockedOnActor)
    {
        FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(OwningCharacter->GetActorLocation(), LockedOnActor->GetActorLocation());

        FRotator TargetRotation = FRotator(OwningCharacter->GetControlRotation().Pitch, LookAtRotation.Yaw, OwningCharacter->GetControlRotation().Roll); 

        // Interpolate towards the target rotation over 0.1 seconds
        FRotator NewRotation = FMath::RInterpTo(OwningCharacter->GetController()->GetControlRotation(), TargetRotation, DeltaTime, 10.0f);

        // Set the controller's control rotation to the new rotation
        OwningCharacter->GetController()->SetControlRotation(NewRotation);
     
    }



        
    
    
}

void UCSC_LockOnComponent::ToggleLockOn()
{
    
   


    // bIsLockedOn이 false이면 적을 탐지할 수 있도록 SphereTraceSingleForObjects 함수를 호출합니다.
    if (!bIsLockedOn)
    {
        TArray<AActor*> IgnoreActors;
        IgnoreActors.Add(OwningCharacter);

        // SphereTraceSingleForObjects 함수를 사용하여 일정 범위 내에 있는 적을 탐지합니다.
        bool bHitEnemy = UKismetSystemLibrary::SphereTraceSingleForObjects(
            GetWorld(),
            GetOwner()->GetActorLocation(),
            GetOwner()->GetActorLocation() + GetOwner()->GetActorForwardVector() * LockOnDistance,
            LockOnRadius,
            TraceObjectTypes,
            false,
            IgnoreActors,
            EDrawDebugTrace::Persistent,
            HitResult,
            true
        );
        //DrawDebugSphere(GetWorld(), HitResult.GetActor()->GetActorLocation(), 20.0f, 10, FColor::Blue, true, 5.0f, 0, 2.0f);
        

        if (bHitEnemy)
        {
            AActor* HitActor = HitResult.GetActor();
           
                // 탐지한 액터가 PJH_EnemyBase 클래스를 상속받은 경우, PJH_EnemyBase로 캐스팅하여 처리합니다.
                APJH_EnemyBase* EnemyActor = Cast<APJH_EnemyBase>(HitActor);
                if (EnemyActor != nullptr)
                {
                  
                    if (EnemyActor)
                    {
                        // 적을 탐지한 경우, 적의 위치를 저장합니다.
                        LockedOnActor = EnemyActor;
                        LockedOnLocation = LockedOnActor->GetActorLocation();
                        bIsLockedOn = true;
                    }
                }
            
        }
    }
    else
    {
        // bIsLockedOn이 false이면 LockedOnActor를 nullptr로 초기화합니다.
        LockedOnActor = nullptr;
        bIsLockedOn = false;
        isCombat = false;

        UKismetSystemLibrary::FlushPersistentDebugLines(GetWorld());
        
    }

    // LockOn 기능이 On인 경우, Cam의 yaw 값을 고정시킵니다.
   
}