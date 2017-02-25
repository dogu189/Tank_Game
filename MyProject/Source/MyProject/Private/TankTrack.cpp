// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "TankTrack.h"




void UTankTrack::SetThrottle(float Throttle)
{
	auto Name = GetName();
	UE_LOG(LogTemp, Warning, TEXT("%s throttle %f"),*Name, Throttle);

	auto ForceApplied = GetForwardVector() * Throttle * TrackMaxDrivingForce;
	auto Forcelocation = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceApplied, Forcelocation);

}