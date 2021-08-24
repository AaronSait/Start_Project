// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Survival_Game/Items/EquippableItems.h"
#include "WeaponItem.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class SURVIVAL_GAME_API UWeaponItem : public UEquippableItems
{
	GENERATED_BODY()
public:

	UWeaponItem();

	virtual bool Equip (class ASurvivalGameCharacter* character) override;
	virtual bool UnEquip(class ASurvivalGameCharacter* character) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		TSubclassOf<class Aweapon> weaponClass;
	
};
