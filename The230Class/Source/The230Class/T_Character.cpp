#include "T_Character.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/InputComponent.h"

AT_Character::AT_Character()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AT_Character::BeginPlay()
{
    Super::BeginPlay();

    // Start at full health
    CurrentHealth = MaxHealth;

    UE_LOG(LogTemp, Warning, TEXT("%s BeginPlay - Health: %f"), *GetName(), CurrentHealth);
}

void AT_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis("MoveForward", this, &AT_Character::MoveForward);
    PlayerInputComponent->BindAxis("Rotate", this, &AT_Character::Rotate);
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AT_Character::StartJump);
}

void AT_Character::MoveForward(float Value)
{
    if (Controller && Value != 0.0f)
    {
        AddMovementInput(GetActorForwardVector(), Value);
    }
}

void AT_Character::Rotate(float Value)
{
    if (Controller && Value != 0.0f)
    {
        AddControllerYawInput(Value);
    }
}

void AT_Character::StartJump()
{
    Jump();
}

void AT_Character::ApplyDamage(float DamageAmount)
{
    CurrentHealth -= DamageAmount;
    CurrentHealth = FMath::Clamp(CurrentHealth, 0.0f, MaxHealth);

    UE_LOG(LogTemp, Warning, TEXT("%s took %f damage. Health: %f"), *GetName(), DamageAmount, CurrentHealth);

    if (CurrentHealth <= 0.0f)
    {
        Die();
    }
}

void AT_Character::ApplyHeal(float HealAmount)
{
    CurrentHealth += HealAmount;
    CurrentHealth = FMath::Clamp(CurrentHealth, 0.0f, MaxHealth);

    UE_LOG(LogTemp, Warning, TEXT("%s healed %f. Health: %f"), *GetName(), HealAmount, CurrentHealth);
}

void AT_Character::Die()
{
    UE_LOG(LogTemp, Warning, TEXT("%s died!"), *GetName());
    Destroy();
}
