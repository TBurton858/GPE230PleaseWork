// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "T_KEYJUSTWORK.generated.h"

UCLASS()
class THE230CLASS_API AT_Key : public AActor
{
	GENERATED_BODY()

public:
	AT_Key();

protected:
	virtual void BeginPlay() override;

	// Collision sphere
	UPROPERTY(VisibleAnywhere, Category = "Components")
	class USphereComponent* CollisionSphere;

	// The door we want to destroy (set this in the editor)
	UPROPERTY(EditInstanceOnly, Category = "Key Settings", meta = (AllowedClasses = "Actor"))
	AActor* DoorToDestroy;

	// Overlap function
	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);
};