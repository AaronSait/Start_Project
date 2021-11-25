// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Items/Item.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}
// Cross Module References
	SURVIVAL_GAME_API UFunction* Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
	SURVIVAL_GAME_API UEnum* Z_Construct_UEnum_Survival_Game_EItemRearity();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItem_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvivalGameCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItemtoolTip_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Survival_Game, nullptr, "OnItemModified__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EItemRearity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Survival_Game_EItemRearity, Z_Construct_UPackage__Script_Survival_Game(), TEXT("EItemRearity"));
		}
		return Singleton;
	}
	template<> SURVIVAL_GAME_API UEnum* StaticEnum<EItemRearity>()
	{
		return EItemRearity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemRearity(EItemRearity_StaticEnum, TEXT("/Script/Survival_Game"), TEXT("EItemRearity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Survival_Game_EItemRearity_Hash() { return 601555178U; }
	UEnum* Z_Construct_UEnum_Survival_Game_EItemRearity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Survival_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemRearity"), 0, Get_Z_Construct_UEnum_Survival_Game_EItemRearity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemRearity::IR_Common", (int64)EItemRearity::IR_Common },
				{ "EItemRearity::IR_Uncommon", (int64)EItemRearity::IR_Uncommon },
				{ "EItemRearity::IR_Rear", (int64)EItemRearity::IR_Rear },
				{ "EItemRearity::IR_VeryRear", (int64)EItemRearity::IR_VeryRear },
				{ "EItemRearity::IR_Legendary", (int64)EItemRearity::IR_Legendary },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IR_Common.DisplyName", "Common" },
				{ "IR_Common.Name", "EItemRearity::IR_Common" },
				{ "IR_Legendary.DisplyName", "Legendary" },
				{ "IR_Legendary.Name", "EItemRearity::IR_Legendary" },
				{ "IR_Rear.DisplyName", "Rear" },
				{ "IR_Rear.Name", "EItemRearity::IR_Rear" },
				{ "IR_Uncommon.DisplyName", "Uncommon" },
				{ "IR_Uncommon.Name", "EItemRearity::IR_Uncommon" },
				{ "IR_VeryRear.DisplyName", "VeryRear" },
				{ "IR_VeryRear.Name", "EItemRearity::IR_VeryRear" },
				{ "ModuleRelativePath", "Items/Item.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Survival_Game,
				nullptr,
				"EItemRearity",
				"EItemRearity",
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
	DEFINE_FUNCTION(UItem::execShouldShowInInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldShowInInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execGetStackWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStackWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execGetQuantity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetQuantity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItem::execSetQuantity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newQuantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQuantity(Z_Param_newQuantity);
		P_NATIVE_END;
	}
	static FName NAME_UItem_OnUse = FName(TEXT("OnUse"));
	void UItem::OnUse(ASurvivalGameCharacter* character)
	{
		Item_eventOnUse_Parms Parms;
		Parms.character=character;
		ProcessEvent(FindFunctionChecked(NAME_UItem_OnUse),&Parms);
	}
	void UItem::StaticRegisterNativesUItem()
	{
		UClass* Class = UItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetQuantity", &UItem::execGetQuantity },
			{ "GetStackWeight", &UItem::execGetStackWeight },
			{ "SetQuantity", &UItem::execSetQuantity },
			{ "ShouldShowInInventory", &UItem::execShouldShowInInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItem_GetQuantity_Statics
	{
		struct Item_eventGetQuantity_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItem_GetQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventGetQuantity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_GetQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_GetQuantity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_GetQuantity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_GetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "GetQuantity", nullptr, nullptr, sizeof(Item_eventGetQuantity_Parms), Z_Construct_UFunction_UItem_GetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItem_GetQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItem_GetQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItem_GetQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_GetStackWeight_Statics
	{
		struct Item_eventGetStackWeight_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItem_GetStackWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventGetStackWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_GetStackWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_GetStackWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_GetStackWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_GetStackWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "GetStackWeight", nullptr, nullptr, sizeof(Item_eventGetStackWeight_Parms), Z_Construct_UFunction_UItem_GetStackWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetStackWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItem_GetStackWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetStackWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItem_GetStackWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItem_GetStackWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_OnUse_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItem_OnUse_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventOnUse_Parms, character), Z_Construct_UClass_ASurvivalGameCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_OnUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_OnUse_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_OnUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_OnUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "OnUse", nullptr, nullptr, sizeof(Item_eventOnUse_Parms), Z_Construct_UFunction_UItem_OnUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_OnUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItem_OnUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_OnUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItem_OnUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItem_OnUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_SetQuantity_Statics
	{
		struct Item_eventSetQuantity_Parms
		{
			int32 newQuantity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newQuantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newQuantity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_SetQuantity_Statics::NewProp_newQuantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItem_SetQuantity_Statics::NewProp_newQuantity = { "newQuantity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSetQuantity_Parms, newQuantity), METADATA_PARAMS(Z_Construct_UFunction_UItem_SetQuantity_Statics::NewProp_newQuantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_SetQuantity_Statics::NewProp_newQuantity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_SetQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_SetQuantity_Statics::NewProp_newQuantity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_SetQuantity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_SetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "SetQuantity", nullptr, nullptr, sizeof(Item_eventSetQuantity_Parms), Z_Construct_UFunction_UItem_SetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_SetQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItem_SetQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_SetQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItem_SetQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItem_SetQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_ShouldShowInInventory_Statics
	{
		struct Item_eventShouldShowInInventory_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UItem_ShouldShowInInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Item_eventShouldShowInInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItem_ShouldShowInInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Item_eventShouldShowInInventory_Parms), &Z_Construct_UFunction_UItem_ShouldShowInInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_ShouldShowInInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_ShouldShowInInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_ShouldShowInInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_ShouldShowInInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "ShouldShowInInventory", nullptr, nullptr, sizeof(Item_eventShouldShowInInventory_Parms), Z_Construct_UFunction_UItem_ShouldShowInInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_ShouldShowInInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItem_ShouldShowInInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_ShouldShowInInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItem_ShouldShowInInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItem_ShouldShowInInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItem_NoRegister()
	{
		return UItem::StaticClass();
	}
	struct Z_Construct_UClass_UItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_world_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_world;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickupMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pickupMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_thumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_thumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_itemDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemDesciption_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_itemDesciption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_useActionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_useActionText;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rearity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rearity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_rearity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStackable_MetaData[];
#endif
		static void NewProp_bStackable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStackable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxStackSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxStackSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemTooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemTooltip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_quantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemModified_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemModified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_owningInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owningInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItem_GetQuantity, "GetQuantity" }, // 1432968032
		{ &Z_Construct_UFunction_UItem_GetStackWeight, "GetStackWeight" }, // 149222462
		{ &Z_Construct_UFunction_UItem_OnUse, "OnUse" }, // 101925301
		{ &Z_Construct_UFunction_UItem_SetQuantity, "SetQuantity" }, // 1997470799
		{ &Z_Construct_UFunction_UItem_ShouldShowInInventory, "ShouldShowInInventory" }, // 1151215324
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Items/Item.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_world_MetaData[] = {
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_world_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_world_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_pickupMesh_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_pickupMesh = { "pickupMesh", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, pickupMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_pickupMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_pickupMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_thumbnail_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_thumbnail = { "thumbnail", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_thumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_itemDisplayName_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_itemDisplayName = { "itemDisplayName", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, itemDisplayName), METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_itemDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_itemDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_itemDesciption_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Items/Item.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_itemDesciption = { "itemDesciption", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, itemDesciption), METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_itemDesciption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_itemDesciption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_useActionText_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_useActionText = { "useActionText", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, useActionText), METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_useActionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_useActionText_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UItem_Statics::NewProp_rearity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_rearity_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_rearity = { "rearity", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, rearity), Z_Construct_UEnum_Survival_Game_EItemRearity, METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_rearity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_rearity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_weight_MetaData[] = {
		{ "Category", "Item" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, weight), METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_bStackable_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	void Z_Construct_UClass_UItem_Statics::NewProp_bStackable_SetBit(void* Obj)
	{
		((UItem*)Obj)->bStackable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_bStackable = { "bStackable", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UItem), &Z_Construct_UClass_UItem_Statics::NewProp_bStackable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_bStackable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_bStackable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_maxStackSize_MetaData[] = {
		{ "Category", "Item" },
		{ "ClampMin", "2" },
		{ "EditCondition", "bStackable" },
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_maxStackSize = { "maxStackSize", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, maxStackSize), METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_maxStackSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_maxStackSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_itemTooltip_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_itemTooltip = { "itemTooltip", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, itemTooltip), Z_Construct_UClass_UItemtoolTip_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_itemTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_itemTooltip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_quantity_MetaData[] = {
		{ "Category", "Item" },
		{ "EditCondition", "bStackable" },
		{ "ModuleRelativePath", "Items/Item.h" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, quantity), METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_quantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_OnItemModified_MetaData[] = {
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItem_Statics::NewProp_OnItemModified = { "OnItemModified", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, OnItemModified), Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_OnItemModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_OnItemModified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_owningInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Items/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_owningInventory = { "owningInventory", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, owningInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_owningInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_owningInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_world,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_pickupMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_thumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_itemDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_itemDesciption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_useActionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_rearity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_rearity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_bStackable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_maxStackSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_itemTooltip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_OnItemModified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_owningInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItem_Statics::ClassParams = {
		&UItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItem, 2804988407);
	template<> SURVIVAL_GAME_API UClass* StaticClass<UItem>()
	{
		return UItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItem(Z_Construct_UClass_UItem, &UItem::StaticClass, TEXT("/Script/Survival_Game"), TEXT("UItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
