// Fill out your copyright notice in the Description page of Project Settings.


#include "T_Pickup.h"

// Sets default values
AT_Pickup::AT_Pickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AT_Pickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AT_Pickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

