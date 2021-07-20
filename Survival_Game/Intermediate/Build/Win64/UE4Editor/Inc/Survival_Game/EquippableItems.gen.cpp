// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Items/EquippableItems.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquippableItems() {}
// Cross Module References
	SURVIVAL_GAME_API UEnum* Z_Construct_UEnum_Survival_Game_EEquippableSlot();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UEquippableItems_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UEquippableItems();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItem();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvivalGameCharacter_NoRegister();
// End Cross Module References
	static UEnum* EEquippableSlot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Survival_Game_EEquippableSlot, Z_Construct_UPackage__Script_Survival_Game(), TEXT("EEquippableSlot"));
		}
		return Singleton;
	}
	template<> SURVIVAL_GAME_API UEnum* StaticEnum<EEquippableSlot>()
	{
		return EEquippableSlot_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEquippableSlot(EEquippableSlot_StaticEnum, TEXT("/Script/Survival_Game"), TEXT("EEquippableSlot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Survival_Game_EEquippableSlot_Hash() { return 1869658183U; }
	UEnum* Z_Construct_UEnum_Survival_Game_EEquippableSlot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Survival_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEquippableSlot"), 0, Get_Z_Construct_UEnum_Survival_Game_EEquippableSlot_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEquippableSlot::EIS_Head", (int64)EEquippableSlot::EIS_Head },
				{ "EEquippableSlot::EIS_Helmet", (int64)EEquippableSlot::EIS_Helmet },
				{ "EEquippableSlot::EIS_Chest", (int64)EEquippableSlot::EIS_Chest },
				{ "EEquippableSlot::EIS_Vest", (int64)EEquippableSlot::EIS_Vest },
				{ "EEquippableSlot::EIS_Legs", (int64)EEquippableSlot::EIS_Legs },
				{ "EEquippableSlot::EIS_Feet", (int64)EEquippableSlot::EIS_Feet },
				{ "EEquippableSlot::EIS_Hands", (int64)EEquippableSlot::EIS_Hands },
				{ "EEquippableSlot::EIS_Backpack", (int64)EEquippableSlot::EIS_Backpack },
				{ "EEquippableSlot::EIS_PrimaryWeapon", (int64)EEquippableSlot::EIS_PrimaryWeapon },
				{ "EEquippableSlot::EIS_Throwable", (int64)EEquippableSlot::EIS_Throwable },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "EIS_Backpack.Comment", "/**\n * \n */" },
				{ "EIS_Backpack.DisplayName", "Backpack" },
				{ "EIS_Backpack.Name", "EEquippableSlot::EIS_Backpack" },
				{ "EIS_Chest.Comment", "/**\n * \n */" },
				{ "EIS_Chest.DisplayName", "Chest" },
				{ "EIS_Chest.Name", "EEquippableSlot::EIS_Chest" },
				{ "EIS_Feet.Comment", "/**\n * \n */" },
				{ "EIS_Feet.DisplayName", "Feet" },
				{ "EIS_Feet.Name", "EEquippableSlot::EIS_Feet" },
				{ "EIS_Hands.Comment", "/**\n * \n */" },
				{ "EIS_Hands.DisplayName", "Hands" },
				{ "EIS_Hands.Name", "EEquippableSlot::EIS_Hands" },
				{ "EIS_Head.Comment", "/**\n * \n */" },
				{ "EIS_Head.DisplayName", "Head" },
				{ "EIS_Head.Name", "EEquippableSlot::EIS_Head" },
				{ "EIS_Helmet.Comment", "/**\n * \n */" },
				{ "EIS_Helmet.DisplayName", "Helmet" },
				{ "EIS_Helmet.Name", "EEquippableSlot::EIS_Helmet" },
				{ "EIS_Legs.Comment", "/**\n * \n */" },
				{ "EIS_Legs.DisplayName", "Legs" },
				{ "EIS_Legs.Name", "EEquippableSlot::EIS_Legs" },
				{ "EIS_PrimaryWeapon.Comment", "/**\n * \n */" },
				{ "EIS_PrimaryWeapon.DisplayName", "Primary Weapon" },
				{ "EIS_PrimaryWeapon.Name", "EEquippableSlot::EIS_PrimaryWeapon" },
				{ "EIS_Throwable.Comment", "/**\n * \n */" },
				{ "EIS_Throwable.DisplayName", "Throwable Item" },
				{ "EIS_Throwable.Name", "EEquippableSlot::EIS_Throwable" },
				{ "EIS_Vest.Comment", "/**\n * \n */" },
				{ "EIS_Vest.DisplayName", "Vest" },
				{ "EIS_Vest.Name", "EEquippableSlot::EIS_Vest" },
				{ "ModuleRelativePath", "Items/EquippableItems.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Survival_Game,
				nullptr,
				"EEquippableSlot",
				"EEquippableSlot",
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
	DEFINE_FUNCTION(UEquippableItems::execEquipStatusChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipStatusChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquippableItems::execIsEquipped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEquipped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquippableItems::execUnEquip)
	{
		P_GET_OBJECT(ASurvivalGameCharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnEquip(Z_Param_character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquippableItems::execEquip)
	{
		P_GET_OBJECT(ASurvivalGameCharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Equip(Z_Param_character);
		P_NATIVE_END;
	}
	void UEquippableItems::StaticRegisterNativesUEquippableItems()
	{
		UClass* Class = UEquippableItems::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Equip", &UEquippableItems::execEquip },
			{ "EquipStatusChanged", &UEquippableItems::execEquipStatusChanged },
			{ "IsEquipped", &UEquippableItems::execIsEquipped },
			{ "UnEquip", &UEquippableItems::execUnEquip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEquippableItems_Equip_Statics
	{
		struct EquippableItems_eventEquip_Parms
		{
			ASurvivalGameCharacter* character;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquippableItems_Equip_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquippableItems_eventEquip_Parms, character), Z_Construct_UClass_ASurvivalGameCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEquippableItems_Equip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EquippableItems_eventEquip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquippableItems_Equip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EquippableItems_eventEquip_Parms), &Z_Construct_UFunction_UEquippableItems_Equip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquippableItems_Equip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquippableItems_Equip_Statics::NewProp_character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquippableItems_Equip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippableItems_Equip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equippables" },
		{ "ModuleRelativePath", "Items/EquippableItems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquippableItems_Equip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquippableItems, nullptr, "Equip", nullptr, nullptr, sizeof(EquippableItems_eventEquip_Parms), Z_Construct_UFunction_UEquippableItems_Equip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippableItems_Equip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquippableItems_Equip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippableItems_Equip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquippableItems_Equip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquippableItems_Equip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquippableItems_EquipStatusChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippableItems_EquipStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Items/EquippableItems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquippableItems_EquipStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquippableItems, nullptr, "EquipStatusChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquippableItems_EquipStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippableItems_EquipStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquippableItems_EquipStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquippableItems_EquipStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquippableItems_IsEquipped_Statics
	{
		struct EquippableItems_eventIsEquipped_Parms
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
	void Z_Construct_UFunction_UEquippableItems_IsEquipped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EquippableItems_eventIsEquipped_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquippableItems_IsEquipped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EquippableItems_eventIsEquipped_Parms), &Z_Construct_UFunction_UEquippableItems_IsEquipped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquippableItems_IsEquipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquippableItems_IsEquipped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippableItems_IsEquipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equippales" },
		{ "ModuleRelativePath", "Items/EquippableItems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquippableItems_IsEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquippableItems, nullptr, "IsEquipped", nullptr, nullptr, sizeof(EquippableItems_eventIsEquipped_Parms), Z_Construct_UFunction_UEquippableItems_IsEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippableItems_IsEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquippableItems_IsEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippableItems_IsEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquippableItems_IsEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquippableItems_IsEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquippableItems_UnEquip_Statics
	{
		struct EquippableItems_eventUnEquip_Parms
		{
			ASurvivalGameCharacter* character;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquippableItems_UnEquip_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquippableItems_eventUnEquip_Parms, character), Z_Construct_UClass_ASurvivalGameCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEquippableItems_UnEquip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EquippableItems_eventUnEquip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquippableItems_UnEquip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EquippableItems_eventUnEquip_Parms), &Z_Construct_UFunction_UEquippableItems_UnEquip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquippableItems_UnEquip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquippableItems_UnEquip_Statics::NewProp_character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquippableItems_UnEquip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippableItems_UnEquip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equippables" },
		{ "ModuleRelativePath", "Items/EquippableItems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquippableItems_UnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquippableItems, nullptr, "UnEquip", nullptr, nullptr, sizeof(EquippableItems_eventUnEquip_Parms), Z_Construct_UFunction_UEquippableItems_UnEquip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippableItems_UnEquip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquippableItems_UnEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippableItems_UnEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquippableItems_UnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquippableItems_UnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEquippableItems_NoRegister()
	{
		return UEquippableItems::StaticClass();
	}
	struct Z_Construct_UClass_UEquippableItems_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEquipped_MetaData[];
#endif
		static void NewProp_bEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEquipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquippableItems_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEquippableItems_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquippableItems_Equip, "Equip" }, // 1310493916
		{ &Z_Construct_UFunction_UEquippableItems_EquipStatusChanged, "EquipStatusChanged" }, // 1885036249
		{ &Z_Construct_UFunction_UEquippableItems_IsEquipped, "IsEquipped" }, // 385954742
		{ &Z_Construct_UFunction_UEquippableItems_UnEquip, "UnEquip" }, // 3043816749
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquippableItems_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/EquippableItems.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Items/EquippableItems.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEquippableItems_Statics::NewProp_slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquippableItems_Statics::NewProp_slot_MetaData[] = {
		{ "Category", "Equippables" },
		{ "ModuleRelativePath", "Items/EquippableItems.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEquippableItems_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquippableItems, slot), Z_Construct_UEnum_Survival_Game_EEquippableSlot, METADATA_PARAMS(Z_Construct_UClass_UEquippableItems_Statics::NewProp_slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquippableItems_Statics::NewProp_slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquippableItems_Statics::NewProp_bEquipped_MetaData[] = {
		{ "ModuleRelativePath", "Items/EquippableItems.h" },
	};
#endif
	void Z_Construct_UClass_UEquippableItems_Statics::NewProp_bEquipped_SetBit(void* Obj)
	{
		((UEquippableItems*)Obj)->bEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEquippableItems_Statics::NewProp_bEquipped = { "bEquipped", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEquippableItems), &Z_Construct_UClass_UEquippableItems_Statics::NewProp_bEquipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEquippableItems_Statics::NewProp_bEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquippableItems_Statics::NewProp_bEquipped_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquippableItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquippableItems_Statics::NewProp_slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquippableItems_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquippableItems_Statics::NewProp_bEquipped,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquippableItems_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquippableItems>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquippableItems_Statics::ClassParams = {
		&UEquippableItems::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEquippableItems_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquippableItems_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEquippableItems_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquippableItems_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquippableItems()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquippableItems_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquippableItems, 3479642706);
	template<> SURVIVAL_GAME_API UClass* StaticClass<UEquippableItems>()
	{
		return UEquippableItems::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquippableItems(Z_Construct_UClass_UEquippableItems, &UEquippableItems::StaticClass, TEXT("/Script/Survival_Game"), TEXT("UEquippableItems"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquippableItems);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
