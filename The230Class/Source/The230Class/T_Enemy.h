#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "T_Enemy.generated.h"

UCLASS()
class THE230CLASS_API AT_Enemy : public AActor
{
	GENERATED_BODY()

public:
	AT_Enemy();

	// This function will be called from Blueprint
	UFUNCTION(BlueprintCallable, Category = "Attack")
	void AttackPlayer(AActor* TargetActor, float DamageAmount = 10.0f);
};
