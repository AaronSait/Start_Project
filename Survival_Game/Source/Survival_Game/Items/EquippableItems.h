// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Survival_Game/Items/Item.h"
#include "EquippableItems.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EEquippableSlot : uint8
{
	EIS_Head UMETA(DisplayName = "Head"),
	EIS_Helmet UMETA(DisplayName = "Helmet"),
	EIS_Chest UMETA(DisplayName = "Chest"),
	EIS_Vest UMETA(DisplayName = "Vest"),
	EIS_Legs UMETA(DisplayName = "Legs"),
	EIS_Feet UMETA(DisplayName = "Feet"),
	EIS_Hands UMETA(DisplayName = "Hands"),
	EIS_Backpack UMETA(DisplayName = "Backpack"),
	EIS_PrimaryWeapon UMETA(DisplayName = "Primary Weapon"),
	EIS_Throwable UMETA(DisplayName = "Throwable Item")
};

UCLASS(Abstract, NotBlueprintable)
class SURVIVAL_GAME_API UEquippableItems : public UItem
{
	GENERATED_BODY()

public:
	UEquippableItems();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equippables")
		EEquippableSlot slot;


	virtual void Use(class ASurvivalGameCharacter* character) override;
	virtual bool ShouldShowInInventory() const override;

	UFUNCTION(BlueprintCallable, Category = "Equippables")
		virtual bool Equip(class ASurvivalGameCharacter* character);

	UFUNCTION(BlueprintCallable, Category = "Equippables")
		virtual bool UnEquip(class ASurvivalGameCharacter* character);

	UFUNCTION(BlueprintCallable, Category = "Equippales")
		bool IsEquipped()
		{
		 return bEquipped;
		};
	
	void SetEquipped(bool bNewEquipped);

	virtual void AddedToInventory(class UInventoryComponent* inventory) override;

protected:
	UPROPERTY()
		bool bEquipped;

	UFUNCTION()
		void EquipStatusChanged();

};
