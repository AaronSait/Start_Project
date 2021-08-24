// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Items/WeaponItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponItem() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UWeaponItem_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UWeaponItem();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UEquippableItems();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_Aweapon_NoRegister();
// End Cross Module References
	void UWeaponItem::StaticRegisterNativesUWeaponItem()
	{
	}
	UClass* Z_Construct_UClass_UWeaponItem_NoRegister()
	{
		return UWeaponItem::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_weaponClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEquippableItems,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/WeaponItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Items/WeaponItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponItem_Statics::NewProp_weaponClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Items/WeaponItem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponItem_Statics::NewProp_weaponClass = { "weaponClass", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponItem, weaponClass), Z_Construct_UClass_Aweapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWeaponItem_Statics::NewProp_weaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponItem_Statics::NewProp_weaponClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponItem_Statics::NewProp_weaponClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeaponItem_Statics::ClassParams = {
		&UWeaponItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWeaponItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponItem_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponItem, 1960747100);
	template<> SURVIVAL_GAME_API UClass* StaticClass<UWeaponItem>()
	{
		return UWeaponItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponItem(Z_Construct_UClass_UWeaponItem, &UWeaponItem::StaticClass, TEXT("/Script/Survival_Game"), TEXT("UWeaponItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
