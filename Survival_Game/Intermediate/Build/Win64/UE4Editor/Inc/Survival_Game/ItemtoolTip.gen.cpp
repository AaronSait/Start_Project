// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Widgets/ItemtoolTip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemtoolTip() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItemtoolTip_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItemtoolTip();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UInventoryItemWidget_NoRegister();
// End Cross Module References
	void UItemtoolTip::StaticRegisterNativesUItemtoolTip()
	{
	}
	UClass* Z_Construct_UClass_UItemtoolTip_NoRegister()
	{
		return UItemtoolTip::StaticClass();
	}
	struct Z_Construct_UClass_UItemtoolTip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventoryItemWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inventoryItemWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemtoolTip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemtoolTip_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/ItemtoolTip.h" },
		{ "ModuleRelativePath", "Widgets/ItemtoolTip.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemtoolTip_Statics::NewProp_inventoryItemWidget_MetaData[] = {
		{ "Category", "ItemToolTip" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Widgets/ItemtoolTip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemtoolTip_Statics::NewProp_inventoryItemWidget = { "inventoryItemWidget", nullptr, (EPropertyFlags)0x001100000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemtoolTip, inventoryItemWidget), Z_Construct_UClass_UInventoryItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemtoolTip_Statics::NewProp_inventoryItemWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemtoolTip_Statics::NewProp_inventoryItemWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemtoolTip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemtoolTip_Statics::NewProp_inventoryItemWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemtoolTip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemtoolTip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemtoolTip_Statics::ClassParams = {
		&UItemtoolTip::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemtoolTip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemtoolTip_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemtoolTip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemtoolTip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemtoolTip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemtoolTip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemtoolTip, 677128751);
	template<> SURVIVAL_GAME_API UClass* StaticClass<UItemtoolTip>()
	{
		return UItemtoolTip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemtoolTip(Z_Construct_UClass_UItemtoolTip, &UItemtoolTip::StaticClass, TEXT("/Script/Survival_Game"), TEXT("UItemtoolTip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemtoolTip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
