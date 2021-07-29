// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Weapons/MeleeDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeDamageType() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UMeleeDamageType_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UMeleeDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
// End Cross Module References
	void UMeleeDamageType::StaticRegisterNativesUMeleeDamageType()
	{
	}
	UClass* Z_Construct_UClass_UMeleeDamageType_NoRegister()
	{
		return UMeleeDamageType::StaticClass();
	}
	struct Z_Construct_UClass_UMeleeDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeleeDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeleeDamageType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/MeleeDamageType.h" },
		{ "ModuleRelativePath", "Weapons/MeleeDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeleeDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeleeDamageType_Statics::ClassParams = {
		&UMeleeDamageType::StaticClass,
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
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeleeDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeleeDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeleeDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeleeDamageType, 3785695968);
	template<> SURVIVAL_GAME_API UClass* StaticClass<UMeleeDamageType>()
	{
		return UMeleeDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeleeDamageType(Z_Construct_UClass_UMeleeDamageType, &UMeleeDamageType::StaticClass, TEXT("/Script/Survival_Game"), TEXT("UMeleeDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
