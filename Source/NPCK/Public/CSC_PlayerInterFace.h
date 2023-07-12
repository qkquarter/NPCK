// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CSC_PlayerInterFace.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UCSC_PlayerInterFace : public UInterface
{
	GENERATED_BODY()

};

/**
 * 
 */
class NPCK_API ICSC_PlayerInterFace
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

virtual void SetVictim(class AActor* Target, bool Positionedbehind){}
virtual void PlayFinisher(){}
virtual void UnderAttack(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, float damage, float posture, float Imfact, bool isParryable){}
//virtual void Assassination();
//virtual void FinisherEnd();

};
