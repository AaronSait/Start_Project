// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Components/InventoryComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}
// Cross Module References
	SURVIVAL_GAME_API UFunction* Z_Construct_UDelegateFunction_Survival_Game_OnInventoryUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
	SURVIVAL_GAME_API UEnum* Z_Construct_UEnum_Survival_Game_EItemAddResult();
	SURVIVAL_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemAddResult();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UInventoryComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Survival_Game_OnInventoryUpdated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Survival_Game_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Survival_Game_OnInventoryUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Survival_Game, nullptr, "OnInventoryUpdated__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Survival_Game_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Survival_Game_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Survival_Game_OnInventoryUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Survival_Game_OnInventoryUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EItemAddResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Survival_Game_EItemAddResult, Z_Construct_UPackage__Script_Survival_Game(), TEXT("EItemAddResult"));
		}
		return Singleton;
	}
	template<> SURVIVAL_GAME_API UEnum* StaticEnum<EItemAddResult>()
	{
		return EItemAddResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemAddResult(EItemAddResult_StaticEnum, TEXT("/Script/Survival_Game"), TEXT("EItemAddResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Survival_Game_EItemAddResult_Hash() { return 3743402669U; }
	UEnum* Z_Construct_UEnum_Survival_Game_EItemAddResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Survival_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemAddResult"), 0, Get_Z_Construct_UEnum_Survival_Game_EItemAddResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemAddResult::IAR_NoItemsAdded", (int64)EItemAddResult::IAR_NoItemsAdded },
				{ "EItemAddResult::IAR_SomeItemsAdded", (int64)EItemAddResult::IAR_SomeItemsAdded },
				{ "EItemAddResult::IAR_AllItemsAdded", (int64)EItemAddResult::IAR_AllItemsAdded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IAR_AllItemsAdded.\"All Items Added\"", "" },
				{ "IAR_AllItemsAdded.DisplayName", "" },
				{ "IAR_AllItemsAdded.Name", "EItemAddResult::IAR_AllItemsAdded" },
				{ "IAR_NoItemsAdded.\"No Items Added\"", "" },
				{ "IAR_NoItemsAdded.DisplayName", "" },
				{ "IAR_NoItemsAdded.Name", "EItemAddResult::IAR_NoItemsAdded" },
				{ "IAR_SomeItemsAdded.\"Some Items Added\"", "" },
				{ "IAR_SomeItemsAdded.DisplayName", "" },
				{ "IAR_SomeItemsAdded.Name", "EItemAddResult::IAR_SomeItemsAdded" },
				{ "ModuleRelativePath", "Components/InventoryComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Survival_Game,
				nullptr,
				"EItemAddResult",
				"EItemAddResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FItemAddResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SURVIVAL_GAME_API uint32 Get_Z_Construct_UScriptStruct_FItemAddResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemAddResult, Z_Construct_UPackage__Script_Survival_Game(), TEXT("ItemAddResult"), sizeof(FItemAddResult), Get_Z_Construct_UScriptStruct_FItemAddResult_Hash());
	}
	return Singleton;
}
template<> SURVIVAL_GAME_API UScriptStruct* StaticStruct<FItemAddResult>()
{
	return FItemAddResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemAddResult(FItemAddResult::StaticStruct, TEXT("/Script/Survival_Game"), TEXT("ItemAddResult"), false, nullptr, nullptr);
static struct FScriptStruct_Survival_Game_StaticRegisterNativesFItemAddResult
{
	FScriptStruct_Survival_Game_StaticRegisterNativesFItemAddResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemAddResult")),new UScriptStruct::TCppStructOps<FItemAddResult>);
	}
} ScriptStruct_Survival_Game_StaticRegisterNativesFItemAddResult;
	struct Z_Construct_UScriptStruct_FItemAddResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_amountToGive_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_amountToGive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actualAmountGiven_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_actualAmountGiven;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errorText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_errorText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemAddResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemAddResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_amountToGive_MetaData[] = {
		{ "Category", "Item Add Result" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_amountToGive = { "amountToGive", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemAddResult, amountToGive), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_amountToGive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_amountToGive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_actualAmountGiven_MetaData[] = {
		{ "Category", "Item Add Result" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_actualAmountGiven = { "actualAmountGiven", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemAddResult, actualAmountGiven), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_actualAmountGiven_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_actualAmountGiven_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_result_MetaData[] = {
		{ "Category", "Item Add Result" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemAddResult, result), Z_Construct_UEnum_Survival_Game_EItemAddResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_errorText_MetaData[] = {
		{ "Category", "Item Add Result" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_errorText = { "errorText", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemAddResult, errorText), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_errorText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_errorText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemAddResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_amountToGive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_actualAmountGiven,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_errorText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemAddResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
		nullptr,
		&NewStructOps,
		"ItemAddResult",
		sizeof(FItemAddResult),
		alignof(FItemAddResult),
		Z_Construct_UScriptStruct_FItemAddResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAddResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemAddResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemAddResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Survival_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemAddResult"), sizeof(FItemAddResult), Get_Z_Construct_UScriptStruct_FItemAddResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemAddResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemAddResult_Hash() { return 1596989576U; }
	DEFINE_FUNCTION(UInventoryComponent::execRefreshInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UItem*>*)Z_Param__Result=P_THIS->GetItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetCapacity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCapacity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetWeightCapacity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWeightCapacity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execSetCapacity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newCapacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCapacity(Z_Param_newCapacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execSetWeightCapacity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newWeightCapacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeightCapacity(Z_Param_newWeightCapacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetCurrentWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execFindItemsByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_itemClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UItem*>*)Z_Param__Result=P_THIS->FindItemsByClass(Z_Param_itemClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execFindItemByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_itemClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UItem**)Z_Param__Result=P_THIS->FindItemByClass(Z_Param_itemClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execFindItem)
	{
		P_GET_OBJECT(UItem,Z_Param_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UItem**)Z_Param__Result=P_THIS->FindItem(Z_Param_item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execHasItem)
	{
		P_GET_OBJECT(UClass,Z_Param_itemClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasItem(Z_Param_itemClass,Z_Param_quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execRemoveItem)
	{
		P_GET_OBJECT(UItem,Z_Param_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveItem(Z_Param_item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execTryAddItemFromClass)
	{
		P_GET_OBJECT(UClass,Z_Param_itemClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FItemAddResult*)Z_Param__Result=P_THIS->TryAddItemFromClass(Z_Param_itemClass,Z_Param_quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execTryAddItem)
	{
		P_GET_OBJECT(UItem,Z_Param_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FItemAddResult*)Z_Param__Result=P_THIS->TryAddItem(Z_Param_item);
		P_NATIVE_END;
	}
	void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
	{
		UClass* Class = UInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindItem", &UInventoryComponent::execFindItem },
			{ "FindItemByClass", &UInventoryComponent::execFindItemByClass },
			{ "FindItemsByClass", &UInventoryComponent::execFindItemsByClass },
			{ "GetCapacity", &UInventoryComponent::execGetCapacity },
			{ "GetCurrentWeight", &UInventoryComponent::execGetCurrentWeight },
			{ "GetItems", &UInventoryComponent::execGetItems },
			{ "GetWeightCapacity", &UInventoryComponent::execGetWeightCapacity },
			{ "HasItem", &UInventoryComponent::execHasItem },
			{ "RefreshInventory", &UInventoryComponent::execRefreshInventory },
			{ "RemoveItem", &UInventoryComponent::execRemoveItem },
			{ "SetCapacity", &UInventoryComponent::execSetCapacity },
			{ "SetWeightCapacity", &UInventoryComponent::execSetWeightCapacity },
			{ "TryAddItem", &UInventoryComponent::execTryAddItem },
			{ "TryAddItemFromClass", &UInventoryComponent::execTryAddItemFromClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryComponent_FindItem_Statics
	{
		struct InventoryComponent_eventFindItem_Parms
		{
			UItem* item;
			UItem* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::NewProp_item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventFindItem_Parms, item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::NewProp_item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventFindItem_Parms, ReturnValue), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "FindItem", nullptr, nullptr, sizeof(InventoryComponent_eventFindItem_Parms), Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_FindItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_FindItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_FindItemByClass_Statics
	{
		struct InventoryComponent_eventFindItemByClass_Parms
		{
			TSubclassOf<UItem>  itemClass;
			UItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_FindItemByClass_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventFindItemByClass_Parms, itemClass), Z_Construct_UClass_UItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_FindItemByClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_FindItemByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventFindItemByClass_Parms, ReturnValue), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_FindItemByClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindItemByClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_FindItemByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindItemByClass_Statics::NewProp_itemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindItemByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_FindItemByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_FindItemByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "FindItemByClass", nullptr, nullptr, sizeof(InventoryComponent_eventFindItemByClass_Parms), Z_Construct_UFunction_UInventoryComponent_FindItemByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindItemByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_FindItemByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindItemByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_FindItemByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_FindItemByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_FindItemsByClass_Statics
	{
		struct InventoryComponent_eventFindItemsByClass_Parms
		{
			TSubclassOf<UItem>  itemClass;
			TArray<UItem*> ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_FindItemsByClass_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventFindItemsByClass_Parms, itemClass), Z_Construct_UClass_UItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_FindItemsByClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_FindItemsByClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComponent_FindItemsByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventFindItemsByClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_FindItemsByClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindItemsByClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_FindItemsByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindItemsByClass_Statics::NewProp_itemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindItemsByClass_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindItemsByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_FindItemsByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_FindItemsByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "FindItemsByClass", nullptr, nullptr, sizeof(InventoryComponent_eventFindItemsByClass_Parms), Z_Construct_UFunction_UInventoryComponent_FindItemsByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindItemsByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_FindItemsByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindItemsByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_FindItemsByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_FindItemsByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetCapacity_Statics
	{
		struct InventoryComponent_eventGetCapacity_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetCapacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventGetCapacity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetCapacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetCapacity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetCapacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetCapacity", nullptr, nullptr, sizeof(InventoryComponent_eventGetCapacity_Parms), Z_Construct_UFunction_UInventoryComponent_GetCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCapacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_GetCapacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCapacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetCurrentWeight_Statics
	{
		struct InventoryComponent_eventGetCurrentWeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventGetCurrentWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetCurrentWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetCurrentWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetCurrentWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetCurrentWeight", nullptr, nullptr, sizeof(InventoryComponent_eventGetCurrentWeight_Parms), Z_Construct_UFunction_UInventoryComponent_GetCurrentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetCurrentWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetCurrentWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetItems_Statics
	{
		struct InventoryComponent_eventGetItems_Parms
		{
			TArray<UItem*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventGetItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetItems", nullptr, nullptr, sizeof(InventoryComponent_eventGetItems_Parms), Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics
	{
		struct InventoryComponent_eventGetWeightCapacity_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventGetWeightCapacity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetWeightCapacity", nullptr, nullptr, sizeof(InventoryComponent_eventGetWeightCapacity_Parms), Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_HasItem_Statics
	{
		struct InventoryComponent_eventHasItem_Parms
		{
			TSubclassOf<UItem>  itemClass;
			int32 quantity;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_quantity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventHasItem_Parms, itemClass), Z_Construct_UClass_UItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventHasItem_Parms, quantity), METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_quantity_MetaData)) };
	void Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InventoryComponent_eventHasItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InventoryComponent_eventHasItem_Parms), &Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_itemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_quantity", "1" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "HasItem", nullptr, nullptr, sizeof(InventoryComponent_eventHasItem_Parms), Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_HasItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_RefreshInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_RefreshInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RefreshInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RefreshInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_RefreshInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RefreshInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_RefreshInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RefreshInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics
	{
		struct InventoryComponent_eventRemoveItem_Parms
		{
			UItem* item;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItem_Parms, item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_item_MetaData)) };
	void Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InventoryComponent_eventRemoveItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InventoryComponent_eventRemoveItem_Parms), &Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveItem", nullptr, nullptr, sizeof(InventoryComponent_eventRemoveItem_Parms), Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_SetCapacity_Statics
	{
		struct InventoryComponent_eventSetCapacity_Parms
		{
			int32 newCapacity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newCapacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_SetCapacity_Statics::NewProp_newCapacity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SetCapacity_Statics::NewProp_newCapacity = { "newCapacity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventSetCapacity_Parms, newCapacity), METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_SetCapacity_Statics::NewProp_newCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetCapacity_Statics::NewProp_newCapacity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SetCapacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SetCapacity_Statics::NewProp_newCapacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_SetCapacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SetCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SetCapacity", nullptr, nullptr, sizeof(InventoryComponent_eventSetCapacity_Parms), Z_Construct_UFunction_UInventoryComponent_SetCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetCapacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_SetCapacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetCapacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_SetCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SetCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics
	{
		struct InventoryComponent_eventSetWeightCapacity_Parms
		{
			float newWeightCapacity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newWeightCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newWeightCapacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::NewProp_newWeightCapacity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::NewProp_newWeightCapacity = { "newWeightCapacity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventSetWeightCapacity_Parms, newWeightCapacity), METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::NewProp_newWeightCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::NewProp_newWeightCapacity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::NewProp_newWeightCapacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SetWeightCapacity", nullptr, nullptr, sizeof(InventoryComponent_eventSetWeightCapacity_Parms), Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_TryAddItem_Statics
	{
		struct InventoryComponent_eventTryAddItem_Parms
		{
			UItem* item;
			FItemAddResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_TryAddItem_Statics::NewProp_item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_TryAddItem_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventTryAddItem_Parms, item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_TryAddItem_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TryAddItem_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_TryAddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventTryAddItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemAddResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_TryAddItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TryAddItem_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TryAddItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_TryAddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_TryAddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "TryAddItem", nullptr, nullptr, sizeof(InventoryComponent_eventTryAddItem_Parms), Z_Construct_UFunction_UInventoryComponent_TryAddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TryAddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_TryAddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TryAddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_TryAddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_TryAddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass_Statics
	{
		struct InventoryComponent_eventTryAddItemFromClass_Parms
		{
			TSubclassOf<UItem>  itemClass;
			int32 quantity;
			FItemAddResult ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_quantity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass_Statics::NewProp_itemClass = { "itemClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventTryAddItemFromClass_Parms, itemClass), Z_Construct_UClass_UItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass_Statics::NewProp_quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventTryAddItemFromClass_Parms, quantity), METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass_Statics::NewProp_quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass_Statics::NewProp_quantity_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventTryAddItemFromClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemAddResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass_Statics::NewProp_itemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "TryAddItemFromClass", nullptr, nullptr, sizeof(InventoryComponent_eventTryAddItemFromClass_Parms), Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
	{
		return UInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInventoryUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weightCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_weightCapacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_capacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_capacity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_items;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_FindItem, "FindItem" }, // 128854986
		{ &Z_Construct_UFunction_UInventoryComponent_FindItemByClass, "FindItemByClass" }, // 1564569229
		{ &Z_Construct_UFunction_UInventoryComponent_FindItemsByClass, "FindItemsByClass" }, // 2701348886
		{ &Z_Construct_UFunction_UInventoryComponent_GetCapacity, "GetCapacity" }, // 2092150945
		{ &Z_Construct_UFunction_UInventoryComponent_GetCurrentWeight, "GetCurrentWeight" }, // 846763214
		{ &Z_Construct_UFunction_UInventoryComponent_GetItems, "GetItems" }, // 4042299947
		{ &Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity, "GetWeightCapacity" }, // 2814593953
		{ &Z_Construct_UFunction_UInventoryComponent_HasItem, "HasItem" }, // 1716118878
		{ &Z_Construct_UFunction_UInventoryComponent_RefreshInventory, "RefreshInventory" }, // 3499907928
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveItem, "RemoveItem" }, // 1629418761
		{ &Z_Construct_UFunction_UInventoryComponent_SetCapacity, "SetCapacity" }, // 722727813
		{ &Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity, "SetWeightCapacity" }, // 205541961
		{ &Z_Construct_UFunction_UInventoryComponent_TryAddItem, "TryAddItem" }, // 590032367
		{ &Z_Construct_UFunction_UInventoryComponent_TryAddItemFromClass, "TryAddItemFromClass" }, // 3488303734
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/InventoryComponent.h" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdated_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdated = { "OnInventoryUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, OnInventoryUpdated), Z_Construct_UDelegateFunction_Survival_Game_OnInventoryUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_weightCapacity_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_weightCapacity = { "weightCapacity", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, weightCapacity), METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_weightCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_weightCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_capacity_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ClampMax", "200" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_capacity = { "capacity", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, capacity), METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_capacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_capacity_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_items_Inner = { "items", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_items_MetaData[] = {
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_items = { "items", nullptr, (EPropertyFlags)0x0020088000020009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_items_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_items_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_weightCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_capacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_items,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
		&UInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryComponent, 1600288115);
	template<> SURVIVAL_GAME_API UClass* StaticClass<UInventoryComponent>()
	{
		return UInventoryComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryComponent(Z_Construct_UClass_UInventoryComponent, &UInventoryComponent::StaticClass, TEXT("/Script/Survival_Game"), TEXT("UInventoryComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
