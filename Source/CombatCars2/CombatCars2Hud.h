// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CombatCars2Hud.generated.h"

UCLASS(config = Game)
class ACombatCars2Hud : public AHUD
{
	GENERATED_BODY()

public:
	ACombatCars2Hud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
