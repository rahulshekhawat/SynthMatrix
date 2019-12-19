// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSGameMode.h"

ATPSGameMode::ATPSGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void ATPSGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
}

void ATPSGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void ATPSGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
