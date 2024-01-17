// Copyright Epic Games, Inc. All Rights Reserved.

#include "VersusProjectGameMode.h"
#include "VersusProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVersusProjectGameMode::AVersusProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
