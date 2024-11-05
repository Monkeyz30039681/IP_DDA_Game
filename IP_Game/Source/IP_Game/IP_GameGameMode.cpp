// Copyright Epic Games, Inc. All Rights Reserved.

#include "IP_GameGameMode.h"
#include "IP_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIP_GameGameMode::AIP_GameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
