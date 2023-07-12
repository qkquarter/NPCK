// Fill out your copyright notice in the Description page of Project Settings.


#include "DeadUI.h"
#include <UMG/Public/Animation/WidgetAnimation.h>

void UDeadUI::NativeConstruct() {
	Super::NativeConstruct();

	Fade = Cast<UWidgetAnimation>(GetWidgetFromName(TEXT("Fade")));

	UE_LOG(LogTemp, Warning, TEXT("???"))
}

void UDeadUI::play() {
	this->PlayAnimation(Fade);
}