// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SynthMatrixGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SYNTHMATRIX_API ASynthMatrixGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	// --------------------------------------
	//  UE4 Method Overrides
	// --------------------------------------

	ASynthMatrixGameModeBase(const FObjectInitializer& ObjectInitializer);

	/** Spawns actors of manager classes */
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage);

	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;

	/** Updates game state every frame */
	virtual void Tick(float DeltaTime) override;

};
