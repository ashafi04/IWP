// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseUnit.generated.h"


UCLASS()
class IWP_API ABaseUnit : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseUnit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsAlly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AActor* TargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Attack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Defense;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 MovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 AttackSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Health;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Damage Calculation")
		void TakeDamage(int32 DamageAmount, AActor* OtherActor);
	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = EnemyTags; return; };

};
