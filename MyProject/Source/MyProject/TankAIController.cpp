// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "TankAIController.h"


ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
ATank* ATankAIController::GetPlayerTank() const
{
	auto PC = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (!PC)
	{
		return nullptr;
	}
	return PC;
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("AIController Begin Play"));

	auto ControllerTank = GetPlayerTank();
	if (!ControllerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller Failed to find"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController is %s"), *ControllerTank->GetName());
	}
}

