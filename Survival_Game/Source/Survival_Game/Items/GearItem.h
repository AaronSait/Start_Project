// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Survival_Game/Items/EquippableItems.h"
#include "GearItem.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class SURVIVAL_GAME_API UGearItem : public UEquippableItems
{
	GENERATED_BODY()

public:
	UGearItem();

	virtual bool Equip(class ASurvivalGameCharacter* character) override;
	virtual bool UnEquip(class ASurvivalGameCharacter* character) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gear")
		class USkeletalMesh* mesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gear")
		class UMaterialInstance* materialInstance;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gear", meta = (ClampMin = 0.0, ClampMax = 1.0))
		float damageDeductionMultiplyer;
};
