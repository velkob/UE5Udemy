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
	
	StartLocation = GetActorLocation();
}

// Called every frame
void AMovingPlaform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovePlatform(DeltaTime);
	RotatePlatform(DeltaTime);

}

void AMovingPlaform::RotatePlatform(float DeltaTime)
{
	AddActorLocalRotation(RotationVelocity*DeltaTime);
}

void AMovingPlaform::MovePlatform(float DeltaTime)
{
	if(ShouldPlatformReturn())
	{
		FVector MoveDirection = PlatformVelocity.GetSafeNormal();
		StartLocation += MoveDirection * MoveDistance;
		SetActorLocation(StartLocation);
		PlatformVelocity = -PlatformVelocity;
	}
	else
	{
		FVector CurrentLocation = GetActorLocation();
		CurrentLocation += PlatformVelocity * DeltaTime;
		SetActorLocation(CurrentLocation);
	}
}

bool AMovingPlaform::ShouldPlatformReturn() const
{
	return GetDistanceMoved() > MoveDistance;
}

float AMovingPlaform::GetDistanceMoved() const
{
	return FVector::Dist(StartLocation, GetActorLocation());
}
