// Fill out your copyright notice in the Description page of Project Settings.

#include "GunController.h"
#include "Components/StaticMeshComponent.h"
#include "ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Core/Public/Math/TransformNonVectorized.h"
#include "Engine.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"


// Sets default values for this component's properties
UGunController::UGunController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	UWorld* const world = GetWorld();
	
	i = 0;
	j = 0;
	// ...
}


// Called when the game starts
void UGunController::BeginPlay()
{
	Super::BeginPlay();

	j = 1;

	// gungun2->DestroyChildActor();
	// ...
	
}


// Called every frame
void UGunController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	
		
}



void UGunController::killChildren()
{

	if(gungun2)
		gungun2->DestroyChildActor();

}

void UGunController::swapGuns()
{

	if (gungun && gungun2)
	{
		GEngine->AddOnScreenDebugMessage(10, 5.f, FColor::Red, TEXT("Trying to Switch guns"));

		if (j == 0)
		{
			gungun->CreateChildActor();
			gungun2->DestroyChildActor();
			j = 1;
		}
		else
		{
			gungun2->CreateChildActor();
			gungun->DestroyChildActor();
			j = 0;
		}
	}

}

