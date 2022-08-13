// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlaform.h"

// Sets default values
AMovingPlaform::AMovingPlaform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlaform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMovingPlaform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Move platform forwards
		// Get current location
	FVector CurrentLocation = GetActorLocation();
		// Add vector to the location
	CurrentLocation.Y += 2;
		// Set the location
	SetActorLocation(CurrentLocation);
	// Send platform back if gone too far
		// Check how far we've moved
		// Reverse direction of motion if gone too far
}

