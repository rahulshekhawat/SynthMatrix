// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/SMCharacterBase.h"
#include "SMTPSCharacter.generated.h"

/**
 * 
 */
UCLASS(meta = (DisplayName = "SM TPS Character"))
class SYNTHMATRIX_API ASMTPSCharacter : public ASMCharacterBase
{
	GENERATED_BODY()

public:
	
	ASMTPSCharacter(const FObjectInitializer& ObjectInitializer);

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
