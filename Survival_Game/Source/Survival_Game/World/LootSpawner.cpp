// Fill out your copyright notice in the Description page of Project Settings.


#include "Survival_Game/World/LootSpawner.h"
#include "Engine.h"
#include "Survival_Game/World/Pickup.h"
#include "Survival_Game/Items/Item.h"

ALootSpawner::ALootSpawner()
{
	PrimaryActorTick.bCanEverTick = false;
	respawnInterval = FIntPoint(5, 15);
}

void ALootSpawner::BeginPlay()
{
	Super::BeginPlay();
	SpawnItem();
}

void ALootSpawner::SpawnItem()
{
	if (lootTable)
	{
		TArray<FLootTableRow*> spawnItems;
		lootTable->GetAllRows("", spawnItems);

		const FLootTableRow* lootRow = spawnItems[FMath::RandRange(0, spawnItems.Num() - 1)];
		ensure(lootRow);
		float probablilityRoll = FMath::FRandRange(0.0f, 1.0f);
		while (probablilityRoll > lootRow->probability)
		{
			lootRow = spawnItems[FMath::RandRange(0, spawnItems.Num() - 1)];
			probablilityRoll = FMath::FRandRange(0.0f, 1.0f);
		}

		if (lootRow && lootRow->items.Num() && pickupClass)
		{
			float angle = 0.0f;
			for (auto& itemClass : lootRow->items)
			{
				const FVector locationOffset = FVector(FMath::Cos(angle), FMath::Sin(angle), 0.0f) * 50;

				FActorSpawnParameters spawnParams;
				spawnParams.bNoFail = true;
				spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

				const int32 intemQuantity = itemClass->GetDefaultObject<UItem>()->GetQuantity();

				FTransform spawnTransform = GetActorTransform();
				spawnTransform.AddToTranslation(locationOffset);

				APickup* pickup = GetWorld()->SpawnActor<APickup>(pickupClass, spawnTransform, spawnParams);
				pickup->InitializePickup(itemClass, intemQuantity);
				pickup->OnDestroyed.AddUniqueDynamic(this, &ALootSpawner::OmnItemTaken);

				spawnedPickups.Add(pickup);

				angle += (PI * 2) / lootRow->items.Num();
			}
		}
	}
}

void ALootSpawner::OmnItemTaken(AActor * destroyedActor)
{
	spawnedPickups.Remove(destroyedActor);
	if (spawnedPickups.Num() <= 0)
	{
		GetWorldTimerManager().SetTimer(timerHandle_ResapwnItem, this, &ALootSpawner::SpawnItem, FMath::RandRange(respawnInterval.GetMin(), respawnInterval.GetMax()), false);
	}
}
