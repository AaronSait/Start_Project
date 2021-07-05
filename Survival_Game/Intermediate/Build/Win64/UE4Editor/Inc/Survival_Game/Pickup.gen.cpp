// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/World/Pickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickup() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_APickup_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_APickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvivalGameCharacter_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APickup::execOnTakePickup)
	{
		P_GET_OBJECT(ASurvivalGameCharacter,Z_Param_taker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTakePickup(Z_Param_taker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickup::execOnItemModified)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemModified();
		P_NATIVE_END;
	}
	static FName NAME_APickup_AlignWithGround = FName(TEXT("AlignWithGround"));
	void APickup::AlignWithGround()
	{
		ProcessEvent(FindFunctionChecked(NAME_APickup_AlignWithGround),NULL);
	}
	void APickup::StaticRegisterNativesAPickup()
	{
		UClass* Class = APickup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnItemModified", &APickup::execOnItemModified },
			{ "OnTakePickup", &APickup::execOnTakePickup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickup_AlignWithGround_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_AlignWithGround_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "World/Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_AlignWithGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "AlignWithGround", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_AlignWithGround_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_AlignWithGround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_AlignWithGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_AlignWithGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_OnItemModified_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_OnItemModified_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "World/Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_OnItemModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "OnItemModified", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_OnItemModified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_OnItemModified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_OnItemModified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_OnItemModified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_OnTakePickup_Statics
	{
		struct Pickup_eventOnTakePickup_Parms
		{
			ASurvivalGameCharacter* taker;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_taker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickup_OnTakePickup_Statics::NewProp_taker = { "taker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pickup_eventOnTakePickup_Parms, taker), Z_Construct_UClass_ASurvivalGameCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_OnTakePickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_OnTakePickup_Statics::NewProp_taker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_OnTakePickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "World/Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_OnTakePickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "OnTakePickup", nullptr, nullptr, sizeof(Pickup_eventOnTakePickup_Parms), Z_Construct_UFunction_APickup_OnTakePickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_OnTakePickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_OnTakePickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_OnTakePickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_OnTakePickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_OnTakePickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickup_NoRegister()
	{
		return APickup::StaticClass();
	}
	struct Z_Construct_UClass_APickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_itemTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickupMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pickupMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickup_AlignWithGround, "AlignWithGround" }, // 2090194442
		{ &Z_Construct_UFunction_APickup_OnItemModified, "OnItemModified" }, // 1365182870
		{ &Z_Construct_UFunction_APickup_OnTakePickup, "OnTakePickup" }, // 735643443
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "World/Pickup.h" },
		{ "ModuleRelativePath", "World/Pickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_itemTemplate_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "World/Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_itemTemplate = { "itemTemplate", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickup, itemTemplate), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_itemTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_itemTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_item_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "World/Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickup, item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_pickupMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "World/Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_pickupMesh = { "pickupMesh", nullptr, (EPropertyFlags)0x002008000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickup, pickupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_pickupMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_pickupMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_interactionComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "World/Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_interactionComponent = { "interactionComponent", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickup, interactionComponent), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_interactionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_interactionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_itemTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_pickupMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_interactionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickup_Statics::ClassParams = {
		&APickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickup, 2796559724);
	template<> SURVIVAL_GAME_API UClass* StaticClass<APickup>()
	{
		return APickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickup(Z_Construct_UClass_APickup, &APickup::StaticClass, TEXT("/Script/Survival_Game"), TEXT("APickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
