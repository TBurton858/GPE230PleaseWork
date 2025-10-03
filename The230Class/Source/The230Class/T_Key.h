#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "T_Key.generated.h"

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
	UPROPERTY(EditAnywhere, Category = "Key Settings")
	AActor* DoorToDestroy;

	// Overlap function
	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);
};