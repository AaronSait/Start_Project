// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/World/LootSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootSpawner() {}
// Cross Module References
	SURVIVAL_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FLootTableRow();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItem_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ALootSpawner_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ALootSpawner();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_APickup_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References

static_assert(std::is_polymorphic<FLootTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FLootTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FLootTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SURVIVAL_GAME_API uint32 Get_Z_Construct_UScriptStruct_FLootTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootTableRow, Z_Construct_UPackage__Script_Survival_Game(), TEXT("LootTableRow"), sizeof(FLootTableRow), Get_Z_Construct_UScriptStruct_FLootTableRow_Hash());
	}
	return Singleton;
}
template<> SURVIVAL_GAME_API UScriptStruct* StaticStruct<FLootTableRow>()
{
	return FLootTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLootTableRow(FLootTableRow::StaticStruct, TEXT("/Script/Survival_Game"), TEXT("LootTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_Survival_Game_StaticRegisterNativesFLootTableRow
{
	FScriptStruct_Survival_Game_StaticRegisterNativesFLootTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LootTableRow")),new UScriptStruct::TCppStructOps<FLootTableRow>);
	}
} ScriptStruct_Survival_Game_StaticRegisterNativesFLootTableRow;
	struct Z_Construct_UScriptStruct_FLootTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_items;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_probability_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_probability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootTableRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "World/LootSpawner.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootTableRow>();
	}
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_items_Inner = { "items", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_items_MetaData[] = {
		{ "Category", "Loot" },
		{ "ModuleRelativePath", "World/LootSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_items = { "items", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLootTableRow, items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_items_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_probability_MetaData[] = {
		{ "Category", "Loot" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.001000" },
		{ "ModuleRelativePath", "World/LootSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_probability = { "probability", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLootTableRow, probability), METADATA_PARAMS(Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_probability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_probability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_probability,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"LootTableRow",
		sizeof(FLootTableRow),
		alignof(FLootTableRow),
		Z_Construct_UScriptStruct_FLootTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLootTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLootTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLootTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Survival_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LootTableRow"), sizeof(FLootTableRow), Get_Z_Construct_UScriptStruct_FLootTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLootTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLootTableRow_Hash() { return 492798141U; }
	DEFINE_FUNCTION(ALootSpawner::execOmnItemTaken)
	{
		P_GET_OBJECT(AActor,Z_Param_destroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OmnItemTaken(Z_Param_destroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALootSpawner::execSpawnItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnItem();
		P_NATIVE_END;
	}
	void ALootSpawner::StaticRegisterNativesALootSpawner()
	{
		UClass* Class = ALootSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OmnItemTaken", &ALootSpawner::execOmnItemTaken },
			{ "SpawnItem", &ALootSpawner::execSpawnItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALootSpawner_OmnItemTaken_Statics
	{
		struct LootSpawner_eventOmnItemTaken_Parms
		{
			AActor* destroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_destroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALootSpawner_OmnItemTaken_Statics::NewProp_destroyedActor = { "destroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LootSpawner_eventOmnItemTaken_Parms, destroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALootSpawner_OmnItemTaken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALootSpawner_OmnItemTaken_Statics::NewProp_destroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALootSpawner_OmnItemTaken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "World/LootSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALootSpawner_OmnItemTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALootSpawner, nullptr, "OmnItemTaken", nullptr, nullptr, sizeof(LootSpawner_eventOmnItemTaken_Parms), Z_Construct_UFunction_ALootSpawner_OmnItemTaken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALootSpawner_OmnItemTaken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALootSpawner_OmnItemTaken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALootSpawner_OmnItemTaken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALootSpawner_OmnItemTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALootSpawner_OmnItemTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALootSpawner_SpawnItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALootSpawner_SpawnItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "World/LootSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALootSpawner_SpawnItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALootSpawner, nullptr, "SpawnItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALootSpawner_SpawnItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALootSpawner_SpawnItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALootSpawner_SpawnItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALootSpawner_SpawnItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALootSpawner_NoRegister()
	{
		return ALootSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ALootSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lootTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lootTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickupClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_pickupClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_respawnInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_respawnInterval;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spawnedPickups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnedPickups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_spawnedPickups;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALootSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATargetPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALootSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALootSpawner_OmnItemTaken, "OmnItemTaken" }, // 1227000783
		{ &Z_Construct_UFunction_ALootSpawner_SpawnItem, "SpawnItem" }, // 2226515242
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "World/LootSpawner.h" },
		{ "ModuleRelativePath", "World/LootSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootSpawner_Statics::NewProp_lootTable_MetaData[] = {
		{ "Category", "Loot" },
		{ "ModuleRelativePath", "World/LootSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALootSpawner_Statics::NewProp_lootTable = { "lootTable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALootSpawner, lootTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALootSpawner_Statics::NewProp_lootTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootSpawner_Statics::NewProp_lootTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootSpawner_Statics::NewProp_pickupClass_MetaData[] = {
		{ "Category", "Loot" },
		{ "ModuleRelativePath", "World/LootSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALootSpawner_Statics::NewProp_pickupClass = { "pickupClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALootSpawner, pickupClass), Z_Construct_UClass_APickup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALootSpawner_Statics::NewProp_pickupClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootSpawner_Statics::NewProp_pickupClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootSpawner_Statics::NewProp_respawnInterval_MetaData[] = {
		{ "Category", "Loot" },
		{ "ModuleRelativePath", "World/LootSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALootSpawner_Statics::NewProp_respawnInterval = { "respawnInterval", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALootSpawner, respawnInterval), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_ALootSpawner_Statics::NewProp_respawnInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootSpawner_Statics::NewProp_respawnInterval_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALootSpawner_Statics::NewProp_spawnedPickups_Inner = { "spawnedPickups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootSpawner_Statics::NewProp_spawnedPickups_MetaData[] = {
		{ "ModuleRelativePath", "World/LootSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALootSpawner_Statics::NewProp_spawnedPickups = { "spawnedPickups", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALootSpawner, spawnedPickups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALootSpawner_Statics::NewProp_spawnedPickups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootSpawner_Statics::NewProp_spawnedPickups_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALootSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootSpawner_Statics::NewProp_lootTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootSpawner_Statics::NewProp_pickupClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootSpawner_Statics::NewProp_respawnInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootSpawner_Statics::NewProp_spawnedPickups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootSpawner_Statics::NewProp_spawnedPickups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALootSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALootSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALootSpawner_Statics::ClassParams = {
		&ALootSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALootSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALootSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALootSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALootSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALootSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALootSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALootSpawner, 2388976768);
	template<> SURVIVAL_GAME_API UClass* StaticClass<ALootSpawner>()
	{
		return ALootSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALootSpawner(Z_Construct_UClass_ALootSpawner, &ALootSpawner::StaticClass, TEXT("/Script/Survival_Game"), TEXT("ALootSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALootSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
