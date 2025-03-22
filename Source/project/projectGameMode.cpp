// Copyright Epic Games, Inc. All Rights Reserved.

#include "projectGameMode.h"
#include "projectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AprojectGameMode::AprojectGameMode()
    : Super()
{
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
    if (PlayerPawnClassFinder.Class != nullptr)
    {
        DefaultPawnClass = PlayerPawnClassFinder.Class;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to find BP_FirstPersonCharacter. Check the path."));
    }
}

void AprojectGameMode::BeginPlay()
{
    Super::BeginPlay();
    UE_LOG(LogTemp, Warning, TEXT("GameMode BeginPlay called."));
}