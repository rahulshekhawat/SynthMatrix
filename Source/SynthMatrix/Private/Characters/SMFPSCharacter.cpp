// Fill out your copyright notice in the Description page of Project Settings.


#include "SMFPSCharacter.h"

ASMFPSCharacter::ASMFPSCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void ASMFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ASMFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASMFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
