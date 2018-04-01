// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/ChildActorComponent.h"
#include "GunController.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COMBATCARS2_API UGunController : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGunController();

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBlueprint* Bullet1;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UChildActorComponent *gungun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UChildActorComponent *gungun2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBlueprint* gun2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBlueprint* gun3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UBlueprint *> GunsBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UChildActorComponent *> GunsCA;


	int i;
	int j;


	UFUNCTION(BlueprintCallable)
	void killChildren();

	UFUNCTION(BlueprintCallable)
	void swapGuns();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
