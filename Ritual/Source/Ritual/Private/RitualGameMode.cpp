// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "Ritual.h"
#include "RitualGameMode.h"
#include "RitualHUD.h"
#include "RitualCharacter.h"

ARitualGameMode::ARitualGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/MyCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ARitualHUD::StaticClass();
}
