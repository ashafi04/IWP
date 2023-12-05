// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseUnit.h"

// Sets default values
ABaseUnit::ABaseUnit()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TargetActor = nullptr;
	MinDist = 200;
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
/*	if (Health <= 0)
	*/	

}

void ABaseUnit::TakeDamage(ABaseUnit* OtherUnit)
{
	Health =  Health - (OtherUnit->Attack - Defense);
}

//void ABaseUnit::OnDeath()
//{
//	//return 0;
//}

void ABaseUnit::OnDeath_Implementation()
{
}


//void ABaseUnit::TakeDamage(int32 DamageAmount, ABaseUnit* OtherUnit)
//{
//	//Set Health Amount and Destory Projectile
//	Health = DamageAmount - Defense;
//} 

