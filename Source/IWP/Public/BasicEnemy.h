// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUnit.h"
#include "BasicEnemy.generated.h"




/**
 * 
 */
UCLASS()
class IWP_API ABasicEnemy : public ABaseUnit//, public IGameplayTagAssetInterface
{
	GENERATED_BODY()
	

public:
	ABasicEnemy();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ABaseUnit* TargetUnit;

private:

};

