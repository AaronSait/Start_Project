// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Survival_GameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvival_GameGameMode() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvival_GameGameMode_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvival_GameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
// End Cross Module References
	void ASurvival_GameGameMode::StaticRegisterNativesASurvival_GameGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASurvival_GameGameMode_NoRegister()
	{
		return ASurvival_GameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASurvival_GameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvival_GameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvival_GameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Survival_GameGameMode.h" },
		{ "ModuleRelativePath", "Survival_GameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvival_GameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvival_GameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASurvival_GameGameMode_Statics::ClassParams = {
		&ASurvival_GameGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASurvival_GameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvival_GameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvival_GameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASurvival_GameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASurvival_GameGameMode, 2891362053);
	template<> SURVIVAL_GAME_API UClass* StaticClass<ASurvival_GameGameMode>()
	{
		return ASurvival_GameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASurvival_GameGameMode(Z_Construct_UClass_ASurvival_GameGameMode, &ASurvival_GameGameMode::StaticClass, TEXT("/Script/Survival_Game"), TEXT("ASurvival_GameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvival_GameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
