// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/TargetPoint.h"
#include "LootSpawner.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FLootTableRow : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "Loot")
		TArray<TSubclassOf<class UItem>> items;

	UPROPERTY(EditDefaultsOnly, Category = "Loot", meta = (ClampMin = 0.001, ClampMax = 1.0))
		float probability = 1.0f;
};

UCLASS()
class SURVIVAL_GAME_API ALootSpawner : public ATargetPoint
{
	GENERATED_BODY()

public:
	ALootSpawner();

	UPROPERTY(EditAnywhere, Category = "Loot")
		class UDataTable* lootTable;

	UPROPERTY(EditDefaultsOnly, Category = "Loot")
		TSubclassOf<class APickup> pickupClass;

	UPROPERTY(EditDefaultsOnly, Category = "Loot")
		FIntPoint respawnInterval;

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
		void SpawnItem();

	UFUNCTION()
		void OmnItemTaken(AActor* destroyedActor);

	FTimerHandle timerHandle_ResapwnItem;

	UPROPERTY()
		TArray<AActor*> spawnedPickups;
};
