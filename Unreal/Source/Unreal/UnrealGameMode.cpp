// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealGameMode.h"
#include "UnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealGameMode::AUnrealGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
