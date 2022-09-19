// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlaform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlaform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlaform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	void MovePlatform(float DeltaTime);
	void RotatePlatform(float DeltaTime);
	
	UPROPERTY(EditAnywhere, Category="Moving Plaform")
	FVector PlatformVelocity = FVector(100, 0, 0);

	UPROPERTY(EditAnywhere, Category="Moving Plaform")
	float MoveDistance = 100;

	FVector StartLocation;

};
