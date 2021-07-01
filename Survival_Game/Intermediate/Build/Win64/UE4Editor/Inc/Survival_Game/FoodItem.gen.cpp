// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Items/FoodItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoodItem() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UFoodItem_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UFoodItem();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItem();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
// End Cross Module References
	void UFoodItem::StaticRegisterNativesUFoodItem()
	{
	}
	UClass* Z_Construct_UClass_UFoodItem_NoRegister()
	{
		return UFoodItem::StaticClass();
	}
	struct Z_Construct_UClass_UFoodItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoodItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoodItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/FoodItem.h" },
		{ "ModuleRelativePath", "Items/FoodItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoodItem_Statics::NewProp_healAmount_MetaData[] = {
		{ "Category", "Healing" },
		{ "ModuleRelativePath", "Items/FoodItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoodItem_Statics::NewProp_healAmount = { "healAmount", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoodItem, healAmount), METADATA_PARAMS(Z_Construct_UClass_UFoodItem_Statics::NewProp_healAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoodItem_Statics::NewProp_healAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoodItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoodItem_Statics::NewProp_healAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoodItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoodItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFoodItem_Statics::ClassParams = {
		&UFoodItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFoodItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFoodItem_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoodItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoodItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoodItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFoodItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFoodItem, 2966578121);
	template<> SURVIVAL_GAME_API UClass* StaticClass<UFoodItem>()
	{
		return UFoodItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFoodItem(Z_Construct_UClass_UFoodItem, &UFoodItem::StaticClass, TEXT("/Script/Survival_Game"), TEXT("UFoodItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoodItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
