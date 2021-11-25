// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Items/AmmoItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoItem() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UAmmoItem_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UAmmoItem();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItem();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
// End Cross Module References
	void UAmmoItem::StaticRegisterNativesUAmmoItem()
	{
	}
	UClass* Z_Construct_UClass_UAmmoItem_NoRegister()
	{
		return UAmmoItem::StaticClass();
	}
	struct Z_Construct_UClass_UAmmoItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAmmoItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmmoItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/AmmoItem.h" },
		{ "ModuleRelativePath", "Items/AmmoItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAmmoItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmmoItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAmmoItem_Statics::ClassParams = {
		&UAmmoItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAmmoItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAmmoItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAmmoItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAmmoItem, 1193862680);
	template<> SURVIVAL_GAME_API UClass* StaticClass<UAmmoItem>()
	{
		return UAmmoItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAmmoItem(Z_Construct_UClass_UAmmoItem, &UAmmoItem::StaticClass, TEXT("/Script/Survival_Game"), TEXT("UAmmoItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAmmoItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
