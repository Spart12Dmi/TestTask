// Copyright Epic Games, Inc. All Rights Reserved.

#include "JoyWayTestGameMode.h"
#include "JoyWayTestHUD.h"
#include "JoyWayTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJoyWayTestGameMode::AJoyWayTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AJoyWayTestHUD::StaticClass();
}
