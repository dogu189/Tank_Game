// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel1.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class MYPROJECT_API UTankBarrel1 : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	void Elevate(float RelativeSpeed);
	
private:
	UPROPERTY(EditDefaultsOnly, Category = Elavation)
	float MaxDegreesPerSecond = 20;

	UPROPERTY(EditDefaultsOnly, Category = Elavation)
	float MaxElevationDegrees = 40;

	UPROPERTY(EditDefaultsOnly, Category = Elavation)
	float MinElevationDegrees = 0;


};
