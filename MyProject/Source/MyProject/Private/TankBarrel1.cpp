// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "TankBarrel1.h"



void UTankBarrel1::Elevate(float RelativeSpeed)
{
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1.f, 1.f);
	auto ElevationChange = RelativeSpeed * GetWorld()->DeltaTimeSeconds * MaxDegreesPerSecond;
	auto RawElevation = RelativeRotation.Pitch + ElevationChange;
	auto Elevation = FMath::Clamp<float>(RawElevation, MinElevationDegrees, MaxElevationDegrees);

	SetRelativeRotation(FRotator(Elevation, 0, 0));
}
