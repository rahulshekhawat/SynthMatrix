// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/SynthMatrixGameModeBase.h"
#include "TPSGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SYNTHMATRIX_API ATPSGameMode : public ASynthMatrixGameModeBase
{
	GENERATED_BODY()
	
public:

	// --------------------------------------
	//  UE4 Method Overrides
	// --------------------------------------

	ATPSGameMode(const FObjectInitializer& ObjectInitializer);

	/** Spawns actors of manager classes */
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage);

	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;

	/** Updates game state every frame */
	virtual void Tick(float DeltaTime) override;

};
