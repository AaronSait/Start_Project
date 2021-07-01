// Fill out your copyright notice in the Description page of Project Settings.


#include "Survival_Game/Items/Item.h"
#include "Survival_Game/Components/InventoryComponent.h"

#define LOCTEXT_NAMESPACE "Item"

UWorld * UItem::GetWorld() const
{
	return world;
}


#if WITH_EDITOR
void UItem::PostEditChangeProperty(FPropertyChangedEvent & propertyChangedEvent)
{
	Super::PostEditChangeProperty(propertyChangedEvent);

	FName changedPropertyName = propertyChangedEvent.Property ? propertyChangedEvent.Property->GetFName() : NAME_None;

	if (changedPropertyName == GET_MEMBER_NAME_CHECKED(UItem, quantity))
	{
		quantity = FMath::Clamp(quantity, 1, bStackable ? maxStackSize : 1);
	}

}
#endif
UItem::UItem()
{
	itemDisplayName = LOCTEXT("ItemName", "item");
	useActionText = LOCTEXT("ITemUseActionText", "Use");
	weight = 0.0f;
	bStackable = true;
	quantity = 1;
	maxStackSize = 2;
}

void UItem::SetQuantity(const int32 newQuantity)
{
	if (newQuantity != quantity)
	{
		quantity = FMath::Clamp(newQuantity, 0, bStackable ? maxStackSize : 1);
	}
}

bool UItem::ShouldShowInInventory() const
{
	return true;
}

void UItem::Use(ASurvivalGameCharacter * character)
{
}

void UItem::AddedToInventory(UInventoryComponent * inventory)
{
}

#undef LOCTEXT_NAMESPACE
