// Fill out your copyright notice in the Description page of Project Settings.


#include "ReLapsed_MainCharacter.h"

// Sets default values
AReLapsed_MainCharacter::AReLapsed_MainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AReLapsed_MainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AReLapsed_MainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AReLapsed_MainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

