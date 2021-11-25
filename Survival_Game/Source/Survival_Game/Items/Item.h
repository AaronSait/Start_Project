// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Item.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemModified);

UENUM(BlueprintType)
enum class  EItemRearity : uint8
{
	IR_Common UMETA(DisplyName = "Common"),
	IR_Uncommon UMETA(DisplyName = "Uncommon"),
	IR_Rear UMETA(DisplyName = "Rear"),
	IR_VeryRear UMETA(DisplyName = "VeryRear"),
	IR_Legendary UMETA(DisplyName = "Legendary"),

};

UCLASS(Blueprintable, EditInlineNew, DefaultToInstanced)
class SURVIVAL_GAME_API UItem : public UObject
{
	GENERATED_BODY()
protected:
	virtual class UWorld* GetWorld() const override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& propertyChangedEvent) override;
#endif

public:

	UItem();

	UPROPERTY(Transient)
		class UWorld* world;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		class UStaticMesh* pickupMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		class UTexture2D* thumbnail;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		FText itemDisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item", meta = (MultiLine = true))
		FText itemDesciption;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		FText useActionText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		EItemRearity rearity;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item", meta = (ClampMin = 0))
		float weight;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		bool bStackable;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item", meta = (ClampMin = 2, EditCondition = bStackable))
		int32 maxStackSize;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
		TSubclassOf<class UItemTooltip> itemTooltip;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item", meta = (UIMin = 1, EditCondition = bStackable))
		int32 quantity;

	UPROPERTY(BlueprintAssignable)
		FOnItemModified OnItemModified;

	UPROPERTY()
		class UInventoryComponent* owningInventory;

	UFUNCTION(BlueprintCallable, Category = "Item")
		void SetQuantity(const int32 newQuantity);

	UFUNCTION(BlueprintCallable, Category = "Item")
		FORCEINLINE int32 GetQuantity() const
	{
		return quantity;
	}

	UFUNCTION(BlueprintCallable, Category = "Item")
		FORCEINLINE float GetStackWeight() const
	{
		return quantity * weight;
	}

	UFUNCTION(BlueprintPure, Category = "Item")
		virtual bool ShouldShowInInventory() const;

	UFUNCTION(BlueprintImplementableEvent)
		void OnUse(class ASurvivalGameCharacter* character);

	virtual void Use(class ASurvivalGameCharacter* character);
	virtual void AddedToInventory(class UInventoryComponent* inventory);

};
