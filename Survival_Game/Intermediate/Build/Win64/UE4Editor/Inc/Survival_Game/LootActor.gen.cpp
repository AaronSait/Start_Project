// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/World/LootActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootActor() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ALootActor_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ALootActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvivalGameCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
	DEFINE_FUNCTION(ALootActor::execOnInteract)
	{
		P_GET_OBJECT(ASurvivalGameCharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteract(Z_Param_character);
		P_NATIVE_END;
	}
	void ALootActor::StaticRegisterNativesALootActor()
	{
		UClass* Class = ALootActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInteract", &ALootActor::execOnInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALootActor_OnInteract_Statics
	{
		struct LootActor_eventOnInteract_Parms
		{
			ASurvivalGameCharacter* character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALootActor_OnInteract_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LootActor_eventOnInteract_Parms, character), Z_Construct_UClass_ASurvivalGameCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALootActor_OnInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALootActor_OnInteract_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALootActor_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "World/LootActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALootActor_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALootActor, nullptr, "OnInteract", nullptr, nullptr, sizeof(LootActor_eventOnInteract_Parms), Z_Construct_UFunction_ALootActor_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALootActor_OnInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALootActor_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALootActor_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALootActor_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALootActor_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALootActor_NoRegister()
	{
		return ALootActor::StaticClass();
	}
	struct Z_Construct_UClass_ALootActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lootContainerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lootContainerMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lootInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lootInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lootTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lootTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lootRolls_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lootRolls;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALootActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALootActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALootActor_OnInteract, "OnInteract" }, // 2859400864
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "World/LootActor.h" },
		{ "ModuleRelativePath", "World/LootActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootActor_Statics::NewProp_lootContainerMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "World/LootActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALootActor_Statics::NewProp_lootContainerMesh = { "lootContainerMesh", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALootActor, lootContainerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALootActor_Statics::NewProp_lootContainerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootActor_Statics::NewProp_lootContainerMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootActor_Statics::NewProp_lootInteraction_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "World/LootActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALootActor_Statics::NewProp_lootInteraction = { "lootInteraction", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALootActor, lootInteraction), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALootActor_Statics::NewProp_lootInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootActor_Statics::NewProp_lootInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootActor_Statics::NewProp_inventory_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "World/LootActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALootActor_Statics::NewProp_inventory = { "inventory", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALootActor, inventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALootActor_Statics::NewProp_inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootActor_Statics::NewProp_inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootActor_Statics::NewProp_lootTable_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "World/LootActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALootActor_Statics::NewProp_lootTable = { "lootTable", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALootActor, lootTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALootActor_Statics::NewProp_lootTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootActor_Statics::NewProp_lootTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootActor_Statics::NewProp_lootRolls_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "World/LootActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALootActor_Statics::NewProp_lootRolls = { "lootRolls", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALootActor, lootRolls), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_ALootActor_Statics::NewProp_lootRolls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootActor_Statics::NewProp_lootRolls_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALootActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootActor_Statics::NewProp_lootContainerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootActor_Statics::NewProp_lootInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootActor_Statics::NewProp_inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootActor_Statics::NewProp_lootTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootActor_Statics::NewProp_lootRolls,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALootActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALootActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALootActor_Statics::ClassParams = {
		&ALootActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALootActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALootActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALootActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALootActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALootActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALootActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALootActor, 2238510157);
	template<> SURVIVAL_GAME_API UClass* StaticClass<ALootActor>()
	{
		return ALootActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALootActor(Z_Construct_UClass_ALootActor, &ALootActor::StaticClass, TEXT("/Script/Survival_Game"), TEXT("ALootActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALootActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
