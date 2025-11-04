#include "T_Enemy.h"
#include "THE230CLASS/T_Character.h" // So we can cast to your player class
#include "Kismet/GameplayStatics.h"  // For ApplyDamage if you want to use it

AT_Enemy::AT_Enemy()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AT_Enemy::AttackPlayer(AActor* TargetActor, float DamageAmount)
{
	if (!TargetActor) return;

	// Option 1: Use built-in ApplyDamage (recommended)
	UGameplayStatics::ApplyDamage(TargetActor, DamageAmount, GetInstigatorController(), this, nullptr);

	// Option 2: (Alternative) Call TakeDamage directly — not required
	/*
	if (AT_Character* Player = Cast<AT_Character>(TargetActor))
	{
		FDamageEvent DamageEvent;
		Player->TakeDamage(DamageAmount, DamageEvent, GetInstigatorController(), this);
	}
	*/

	UE_LOG(LogTemp, Warning, TEXT("%s attacked %s for %f damage"),
		*GetName(), *TargetActor->GetName(), DamageAmount);
}
