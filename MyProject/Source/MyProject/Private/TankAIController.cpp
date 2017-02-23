// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "Tank.h"
#include "TankAIController.h"



void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PC = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());
	if (PC)
	{
		ControlledTank->AimAt(PC->GetActorLocation());

		ControlledTank->Fire();
	}
}
void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

}


