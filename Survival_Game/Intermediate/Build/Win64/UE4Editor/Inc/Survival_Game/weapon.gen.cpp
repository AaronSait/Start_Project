// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Weapons/weapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeweapon() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_Aweapon_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_Aweapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
// End Cross Module References
	void Aweapon::StaticRegisterNativesAweapon()
	{
	}
	UClass* Z_Construct_UClass_Aweapon_NoRegister()
	{
		return Aweapon::StaticClass();
	}
	struct Z_Construct_UClass_Aweapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aweapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/weapon.h" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aweapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aweapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aweapon_Statics::ClassParams = {
		&Aweapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aweapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aweapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aweapon, 647513925);
	template<> SURVIVAL_GAME_API UClass* StaticClass<Aweapon>()
	{
		return Aweapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aweapon(Z_Construct_UClass_Aweapon, &Aweapon::StaticClass, TEXT("/Script/Survival_Game"), TEXT("Aweapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aweapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
