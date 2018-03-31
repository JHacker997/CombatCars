// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CombatCars2GameMode.h"
#include "CombatCars2Pawn.h"
#include "CombatCars2Hud.h"

ACombatCars2GameMode::ACombatCars2GameMode()
{
	DefaultPawnClass = ACombatCars2Pawn::StaticClass();
	HUDClass = ACombatCars2Hud::StaticClass();
}
