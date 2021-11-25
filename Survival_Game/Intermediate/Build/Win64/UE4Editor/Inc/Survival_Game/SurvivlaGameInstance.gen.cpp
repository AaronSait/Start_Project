// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/FramWork/SurvivlaGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivlaGameInstance() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_USurvivlaGameInstance_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_USurvivlaGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
// End Cross Module References
	void USurvivlaGameInstance::StaticRegisterNativesUSurvivlaGameInstance()
	{
	}
	UClass* Z_Construct_UClass_USurvivlaGameInstance_NoRegister()
	{
		return USurvivlaGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USurvivlaGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivlaGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivlaGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FramWork/SurvivlaGameInstance.h" },
		{ "ModuleRelativePath", "FramWork/SurvivlaGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivlaGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivlaGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivlaGameInstance_Statics::ClassParams = {
		&USurvivlaGameInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivlaGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivlaGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivlaGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivlaGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivlaGameInstance, 2163090018);
	template<> SURVIVAL_GAME_API UClass* StaticClass<USurvivlaGameInstance>()
	{
		return USurvivlaGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivlaGameInstance(Z_Construct_UClass_USurvivlaGameInstance, &USurvivlaGameInstance::StaticClass, TEXT("/Script/Survival_Game"), TEXT("USurvivlaGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivlaGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
