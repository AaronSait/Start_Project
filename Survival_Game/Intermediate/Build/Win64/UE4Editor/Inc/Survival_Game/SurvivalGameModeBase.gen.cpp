// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/FramWork/SurvivalGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalGameModeBase() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvivalGameModeBase_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvivalGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
// End Cross Module References
	void ASurvivalGameModeBase::StaticRegisterNativesASurvivalGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASurvivalGameModeBase_NoRegister()
	{
		return ASurvivalGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASurvivalGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvivalGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FramWork/SurvivalGameModeBase.h" },
		{ "ModuleRelativePath", "FramWork/SurvivalGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvivalGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalGameModeBase_Statics::ClassParams = {
		&ASurvivalGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvivalGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASurvivalGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASurvivalGameModeBase, 2134720103);
	template<> SURVIVAL_GAME_API UClass* StaticClass<ASurvivalGameModeBase>()
	{
		return ASurvivalGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASurvivalGameModeBase(Z_Construct_UClass_ASurvivalGameModeBase, &ASurvivalGameModeBase::StaticClass, TEXT("/Script/Survival_Game"), TEXT("ASurvivalGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
