// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class MYPROJECT_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()
	
	
public:
	void Turn(float RelativeSpeed);

private:

	UPROPERTY(EditDefaultsOnly, Category = TurretMovement)
	float MaxDegreesTurnSecond = 10;
	
};
