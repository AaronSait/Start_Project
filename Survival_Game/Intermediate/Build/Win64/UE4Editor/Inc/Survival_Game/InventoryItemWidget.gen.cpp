// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Widgets/InventoryItemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItemWidget() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UInventoryItemWidget_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UInventoryItemWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UItem_NoRegister();
// End Cross Module References
	void UInventoryItemWidget::StaticRegisterNativesUInventoryItemWidget()
	{
	}
	UClass* Z_Construct_UClass_UInventoryItemWidget_NoRegister()
	{
		return UInventoryItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/InventoryItemWidget.h" },
		{ "ModuleRelativePath", "Widgets/InventoryItemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemWidget_Statics::NewProp_item_MetaData[] = {
		{ "Category", "InventoryItemWidget" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Widgets/InventoryItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItemWidget_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x001100000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryItemWidget, item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryItemWidget_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemWidget_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryItemWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemWidget_Statics::NewProp_item,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryItemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryItemWidget_Statics::ClassParams = {
		&UInventoryItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInventoryItemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryItemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryItemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryItemWidget, 3579820158);
	template<> SURVIVAL_GAME_API UClass* StaticClass<UInventoryItemWidget>()
	{
		return UInventoryItemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryItemWidget(Z_Construct_UClass_UInventoryItemWidget, &UInventoryItemWidget::StaticClass, TEXT("/Script/Survival_Game"), TEXT("UInventoryItemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryItemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
