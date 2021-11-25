// Fill out your copyright notice in the Description page of Project Settings.


#include "Survival_Game/World/LootActor.h"
#include "Engine/DataTable.h"
#include "Components/StaticMeshComponent.h"
#include "Survival_Game/Components/InventoryComponent.h"
#include "Survival_Game/Components/InteractionComponent.h"
#include "Survival_Game/Items/Item.h"
#include "Survival_Game/World/LootSpawner.h"
#include "Survival_Game/Player/SurvivalGameCharacter.h"


#define LOCTEXT_NAMESPACE "LootableActor"
// Sets default values
ALootActor::ALootActor()
{
	lootContainerMesh = CreateDefaultSubobject<UStaticMeshComponent>("Loot Container Mesh");
	SetRootComponent(lootContainerMesh);

	lootInteraction = CreateDefaultSubobject<UInteractionComponent>("Loot Interaction");
	lootInteraction->interactionActionText = LOCTEXT("LootActorText", "Loot");
	lootInteraction->interactionNameText = LOCTEXT("LootActorName", "Chest");
	lootInteraction->SetupAttachment(GetRootComponent());

	inventory = CreateDefaultSubobject<UInventoryComponent>("Inventory");
	inventory->SetCapacity(20);
	inventory->SetWeightCapacity(80.0f);

	lootRolls = FIntPoint(2, 8);
}


// Called when the game starts or when spawned
void ALootActor::BeginPlay()
{
	Super::BeginPlay();
	lootInteraction->OnInteract.AddDynamic(this, &ALootActor::OnInteract);

	if (lootTable)
	{
		TArray<FLootTableRow*> spawnItems;
		lootTable->GetAllRows("", spawnItems);
		int32 rolls = FMath::RandRange(lootRolls.GetMin(), lootRolls.GetMax());
		for (int32 i = 0; i < rolls; ++i)
		{
			const FLootTableRow* lootRow = spawnItems[FMath::RandRange(0, spawnItems.Num() - 1)];
			ensure(lootRow);
			float problityRoll = FMath::FRandRange(0.0f, 1.0f);
			while (problityRoll > lootRow->probability)
			{
				lootRow = spawnItems[FMath::RandRange(0, spawnItems.Num() - 1)];
				problityRoll = FMath::FRandRange(0.0f, 1.0f);
			}
			if (lootRow && lootRow->items.Num())
			{
				for (auto& itemClass : lootRow->items)
				{
					if (itemClass)
					{
						const int32 quantity = Cast<UItem>(itemClass.GetDefaultObject())->GetQuantity();
						inventory->TryAddItemFromClass(itemClass, quantity);
					}
				}
			}

		}
	}

}


void ALootActor::OnInteract(ASurvivalGameCharacter * character)
{
	if (character)
	{
		character->SetLootSource(inventory);
	}
}

#undef LOCTEXT_NAMESPACE

