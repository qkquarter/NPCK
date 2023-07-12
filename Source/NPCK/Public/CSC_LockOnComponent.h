#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CSC_LockOnComponent.generated.h"



UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class NPCK_API UCSC_LockOnComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UCSC_LockOnComponent();

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    UFUNCTION(BlueprintCallable, Category = "Lock On")
        void ToggleLockOn();

    UPROPERTY(EditAnywhere, Category = "Input")
        class UInputAction* LockOnInput;

	bool bIsLockedOn = false;
	class APJH_EnemyBase* LockedOnActor = nullptr;
    void SetupPlayerInputComponent(class UEnhancedInputComponent* EnhancedInputComponent);

private:

    // Lock on 기능 관련 변수들
    bool isCombat = false;
 
    FVector LockedOnLocation = FVector::ZeroVector;
    const float LockOnRadius = 500.f;
    const float LockOnDistance = 1000.f;
    TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjectTypes; // 히트 가능한 오브젝트 유형들.
    TEnumAsByte<EObjectTypeQuery> Enemy = UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_GameTraceChannel2);
    FHitResult HitResult;


    // 캐릭터와 컴포넌트의 연결을 위한 변수
    class ANPCK_Player* OwningCharacter = nullptr;
};
