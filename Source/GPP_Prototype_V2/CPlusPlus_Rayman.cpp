// Fill out your copyright notice in the Description page of Project Settings.


#include "CPlusPlus_Rayman.h"

// Sets default values
ACPlusPlus_Rayman::ACPlusPlus_Rayman()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPlusPlus_Rayman::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPlusPlus_Rayman::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPlusPlus_Rayman::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

