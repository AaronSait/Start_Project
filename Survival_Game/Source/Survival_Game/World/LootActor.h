// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LootActor.generated.h"

UCLASS()
class SURVIVAL_GAME_API ALootActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALootActor();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
		class UStaticMeshComponent* lootContainerMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
		class UInteractionComponent* lootInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
		class UInventoryComponent* inventory;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
		class UDataTable* lootTable;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
		FIntPoint lootRolls;

	UFUNCTION()
		void OnInteract(class ASurvivalGameCharacter* character);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
