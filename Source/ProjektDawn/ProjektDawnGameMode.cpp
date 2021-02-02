// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjektDawnGameMode.h"
#include "ProjektDawnPlayerController.h"
#include "ProjektDawnCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjektDawnGameMode::AProjektDawnGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProjektDawnPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}