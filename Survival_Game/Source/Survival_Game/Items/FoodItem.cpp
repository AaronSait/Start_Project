// Fill out your copyright notice in the Description page of Project Settings.


#include "Survival_Game/Items/FoodItem.h"
#include "Survival_Game/Player/SurvivalGameCharacter.h"
#include "Survival_Game/Player/SurvivalPlayerController.h"
#include "Survival_Game/Components/InventoryComponent.h"


#define LOCTEXT_NAMESPACE "FoodItem"
UFoodItem::UFoodItem()
{
	healAmount = 20.0f;
	useActionText = LOCTEXT("ItemUseActionText", "Consume");
}

void UFoodItem::Use(ASurvivalGameCharacter * character)
{
	/*
	This is were you heal the character
	*/
	UE_LOG(LogTemp, Warning, TEXT("Consumed Food"));
}
#undef LOCTEXT_NAMESPACE