// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SMCharacterBase.generated.h"

UCLASS()
class SYNTHMATRIX_API ASMCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:

	ASMCharacterBase(const FObjectInitializer& ObjectInitializer);

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// --------------------------------------
	//  Components
	// --------------------------------------

	FORCEINLINE class USpringArmComponent* GetCameraBoomComponent() const { return CameraBoomComponent; }

	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }

	static const FName CameraComponentName;

	static const FName SpringArmComponentName;

protected:
	
	/** Spring arm for camera */
	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoomComponent;

	/** Camera */
	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;



};
