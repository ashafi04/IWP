// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseUnit.h"

// Sets default values
ABaseUnit::ABaseUnit()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TargetActor = nullptr;
	MinDist = 200;
	Attack = 10;
	Defense = 5;
	MovementSpeed = 1;
	AttackSpeed = 1;
	Health= 50;
	AttackTimer = 10;
}

// Called when the game starts or when spawned
void ABaseUnit::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABaseUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Health <= 0)
		OnDeath();

}

void ABaseUnit::TakeDamage(ABaseUnit* OtherUnit)
{
	if (OtherUnit->Attack - Defense > 0)
		Health = Health - (OtherUnit->Attack - Defense);
	else
		Health--;
}

void ABaseUnit::OnDeath_Implementation()
{
}

void ABaseUnit::OnAttack_Implementation()
{
}

void ABaseUnit::OnWait_Implementation()
{
}


