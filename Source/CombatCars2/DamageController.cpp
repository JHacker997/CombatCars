// Fill out your copyright notice in the Description page of Project Settings.

#include "DamageController.h"
#include "Engine.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"



// Sets default values for this component's properties
UDamageController::UDamageController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	

	// ...
}


// Called when the game starts
void UDamageController::BeginPlay()
{
	Super::BeginPlay();

	GetOwner()->Tags.Add(FName("Damageable"));


	// ...
	
}


// Called every frame
void UDamageController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

float UDamageController::ApplyDamage(int damage)
{
	HealthCur -= damage;

	if (HealthCur < 0)
		HealthCur = 0;

	HealthPer = (float)HealthCur / HealthMax;
	
	//FString::Printf(TEXT("Some variable values: x: %f, y: %f"), x, y));
	GEngine->AddOnScreenDebugMessage(1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Damage:\t%d"), damage));
	GEngine->AddOnScreenDebugMessage(2, 15.0f, FColor::Yellow, FString::Printf(TEXT("HealthCur:\t%d"), HealthCur));
	GEngine->AddOnScreenDebugMessage(3, 15.0f, FColor::Yellow, FString::Printf(TEXT("HealthPer:\t%f"), HealthPer));
	// GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, (TEXT("Applying Damage:")));
	// GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, (TEXT("Applying Damage: %s, Health after: %s, returning: %s"), FString::FromInt(damage), FString::FromInt(HealthCur), FString::FromInt(HealthPer)));
	
	return HealthPer;
}

void UDamageController::SetHealthMax(int Max)
{
	HealthMax = Max;
	HealthCur = HealthMax;
}

