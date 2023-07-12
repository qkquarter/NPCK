// Fill out your copyright notice in the Description page of Project Settings.


#include "NormalEnemy2.h"

// Sets default values
ANormalEnemy2::ANormalEnemy2()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANormalEnemy2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANormalEnemy2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANormalEnemy2::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

