// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SurvivalPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVAL_GAME_API ASurvivalPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void ShowNotification(const FText& message);

	UFUNCTION(BlueprintImplementableEvent)
		void ShowDeathMenu();

	UFUNCTION(BlueprintImplementableEvent)
		void ShowLootMenu(const class UInventoryComponent* lootSource);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void HideLootMenu();

	UFUNCTION(BlueprintImplementableEvent)
		void ShowIngameUI();

	UFUNCTION(BlueprintImplementableEvent)
		void OnHitPlayer();

};
