// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Survival_Game/Items/Item.h"
#include "FoodItem.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVAL_GAME_API UFoodItem : public UItem
{
	GENERATED_BODY()
	
public:
	UFoodItem();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Healing")
		float healAmount;

	virtual void Use(class ASurvivalGameCharacter* character) override;
};
