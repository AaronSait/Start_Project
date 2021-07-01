// Fill out your copyright notice in the Description page of Project Settings.


#include "Survival_Game/Components/InventoryComponent.h"
#include "Engine.h"
#include "Survival_Game/Items/Item.h"

#define LOCTEXT_NAMESPACE "Inventory"
// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
}

FItemAddResult UInventoryComponent::TryAddItemFromClass(TSubclassOf<class UItem> itemClass, const int32 quantity)
{

	UItem* item = NewObject<UItem>(GetOwner(), itemClass);
	item->SetQuantity(quantity);
	return TryAddItem(item);
}

int32 UInventoryComponent::ConsumeItem(UItem * item)
{
	if (item)
	{
		ConsumeItem(item, item->GetQuantity());
	}
	return 0;
}

int32 UInventoryComponent::ConsumeItem(UItem * item, const int32 quantity)
{
	if (GetOwner() && item)
	{
		const int32 removeQuantity = FMath::Min(quantity, item->GetQuantity());
		ensure(!(item->GetQuantity() - removeQuantity < 0));
		item->SetQuantity(item->GetQuantity() - removeQuantity);
		if (item->GetQuantity() <= 0)
		{
			RemoveItem(item);
		}
		else
		{
			RefreshInventory();
		}
		return removeQuantity;
	}
	return 0;
}


bool UInventoryComponent::RemoveItem(UItem * item)
{
	if (GetOwner())
	{
		if (item)
		{
			items.RemoveSingle(item);
			return true;
		}
	}
	return false;
}

bool UInventoryComponent::HasItem(TSubclassOf<class UItem> itemClass, const int32 quantity) const
{

	if (UItem* itemToFine = FindItemByClass(itemClass))
	{
		return itemToFine->GetQuantity() >= quantity;
	}
	return false;
}

UItem * UInventoryComponent::FindItem(UItem * item) const
{
	for (auto& invItem : items)
	{
		if (invItem && invItem->GetClass() == item->GetClass())
		{
			return invItem;
		}
	}
	return nullptr;
}

UItem * UInventoryComponent::FindItemByClass(TSubclassOf<class UItem> itemClass) const
{
	for (auto& invItem : items)
	{
		if (invItem && invItem->GetClass() == itemClass)
		{
			return invItem;
		}
	}
	return nullptr;
}

TArray<UItem*> UInventoryComponent::FindItemsByClass(TSubclassOf<class UItem> itemClass) const
{
	TArray<UItem*> itemsOfClass;
	for (auto& invItem : items)
	{
		if (invItem && invItem->GetClass()->IsChildOf(itemClass))
		{
			itemsOfClass.Add(invItem);
		}
	}

	return itemsOfClass;
}

float UInventoryComponent::GetCurrentWeight() const
{
	float weight = 0.0f;
	for (auto& item : items)
	{
		if (item)
		{
			weight  += item->GetStackWeight();
		}
	}
	return weight;
}

void UInventoryComponent::SetWeightCapacity(const float newWeightCapacity)
{
	weightCapacity = newWeightCapacity;
	OnInventoryUpdated.Broadcast();
}

void UInventoryComponent::SetCapacity(const int32 newCapacity)
{
	capacity = newCapacity;
	OnInventoryUpdated.Broadcast();
}

void UInventoryComponent::RefreshInventory()
{
	OnInventoryUpdated.Broadcast();
}

UItem * UInventoryComponent::AddItem(UItem * item)
{
	if (GetOwner())
	{
		UItem* newItem = NewObject<UItem>(GetOwner(), item->GetClass());
		newItem->SetQuantity(item->GetQuantity());
		newItem->world = GetWorld();
		newItem->owningInventory = this;
		newItem->AddedToInventory(this);
		items.Add(newItem);

		return newItem;
	}
	return nullptr;
}


FItemAddResult UInventoryComponent::TryAddItem(UItem * item)
{
	if (GetOwner())
	{
		const int32 addAmount = item->GetQuantity();

		if (items.Num() + 1 > GetCapacity())
		{
			return FItemAddResult::AddedNone(addAmount, LOCTEXT("InventoryCapacityFull", "Could Not Add Item To Inventory. Inventory is Full"));
		}
		if (!FMath::IsNearlyZero(item->weight))
		{
			if (GetCurrentWeight() + item->weight > GetWeightCapacity())
			{
				return FItemAddResult::AddedNone(addAmount, LOCTEXT("WeightCapacityReached", "Could Not Add Item To Inventory. Weight Capasity Reached"));
			}
		}
		if (item->bStackable)
		{
			ensure(item->GetQuantity() <= item->maxStackSize);
			if (UItem* existingItem = FindItem(item))
			{
				if (existingItem->GetQuantity() < existingItem->maxStackSize)
				{
					const int32 capacityMaxAddAmount = existingItem->maxStackSize - existingItem->GetQuantity();
					int32 acctualAddamount = FMath::Min(addAmount, capacityMaxAddAmount);
					FText errorText = LOCTEXT("InventoryErroText", "Could Not Add All Of The Item To Your Inventory");
					if (!FMath::IsNearlyZero(item->weight))
					{
						const int32 weightMaxAddAmount = FMath::FloorToInt((weightCapacity - GetCurrentWeight()) / item->weight);
						acctualAddamount = FMath::Min(acctualAddamount, weightMaxAddAmount);
						if (acctualAddamount < addAmount)
						{
							errorText = FText::Format(LOCTEXT("InventorytooMuchWeight", "Could Not Add Entire Stack Of {ItemName} to Inventory. Inventory At Max Weight Cap"), item->itemDisplayName);
						}
					}
					else if (acctualAddamount < addAmount)
					{
						errorText = FText::Format(LOCTEXT("InventoryCapacityFilled", "Could Not Add Entire Stack Of {ItemName} to Inventory. Inventory Was Filled"), item->itemDisplayName);
					}

					if (acctualAddamount <= 0)
					{
						return FItemAddResult::AddedNone(addAmount, LOCTEXT("InventoryErrorText", "Could Not Add Item TO Inventory"));
					}

					existingItem->SetQuantity(existingItem->GetQuantity() + acctualAddamount);
					ensure(existingItem->GetQuantity() <= existingItem->maxStackSize);

					if (acctualAddamount < addAmount)
					{
						return FItemAddResult::AddedSome(addAmount, acctualAddamount, errorText);
					}
					else
					{
						return FItemAddResult::AddedAll(item->quantity);
					}
				}
				else
				{
					return FItemAddResult::AddedNone(addAmount, FText::Format(LOCTEXT("InventoyAtFullStack", "Could NOT ADD {ItemName}. You Already Have A Full Stack"), item->itemDisplayName));
				}
			}
			else
			{
				AddItem(item);
				return FItemAddResult::AddedAll(addAmount);
			}
		}
		else
		{
			ensure(item->GetQuantity() == 1);
			AddItem(item);
			return FItemAddResult::AddedAll(addAmount);
		}
	}

	check(false);
	return FItemAddResult::AddedNone(-1, LOCTEXT("ErrorMessage", ""));
}

#undef LOCTEXT_NAMESPACE
