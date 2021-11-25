// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventoryItemWidget.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVAL_GAME_API UInventoryItemWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category = "InventoryItemWidget", meta = (ExposeOnSpawn = true))
		class UItem* item;
	
};
