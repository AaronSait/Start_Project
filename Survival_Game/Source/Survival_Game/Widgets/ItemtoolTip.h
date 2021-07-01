// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemtoolTip.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVAL_GAME_API UItemtoolTip : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category = "ItemToolTip", meta = (ExposeOnSpawn = true))
		class UInventoryItemWidget* inventoryItemWidget;
	
};
