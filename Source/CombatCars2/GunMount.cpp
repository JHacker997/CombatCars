// Fill out your copyright notice in the Description page of Project Settings.

#include "GunMount.h"
#include "Components/StaticMeshComponent.h"

// Sets default values for this component's properties
UGunMount::UGunMount()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	// RootComponent = Mesh;
	Mesh->SetupAttachment(this);


	// Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	// Mesh->SetWorldScale3D(FVector(0.8f));



	// ...
}


// Called when the game starts
void UGunMount::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGunMount::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

