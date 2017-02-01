// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "TankBarrel1.h"



void UTankBarrel1::Elevate(float DegreesPerSecond)
{
	UE_LOG(LogTemp, Warning, TEXT("Barrel Elevate Called at speed %f"), DegreesPerSecond );
}
