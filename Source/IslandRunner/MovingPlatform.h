// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class ISLANDRUNNER_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void RotatePlatform(float DeltaTime);
	void MovePlatform(float DeltaTime);
	bool ShouldPlatformReturn() const;
	float GetDistanceMoved() const;

private:

UPROPERTY(EditAnywhere, Category = "Moving Platform")
FVector PlatformVelocity = FVector (100, 0, 0);

UPROPERTY(EditAnywhere, Category = "Moving Platform")
float MoveDistance = 100;

UPROPERTY(EditAnywhere, Category = "Rotating Platform")
FRotator RotationVelocity = FRotator (0, 0, 0);

FVector StartLocation;

};
