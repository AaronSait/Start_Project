// Fill out your copyright notice in the Description page of Project Settings.


#include "Survival_Game/Items/GearItem.h"
#include "Survival_Game/Player/SurvivalGameCharacter.h"

UGearItem::UGearItem()
{
	damageDeductionMultiplyer = 0.1f;
}


bool UGearItem::Equip(ASurvivalGameCharacter * character)
{
	bool bEquippedSuccessful = Super::Equip(character);
	if (bEquippedSuccessful && character)
	{
		character->EquipGear(this);
	}
	return bEquippedSuccessful;
}

bool UGearItem::UnEquip(ASurvivalGameCharacter * character)
{
	bool bUnEquippedSuccessful = Super::UnEquip(character);
	if (bUnEquippedSuccessful && character)
	{
		character->UnEquipGear(slot);
	}
	return bUnEquippedSuccessful;
}
