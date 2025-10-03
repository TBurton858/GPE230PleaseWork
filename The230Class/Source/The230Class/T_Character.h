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
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Movement functions
	void MoveForward(float Value);
	void Rotate(float Value);
	void StartJump();
};