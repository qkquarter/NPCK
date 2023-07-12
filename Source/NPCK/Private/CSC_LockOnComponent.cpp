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
    
   


    // bIsLockedOn�� false�̸� ���� Ž���� �� �ֵ��� SphereTraceSingleForObjects �Լ��� ȣ���մϴ�.
    if (!bIsLockedOn)
    {
        TArray<AActor*> IgnoreActors;
        IgnoreActors.Add(OwningCharacter);

        // SphereTraceSingleForObjects �Լ��� ����Ͽ� ���� ���� ���� �ִ� ���� Ž���մϴ�.
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
           
                // Ž���� ���Ͱ� PJH_EnemyBase Ŭ������ ��ӹ��� ���, PJH_EnemyBase�� ĳ�����Ͽ� ó���մϴ�.
                APJH_EnemyBase* EnemyActor = Cast<APJH_EnemyBase>(HitActor);
                if (EnemyActor != nullptr)
                {
                  
                    if (EnemyActor)
                    {
                        // ���� Ž���� ���, ���� ��ġ�� �����մϴ�.
                        LockedOnActor = EnemyActor;
                        LockedOnLocation = LockedOnActor->GetActorLocation();
                        bIsLockedOn = true;
                    }
                }
            
        }
    }
    else
    {
        // bIsLockedOn�� false�̸� LockedOnActor�� nullptr�� �ʱ�ȭ�մϴ�.
        LockedOnActor = nullptr;
        bIsLockedOn = false;
        isCombat = false;

        UKismetSystemLibrary::FlushPersistentDebugLines(GetWorld());
        
    }

    // LockOn ����� On�� ���, Cam�� yaw ���� ������ŵ�ϴ�.
   
}