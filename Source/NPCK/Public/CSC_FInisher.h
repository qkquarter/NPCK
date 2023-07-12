// CSC_Finisher.h

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NPCK_Player.h"
#include <../Plugins/EnhancedInput/Source/EnhancedInput/Public/InputAction.h>
#include "CSC_PlayerInterFace.h"
#include "CSC_Finisher.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class NPCK_API UCSC_Finisher : public UActorComponent, public ICSC_PlayerInterFace
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCSC_Finisher();

protected:
	// Called when the game starts
	

public:
	// Called every frame
	void SetupPlayerInputComponent(class UEnhancedInputComponent* EnhancedInputComponent);
	virtual void BeginPlay() override;
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction);

private:
	// 컴포넌트 오너를 기준으로 탐지할 최대 거리
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* InputFinish;

	UPROPERTY(EditAnywhere, Category = "Detection")
	float DetectionRange;

	UPROPERTY(EditAnywhere, Category = "Finisher")
	float TraceDistance = 1000.f;

	// The radius of the trace
	UPROPERTY(EditAnywhere, Category = "Finisher")
	float TraceRadius = 100.f;

	// The object types that the trace can hit
	UPROPERTY(EditAnywhere, Category = "Finisher")
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;


	bool isassassination;
	class APJH_EnemyBase* Enemy;
	class ANPCK_Player* Player;

	// 적을 탐지하고, 몽타주 재생 함수
public:
	virtual void SetVictim(class AActor* Target, bool Positionedbehind) override;
	virtual void PlayFinisher()override;
	//virtual void Assassination()override;
//	virtual void FinisherEnd()override;

private:
    bool bIsPlayingFinisher;
	bool bReady;

	FHitResult OutHit;
	TArray<AActor*> ActorsToIgnore;

};
