#include "T_TriggerKey.h"
#include "Engine/Engine.h"

AT_TriggerKey::AT_TriggerKey()
{
    // Tick not needed for this trigger
    PrimaryActorTick.bCanEverTick = false;
}

void AT_TriggerKey::BeginPlay()
{
    Super::BeginPlay();

    // Bind overlap event
    OnActorBeginOverlap.AddDynamic(this, &AT_TriggerKey::OnOverlapBegin);
}

void AT_TriggerKey::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
    if (!OtherActor || OtherActor == this)
        return;

    // If we have a target assigned, destroy it
    if (TargetToDestroy && TargetToDestroy->IsValidLowLevel())
    {
        TargetToDestroy->Destroy();
    }

    // Optionally destroy the trigger itself (remove this line if not desired)
    Destroy();
}