// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel1.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UTankBarrel1 : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	void Elevate(float DegreesPerSecond);
	
};
