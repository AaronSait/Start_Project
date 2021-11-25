// Fill out your copyright notice in the Description page of Project Settings.


#include "Survival_Game/Items/WeaponItem.h"
#include "Survival_Game/Player/SurvivalGameCharacter.h"
#include "Survival_Game/Player/SurvivalPlayerController.h"

UWeaponItem::UWeaponItem()
{

}

bool UWeaponItem::Equip(ASurvivalGameCharacter * character)
{
	bool bEquipSuccessful = Super::Equip(character);
	if (bEquipSuccessful && character)
	{
		character->EquipWeapon(this);
	}
	return bEquipSuccessful;
}

bool UWeaponItem::UnEquip(ASurvivalGameCharacter * character)
{
	bool bUnEquipSuccessful = Super::UnEquip(character);
	if (bUnEquipSuccessful && character)
	{
		character->UnEquipWeapon();
	}
	return bUnEquipSuccessful;
}
