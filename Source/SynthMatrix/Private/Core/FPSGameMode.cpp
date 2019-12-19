// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameMode.h"

AFPSGameMode::AFPSGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void AFPSGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
}

void AFPSGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void AFPSGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
