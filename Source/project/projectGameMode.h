// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "projectGameMode.generated.h"

UCLASS(minimalapi)
class AprojectGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:

    AprojectGameMode();

protected:
    // beginplay is overriden when the functions above are called
    virtual void BeginPlay() override;
};