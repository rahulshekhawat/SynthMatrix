// Fill out your copyright notice in the Description page of Project Settings.


#include "RPGGameMode.h"

ARPGGameMode::ARPGGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void ARPGGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
}

void ARPGGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void ARPGGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
