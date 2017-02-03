// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "TankTurret.h"




void UTankTurret::Turn(float RelativeSpeed) 
{
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	auto RotationChange = RelativeSpeed * MaxDegreesTurnSecond * GetWorld()->DeltaTimeSeconds;
	auto Rotation = RelativeRotation.Yaw + RotationChange;
	SetRelativeRotation(FRotator(0, Rotation, 0));
}