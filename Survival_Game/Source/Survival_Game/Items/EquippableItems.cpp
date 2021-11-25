// Fill out your copyright notice in the Description page of Project Settings.


#include "Survival_Game/Items/EquippableItems.h"
#include "Survival_Game/Player/SurvivalGameCharacter.h"
#include "Survival_Game/Components/InventoryComponent.h"

#define LOCTEXT_NAMESPACE "EquippableItems"
UEquippableItems::UEquippableItems()
{
	bStackable = false;
	bEquipped = false;
	useActionText = LOCTEXT("EquipText", "Equip");
}

void UEquippableItems::Use(ASurvivalGameCharacter * character)
{
	if (character)
	{
		if (character->GetEquippedItems().Contains(slot) && !bEquipped)
		{
			UEquippableItems* alreadyEquippedItem = *character->GetEquippedItems().Find(slot);
			alreadyEquippedItem->SetEquipped(false);
		}
		SetEquipped(!IsEquipped());
	}
}

bool UEquippableItems::ShouldShowInInventory() const
{
	return !bEquipped;;
}

bool UEquippableItems::Equip(ASurvivalGameCharacter * character)
{
	if (character)
	{
		return character->EquipItem(this);
	}
	return false;
}

bool UEquippableItems::UnEquip(ASurvivalGameCharacter * character)
{
	if (character)
	{
		return character->UnEquipItem(this);
	}
	return false;
}

void UEquippableItems::SetEquipped(bool bNewEquipped)
{
	bEquipped = bNewEquipped;
	EquipStatusChanged();
}

void UEquippableItems::EquipStatusChanged()
{
	if (ASurvivalGameCharacter* character = Cast<ASurvivalGameCharacter>(GetOuter()))
	{
		if (bEquipped)
		{
			Equip(character);
		}
		else
		{
			UnEquip(character);
		}
	}
	OnItemModified.Broadcast();
}

void UEquippableItems::AddedToInventory(UInventoryComponent * inventory)
{
	if (ASurvivalGameCharacter* character = Cast<ASurvivalGameCharacter>(inventory->GetOwner()))
	{
		if (character && !character->IsLooting())
		{
			if (!character->GetEquippedItems().Contains(slot))
			{
				SetEquipped(true);

			}
		}
	}
}
#undef LOCTEXT_NAMESAPCE