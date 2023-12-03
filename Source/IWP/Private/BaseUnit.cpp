// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseUnit.h"

// Sets default values
ABaseUnit::ABaseUnit()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	TargetActor = nullptr;
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

}

void ABaseUnit::TakeDamage(ABaseUnit* OtherUnit)
{
	Health = OtherUnit->Attack - Defense;
}

//void ABaseUnit::TakeDamage(int32 DamageAmount, ABaseUnit* OtherUnit)
//{
//	//Set Health Amount and Destory Projectile
//	Health = DamageAmount - Defense;
//} 

