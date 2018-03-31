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

	
	// ...
	
}


// Called every frame
void UGunController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("TICK"));

	UClass *test = Bullet1->GeneratedClass;
	UWorld* const World = GetWorld();

	FActorSpawnParameters SpawnInfo;

	

	if (i == 120)
	{
		if (j == 0)
		{
			changeMesh(Mesh);
			// gungun->SetChildActorClass(gun3->GetBlueprintClass());
			gungun->CreateChildActor();
			gungun2->DestroyChildActor();
			j = 1;
		}
		else
		{
			changeMeshBack(Mesh);
			// gungun->SetChildActorClass(gun2->GetBlueprintClass());
			gungun2->CreateChildActor();
			gungun->DestroyChildActor();
			j = 0;
		}

		USceneComponent *me = (USceneComponent *)this;
		FTransform otherthing = me->GetComponentToWorld();
		//FVector	idk = otherthing.GetLocation();
		FVector	idk =  me->GetComponentLocation();

		// GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, (TEXT("Location of me: %s"), idk.ToString()));
		// GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, (TEXT("Location of Actor: %s"), location.ToString()));

		// if(gungun == NULL)
			// GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, (TEXT("Child NULL")));
		// else
			// GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, (TEXT("Child NOT NULL")));

		// World->SpawnActor<AActor>(test, location, FRotator(0.0, 0.0, 0.0), SpawnInfo);

		
		

		i = 0;
	}

	i++;
	// GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));
	// ...

	
}


void UGunController::changeMesh(UStaticMeshComponent *thing)
{
	GEngine->AddOnScreenDebugMessage(5, 15.0f, FColor::Yellow, TEXT("CHANGE"));

	if (thing == 0)
	{
		GEngine->AddOnScreenDebugMessage(5, 15.0f, FColor::Yellow, TEXT("THING NULL"));
		return;
	}

	// GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("THING NOT NULL"));
	// static ConstructorHelpers::FObjectFinder<UStaticMesh> StaticMeshOb_AW2(TEXT("StaticMesh'/Game/VehicleAdvBP/Blueprints/TankCannon.TankCannon"));
	// thing->DestroyComponent();
		
	thing->SetStaticMesh(AssetSM_JoyControl);
	FVector MeshScale = FVector(0.4, 0.4, 0.4);
	FRotator MeshRotation = FRotator(0.0, 0.0, -90.0);
	thing->SetWorldScale3D(MeshScale);
	thing->SetRelativeRotation(MeshRotation);
	


}

void UGunController::changeMeshBack(UStaticMeshComponent *thing)
{
	GEngine->AddOnScreenDebugMessage(5, 15.0f, FColor::Yellow, TEXT("CHANGE BACK!"));

	if (thing == 0)
	{
		GEngine->AddOnScreenDebugMessage(5, 15.0f, FColor::Yellow, TEXT("THING NULL"));
		return;
	}

	// GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("THING NOT NULL"));
	// static ConstructorHelpers::FObjectFinder<UStaticMesh> StaticMeshOb_AW2(TEXT("StaticMesh'/Game/VehicleAdvBP/Blueprints/TankCannon.TankCannon"));
	// thing->DestroyComponent();

	thing->SetStaticMesh(AssetSM_JoyControl2);
	FVector MeshScale = FVector(10.0, 10.0, 10.0);
	FRotator MeshRotation = FRotator(0.0, 0.0, 0.0);
	thing->SetWorldScale3D(MeshScale);
	thing->SetRelativeRotation(MeshRotation);



}

void UGunController::killChildren()
{

	gungun2->DestroyChildActor();

}

