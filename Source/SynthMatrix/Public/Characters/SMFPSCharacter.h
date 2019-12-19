// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/SMCharacterBase.h"
#include "SMFPSCharacter.generated.h"

/**
 * 
 */
UCLASS(meta = (DisplayName = "SM FPS Character"))
class SYNTHMATRIX_API ASMFPSCharacter : public ASMCharacterBase
{
	GENERATED_BODY()
	
public:

	ASMFPSCharacter(const FObjectInitializer& ObjectInitializer);

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


};
