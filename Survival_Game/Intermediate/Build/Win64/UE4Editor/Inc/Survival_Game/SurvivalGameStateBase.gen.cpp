// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/FramWork/SurvivalGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalGameStateBase() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvivalGameStateBase_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvivalGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
// End Cross Module References
	void ASurvivalGameStateBase::StaticRegisterNativesASurvivalGameStateBase()
	{
	}
	UClass* Z_Construct_UClass_ASurvivalGameStateBase_NoRegister()
	{
		return ASurvivalGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_ASurvivalGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvivalGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FramWork/SurvivalGameStateBase.h" },
		{ "ModuleRelativePath", "FramWork/SurvivalGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvivalGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalGameStateBase_Statics::ClassParams = {
		&ASurvivalGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvivalGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASurvivalGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASurvivalGameStateBase, 3128486105);
	template<> SURVIVAL_GAME_API UClass* StaticClass<ASurvivalGameStateBase>()
	{
		return ASurvivalGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASurvivalGameStateBase(Z_Construct_UClass_ASurvivalGameStateBase, &ASurvivalGameStateBase::StaticClass, TEXT("/Script/Survival_Game"), TEXT("ASurvivalGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
