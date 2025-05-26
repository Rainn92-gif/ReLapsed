// Copyright Epic Games, Inc. All Rights Reserved.

#include "ReLapsedGameMode.h"
#include "ReLapsedCharacter.h"
#include "UObject/ConstructorHelpers.h"

AReLapsedGameMode::AReLapsedGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
