// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class SURVIVAL_GAME_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

	void InitializePickup(const TSubclassOf<class UItem> itemClsass, const int32 quantity);

	UFUNCTION(BlueprintImplementableEvent)
		void AlignWithGround();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced)
		class UItem* itemTemplate;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite)
		class UItem* item;

	UFUNCTION()
		void OnItemModified();

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	UFUNCTION()
		void OnTakePickup(class ASurvivalGameCharacter* taker);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components")
		class UStaticMeshComponent* pickupMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
		class UInteractionComponent* interactionComponent;

};
