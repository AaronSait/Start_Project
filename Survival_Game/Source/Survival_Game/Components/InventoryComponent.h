// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdated);

UENUM(BlueprintType)
enum class EItemAddResult : uint8
{
	IAR_NoItemsAdded UMETA(DisplayName, "No Items Added"),
	IAR_SomeItemsAdded UMETA(DisplayName, "Some Items Added"),
	IAR_AllItemsAdded UMETA(DisplayName, "All Items Added"),
};

USTRUCT(BlueprintType)
struct FItemAddResult
{
	GENERATED_BODY()
public:

	FItemAddResult() {};
	FItemAddResult(int32 inItemQuantity) : amountToGive(inItemQuantity), actualAmountGiven(0) {};
	FItemAddResult(int32 inItemQuantity, int32 inItemQuantityAdded) : amountToGive(inItemQuantity), actualAmountGiven(inItemQuantityAdded) {};

	UPROPERTY(BlueprintReadOnly, Category = "Item Add Result")
		int32 amountToGive;

	UPROPERTY(BlueprintReadOnly, Category = "Item Add Result")
		int32 actualAmountGiven;

	UPROPERTY(BlueprintReadOnly, Category = "Item Add Result")
		EItemAddResult result;

	UPROPERTY(BlueprintReadOnly, Category = "Item Add Result")
		FText errorText;

	static FItemAddResult AddedNone(const int32 inItemQuantity, const FText& errorText)
	{
		FItemAddResult addedNoneResult(inItemQuantity);

		addedNoneResult.result = EItemAddResult::IAR_NoItemsAdded;
		addedNoneResult.errorText = errorText;

		return addedNoneResult;
	}

	static FItemAddResult AddedSome(const int32 inItemQuantity, const int32 actualAmountGiven, const FText& errorText)
	{
		FItemAddResult addedSomeResult(inItemQuantity, actualAmountGiven);

		addedSomeResult.result = EItemAddResult::IAR_SomeItemsAdded;
		addedSomeResult.errorText = errorText;

		return addedSomeResult;
	}
	static FItemAddResult AddedAll(const int32 inItemQuantity)
	{
		FItemAddResult addedAllResult(inItemQuantity, inItemQuantity);

		addedAllResult.result = EItemAddResult::IAR_AllItemsAdded;

		return addedAllResult;
	}

};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SURVIVAL_GAME_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

		friend class UItem;

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		FItemAddResult TryAddItem(class UItem* item);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		FItemAddResult TryAddItemFromClass(TSubclassOf<class UItem> itemClass, const int32 quantity);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		bool RemoveItem(class UItem* item);

	UFUNCTION(BlueprintPure, Category = "Inventory")
		bool HasItem(TSubclassOf<class UItem> itemClass, const int32 quantity = 1) const;

	UFUNCTION(BlueprintPure, Category = "Inventory")
		UItem* FindItem(class UItem* item)const;

	UFUNCTION(BlueprintPure, Category = "Inventory")
		UItem* FindItemByClass(TSubclassOf<class UItem> itemClass) const;

	UFUNCTION(BlueprintPure, Category = "Inventory")
		TArray<UItem*> FindItemsByClass(TSubclassOf<class UItem> itemClass) const;

	UFUNCTION(BlueprintPure, Category = "Inventory")
		float GetCurrentWeight()const;

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void SetWeightCapacity(const float newWeightCapacity);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void SetCapacity(const int32 newCapacity);

	UFUNCTION(BlueprintPure, Category = "Inventory")
		FORCEINLINE float GetWeightCapacity() const
		{
			return weightCapacity;
		}

	UFUNCTION(BlueprintPure, Category = "Inventory")
		FORCEINLINE int32 GetCapacity() const
		{
			return capacity;
		}

	UFUNCTION(BlueprintPure, Category = "Inventory")
		FORCEINLINE TArray<class UItem*> GetItems() const
		{
			return items;
		}

	UFUNCTION()
		void RefreshInventory();

	UPROPERTY(BlueprintAssignable, Category = "Inventory")
		FOnInventoryUpdated OnInventoryUpdated;

	int32 ConsumeItem(class UItem* item);
	int32 ConsumeItem(class UItem* item, const int32 quantity);
	UItem* AddItem(class UItem* item);

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory")
		float weightCapacity;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory", meta = (ClampMin = 0, ClampMax = 200))
		int32 capacity;

	UPROPERTY(VisibleAnywhere, Category = "Inventory")
		TArray<class UItem*>items;		
};
