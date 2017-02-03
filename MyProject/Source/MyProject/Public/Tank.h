// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

class UTankBarrel1;
class UTankAimingComponent;
class UTankTurret;

UCLASS()
class MYPROJECT_API ATank : public APawn
{
	GENERATED_BODY()
public:

	void AimAt(FVector HitLocation);


	UFUNCTION(BlueprintCallable, Category = "Setup")
	void SetBarrelReference(UTankBarrel1* BarrelToSet);

	UFUNCTION(BlueprintCallable, Category = "Setup")
	void SetTurretReference(UTankTurret* TurretToSet);

protected:
	UTankAimingComponent* TankAimingComponent = nullptr;
private:
	// Sets default values for this pawn's properties
	ATank();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	UPROPERTY(EditAnywhere, Category = "Firing")
	float LaunchSpeed = 100000;

	
	
};