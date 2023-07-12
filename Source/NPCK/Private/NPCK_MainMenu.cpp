// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCK_MainMenu.h"
#include <UMG/Public/Components/Button.h>
#include <Kismet/GameplayStatics.h>
#include <Engine/EngineTypes.h>

#include <UMG/Public/Components/CircularThrobber.h>
#include <Engine/LevelStreaming.h>
void UNPCK_MainMenu::NativeConstruct() {
	player = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	AnyKeyBtn->OnClicked.AddDynamic(this, &UNPCK_MainMenu::ClickAnyKey);
	PlayBtn->OnClicked.AddDynamic(this, &UNPCK_MainMenu::ClickPlay);
	QuitBtn->OnClicked.AddDynamic(this, &UNPCK_MainMenu::ClickQuit);
	LoadBtn->OnClicked.AddDynamic(this, &UNPCK_MainMenu::ClickLoad);
}

void UNPCK_MainMenu::ClickPlay() {
	loading->SetVisibility(ESlateVisibility::Visible);
	PlayBtn->SetVisibility(ESlateVisibility::HitTestInvisible);
	LoadBtn->SetVisibility(ESlateVisibility::HitTestInvisible);
	QuitBtn->SetVisibility(ESlateVisibility::HitTestInvisible);
	FTimerHandle WaitHandle;
	float WaitTime = 3;
	GetWorld()->GetTimerManager().SetTimer(WaitHandle, FTimerDelegate::CreateLambda([&]()
		{
			UGameplayStatics::OpenLevel(GetWorld(), FName("DemoMap"));
		}), WaitTime, false);
}

void UNPCK_MainMenu::ClickQuit() {
	UKismetSystemLibrary::QuitGame(GetWorld(), player, EQuitPreference::Quit, false);
}

void UNPCK_MainMenu::ClickAnyKey() {
	AnyKeyBtn->SetVisibility(ESlateVisibility::Hidden);
	LoadBtn->SetVisibility(ESlateVisibility::Visible);
	PlayBtn->SetVisibility(ESlateVisibility::Visible);
	QuitBtn->SetVisibility(ESlateVisibility::Visible);
}

//추후 구현예정
void UNPCK_MainMenu::ClickLoad() {
	
}
