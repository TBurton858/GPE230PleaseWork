#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "T_Character.generated.h"

UCLASS()
class THE230CLASS_API AT_Character : public ACharacter
{
    GENERATED_BODY()

public:
    AT_Character();

protected:
    virtual void BeginPlay() override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
    // Movement
    void MoveForward(float Value);
    void Rotate(float Value);
    void StartJump();

    // Simplified Damage and Heal
    UFUNCTION(BlueprintCallable, Category = "Health")
    void ApplyDamage(float DamageAmount);

    UFUNCTION(BlueprintCallable, Category = "Health")
    void ApplyHeal(float HealAmount);

    UFUNCTION(BlueprintCallable, Category = "Health")
    void Die();

    // Health variables
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
    float MaxHealth = 100.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
    float CurrentHealth = 100.f;

    // Movement speeds
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float MoveSpeed = 600.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float RotationSpeed = 100.f;
};
