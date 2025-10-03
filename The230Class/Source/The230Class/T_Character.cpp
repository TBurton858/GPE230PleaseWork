#include "T_Character.h"
#include "GameFramework/Controller.h"
#include "GameFramework/InputSettings.h"
#include "GameFramework/CharacterMovementComponent.h"

AT_Character::AT_Character()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AT_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Axis mappings
	PlayerInputComponent->BindAxis("MoveForward", this, &AT_Character::MoveForward);
	PlayerInputComponent->BindAxis("Rotate", this, &AT_Character::Rotate);

	// Action mapping
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
		// Rotate left/right using controller yaw
		AddControllerYawInput(Value);
	}
}

void AT_Character::StartJump()
{
	if (GetCharacterMovement())
	{
		Jump(); // calls ACharacter::Jump
	}
}