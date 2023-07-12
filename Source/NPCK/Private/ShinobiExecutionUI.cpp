// Fill out your copyright notice in the Description page of Project Settings.


#include "ShinobiExecutionUI.h"
#include <UMG/Public/Animation/WidgetAnimation.h>

void UShinobiExecutionUI::NativeConstruct() {
	Super::NativeConstruct();

	animationEnd.BindDynamic(this, &UShinobiExecutionUI::endAnimation);
	BindToAnimationFinished(NewAnimation, animationEnd);
}

void UShinobiExecutionUI::endAnimation() {
	this->RemoveFromParent();
}