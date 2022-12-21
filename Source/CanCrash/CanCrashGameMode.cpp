// Copyright Epic Games, Inc. All Rights Reserved.

#include "CanCrashGameMode.h"
#include "CanCrashCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACanCrashGameMode::ACanCrashGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
