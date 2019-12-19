// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "SynthMatrixGameModeBase.h"

ASynthMatrixGameModeBase::ASynthMatrixGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void ASynthMatrixGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
}

void ASynthMatrixGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}

void ASynthMatrixGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
