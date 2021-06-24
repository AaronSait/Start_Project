// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Player/SurvivalPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalPlayerController() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvivalPlayerController_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvivalPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
// End Cross Module References
	void ASurvivalPlayerController::StaticRegisterNativesASurvivalPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ASurvivalPlayerController_NoRegister()
	{
		return ASurvivalPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASurvivalPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvivalPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/SurvivalPlayerController.h" },
		{ "ModuleRelativePath", "Player/SurvivalPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvivalPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalPlayerController_Statics::ClassParams = {
		&ASurvivalPlayerController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASurvivalPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvivalPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASurvivalPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASurvivalPlayerController, 3090599386);
	template<> SURVIVAL_GAME_API UClass* StaticClass<ASurvivalPlayerController>()
	{
		return ASurvivalPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASurvivalPlayerController(Z_Construct_UClass_ASurvivalPlayerController, &ASurvivalPlayerController::StaticClass, TEXT("/Script/Survival_Game"), TEXT("ASurvivalPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
