#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "T_TriggerKey.generated.h"

UCLASS()
class THE230CLASS_API AT_TriggerKey : public ATriggerBox
{
    GENERATED_BODY()

public:
    AT_TriggerKey();

protected:
    virtual void BeginPlay() override;

    UFUNCTION()
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);

public:
    // The actor to destroy when something overlaps
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Key")
    AActor* TargetToDestroy;
};
