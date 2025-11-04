// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "T_PublicEnemy.generated.h"

UCLASS()
class THE230CLASS_API AT_PublicEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	AT_PublicEnemy();

	// This function will be called from Blueprint
	UFUNCTION(BlueprintCallable, Category = "Attack")
	void AttackPlayer(AActor* TargetActor, float DamageAmount = 10.0f);
};
