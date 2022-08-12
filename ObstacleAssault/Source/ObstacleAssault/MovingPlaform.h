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

	UPROPERTY(EditAnywhere)
	FVector MyVector = FVector(-14150.0, -2440.0, 4056.0);

	
	UPROPERTY(EditAnywhere)
	float MyX = 5;
};
