// Fill out your copyright notice in the Description page of Project Settings.


#include "SMPlayerController.h"
#include "SMCharacterBase.h"

ASMPlayerController::ASMPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void ASMPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
}

void ASMPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void ASMPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void ASMPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void ASMPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASMPlayerController::SetPawn(APawn* InPawn)
{
	Super::SetPawn(InPawn);
	SMCharacter = InPawn ? Cast<ASMCharacterBase>(InPawn) : nullptr;
}
