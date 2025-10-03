#include "T_Key.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Pawn.h"

AT_Key::AT_Key()
{
	PrimaryActorTick.bCanEverTick = false;

	// Create the collision sphere
	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
	RootComponent = CollisionSphere;

	// Set sphere size and collision settings
	CollisionSphere->InitSphereRadius(100.0f);
	CollisionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionSphere->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	CollisionSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	CollisionSphere->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);

	// Bind overlap event
	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AT_Key::OnOverlap);
}

void AT_Key::BeginPlay()
{
	
}

void AT_Key::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->IsA(APawn::StaticClass()))
	{
		// Destroy the door if valid
		if (DoorToDestroy)
		{
			DoorToDestroy->Destroy();
		}

		// Destroy the key itself
		Destroy();
	}
}