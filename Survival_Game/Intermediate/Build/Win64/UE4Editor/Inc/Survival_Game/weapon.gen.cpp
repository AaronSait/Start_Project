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
	SURVIVAL_GAME_API UEnum* Z_Construct_UEnum_Survival_Game_EWeaponState();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
	SURVIVAL_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FHitScanConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	SURVIVAL_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponAnim();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	SURVIVAL_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UAmmoItem_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_Aweapon_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_Aweapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvivalGameCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UWeaponItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMatineeCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	static UEnum* EWeaponState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Survival_Game_EWeaponState, Z_Construct_UPackage__Script_Survival_Game(), TEXT("EWeaponState"));
		}
		return Singleton;
	}
	template<> SURVIVAL_GAME_API UEnum* StaticEnum<EWeaponState>()
	{
		return EWeaponState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponState(EWeaponState_StaticEnum, TEXT("/Script/Survival_Game"), TEXT("EWeaponState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Survival_Game_EWeaponState_Hash() { return 3479699261U; }
	UEnum* Z_Construct_UEnum_Survival_Game_EWeaponState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Survival_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponState"), 0, Get_Z_Construct_UEnum_Survival_Game_EWeaponState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponState::Idle", (int64)EWeaponState::Idle },
				{ "EWeaponState::Firing", (int64)EWeaponState::Firing },
				{ "EWeaponState::Reloading", (int64)EWeaponState::Reloading },
				{ "EWeaponState::Equipping", (int64)EWeaponState::Equipping },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Equipping.Name", "EWeaponState::Equipping" },
				{ "Firing.Name", "EWeaponState::Firing" },
				{ "Idle.Name", "EWeaponState::Idle" },
				{ "ModuleRelativePath", "Weapons/weapon.h" },
				{ "Reloading.Name", "EWeaponState::Reloading" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Survival_Game,
				nullptr,
				"EWeaponState",
				"EWeaponState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FHitScanConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SURVIVAL_GAME_API uint32 Get_Z_Construct_UScriptStruct_FHitScanConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitScanConfig, Z_Construct_UPackage__Script_Survival_Game(), TEXT("HitScanConfig"), sizeof(FHitScanConfig), Get_Z_Construct_UScriptStruct_FHitScanConfig_Hash());
	}
	return Singleton;
}
template<> SURVIVAL_GAME_API UScriptStruct* StaticStruct<FHitScanConfig>()
{
	return FHitScanConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHitScanConfig(FHitScanConfig::StaticStruct, TEXT("/Script/Survival_Game"), TEXT("HitScanConfig"), false, nullptr, nullptr);
static struct FScriptStruct_Survival_Game_StaticRegisterNativesFHitScanConfig
{
	FScriptStruct_Survival_Game_StaticRegisterNativesFHitScanConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HitScanConfig")),new UScriptStruct::TCppStructOps<FHitScanConfig>);
	}
} ScriptStruct_Survival_Game_StaticRegisterNativesFHitScanConfig;
	struct Z_Construct_UScriptStruct_FHitScanConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_boneDamageModifiers_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_boneDamageModifiers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boneDamageModifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_boneDamageModifiers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitScanConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_distance_MetaData[] = {
		{ "Category", "Trace Info" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanConfig, distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "Trace Info" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanConfig, damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_radius_MetaData[] = {
		{ "Category", "Trace Info" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanConfig, radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_damageType_MetaData[] = {
		{ "Category", "Trace Info" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanConfig, damageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_damageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_boneDamageModifiers_ValueProp = { "boneDamageModifiers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_boneDamageModifiers_Key_KeyProp = { "boneDamageModifiers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_boneDamageModifiers_MetaData[] = {
		{ "Category", "Trace Info" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_boneDamageModifiers = { "boneDamageModifiers", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitScanConfig, boneDamageModifiers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_boneDamageModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_boneDamageModifiers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitScanConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_boneDamageModifiers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_boneDamageModifiers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitScanConfig_Statics::NewProp_boneDamageModifiers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitScanConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
		nullptr,
		&NewStructOps,
		"HitScanConfig",
		sizeof(FHitScanConfig),
		alignof(FHitScanConfig),
		Z_Construct_UScriptStruct_FHitScanConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitScanConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitScanConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitScanConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHitScanConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Survival_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HitScanConfig"), sizeof(FHitScanConfig), Get_Z_Construct_UScriptStruct_FHitScanConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHitScanConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHitScanConfig_Hash() { return 410560230U; }
class UScriptStruct* FWeaponAnim::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SURVIVAL_GAME_API uint32 Get_Z_Construct_UScriptStruct_FWeaponAnim_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponAnim, Z_Construct_UPackage__Script_Survival_Game(), TEXT("WeaponAnim"), sizeof(FWeaponAnim), Get_Z_Construct_UScriptStruct_FWeaponAnim_Hash());
	}
	return Singleton;
}
template<> SURVIVAL_GAME_API UScriptStruct* StaticStruct<FWeaponAnim>()
{
	return FWeaponAnim::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponAnim(FWeaponAnim::StaticStruct, TEXT("/Script/Survival_Game"), TEXT("WeaponAnim"), false, nullptr, nullptr);
static struct FScriptStruct_Survival_Game_StaticRegisterNativesFWeaponAnim
{
	FScriptStruct_Survival_Game_StaticRegisterNativesFWeaponAnim()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeaponAnim")),new UScriptStruct::TCppStructOps<FWeaponAnim>);
	}
} ScriptStruct_Survival_Game_StaticRegisterNativesFWeaponAnim;
	struct Z_Construct_UScriptStruct_FWeaponAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAnim_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponAnim>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_pawn_MetaData[] = {
		{ "Category", "Anumation" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponAnim, pawn), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_pawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAnim_Statics::NewProp_pawn,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponAnim_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
		nullptr,
		&NewStructOps,
		"WeaponAnim",
		sizeof(FWeaponAnim),
		alignof(FWeaponAnim),
		Z_Construct_UScriptStruct_FWeaponAnim_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnim_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponAnim_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAnim_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponAnim()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponAnim_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Survival_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponAnim"), sizeof(FWeaponAnim), Get_Z_Construct_UScriptStruct_FWeaponAnim_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponAnim_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponAnim_Hash() { return 2516543038U; }
class UScriptStruct* FWeaponData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SURVIVAL_GAME_API uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponData, Z_Construct_UPackage__Script_Survival_Game(), TEXT("WeaponData"), sizeof(FWeaponData), Get_Z_Construct_UScriptStruct_FWeaponData_Hash());
	}
	return Singleton;
}
template<> SURVIVAL_GAME_API UScriptStruct* StaticStruct<FWeaponData>()
{
	return FWeaponData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponData(FWeaponData::StaticStruct, TEXT("/Script/Survival_Game"), TEXT("WeaponData"), false, nullptr, nullptr);
static struct FScriptStruct_Survival_Game_StaticRegisterNativesFWeaponData
{
	FScriptStruct_Survival_Game_StaticRegisterNativesFWeaponData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeaponData")),new UScriptStruct::TCppStructOps<FWeaponData>);
	}
} ScriptStruct_Survival_Game_StaticRegisterNativesFWeaponData;
	struct Z_Construct_UScriptStruct_FWeaponData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammoPerClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ammoPerClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammoClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ammoClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeBetweenShots_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeBetweenShots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ammoPerClip_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ammoPerClip = { "ammoPerClip", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, ammoPerClip), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ammoPerClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ammoPerClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ammoClass_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ammoClass = { "ammoClass", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, ammoClass), Z_Construct_UClass_UAmmoItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ammoClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ammoClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_timeBetweenShots_MetaData[] = {
		{ "Category", "WeponStat" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_timeBetweenShots = { "timeBetweenShots", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, timeBetweenShots), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_timeBetweenShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_timeBetweenShots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ammoPerClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ammoClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_timeBetweenShots,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
		nullptr,
		&NewStructOps,
		"WeaponData",
		sizeof(FWeaponData),
		alignof(FWeaponData),
		Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Survival_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponData"), sizeof(FWeaponData), Get_Z_Construct_UScriptStruct_FWeaponData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash() { return 1654623927U; }
	DEFINE_FUNCTION(Aweapon::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aweapon::execBurstCounter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BurstCounter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aweapon::execPawnOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PawnOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aweapon::execGetPawnOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASurvivalGameCharacter**)Z_Param__Result=P_THIS->GetPawnOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aweapon::execGetWeaponMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetWeaponMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aweapon::execGetCurrentAmmoInClip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAmmoInClip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aweapon::execGetCurrentAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aweapon::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWeaponState*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	void Aweapon::StaticRegisterNativesAweapon()
	{
		UClass* Class = Aweapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BurstCounter", &Aweapon::execBurstCounter },
			{ "GetCurrentAmmo", &Aweapon::execGetCurrentAmmo },
			{ "GetCurrentAmmoInClip", &Aweapon::execGetCurrentAmmoInClip },
			{ "GetCurrentState", &Aweapon::execGetCurrentState },
			{ "GetPawnOwner", &Aweapon::execGetPawnOwner },
			{ "GetWeaponMesh", &Aweapon::execGetWeaponMesh },
			{ "PawnOwner", &Aweapon::execPawnOwner },
			{ "Reload", &Aweapon::execReload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Aweapon_BurstCounter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aweapon_BurstCounter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aweapon_BurstCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aweapon, nullptr, "BurstCounter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aweapon_BurstCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aweapon_BurstCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aweapon_BurstCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aweapon_BurstCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aweapon_GetCurrentAmmo_Statics
	{
		struct weapon_eventGetCurrentAmmo_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Aweapon_GetCurrentAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(weapon_eventGetCurrentAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aweapon_GetCurrentAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aweapon_GetCurrentAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aweapon_GetCurrentAmmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aweapon_GetCurrentAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aweapon, nullptr, "GetCurrentAmmo", nullptr, nullptr, sizeof(weapon_eventGetCurrentAmmo_Parms), Z_Construct_UFunction_Aweapon_GetCurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aweapon_GetCurrentAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aweapon_GetCurrentAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aweapon_GetCurrentAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aweapon_GetCurrentAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aweapon_GetCurrentAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aweapon_GetCurrentAmmoInClip_Statics
	{
		struct weapon_eventGetCurrentAmmoInClip_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Aweapon_GetCurrentAmmoInClip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(weapon_eventGetCurrentAmmoInClip_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aweapon_GetCurrentAmmoInClip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aweapon_GetCurrentAmmoInClip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aweapon_GetCurrentAmmoInClip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aweapon_GetCurrentAmmoInClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aweapon, nullptr, "GetCurrentAmmoInClip", nullptr, nullptr, sizeof(weapon_eventGetCurrentAmmoInClip_Parms), Z_Construct_UFunction_Aweapon_GetCurrentAmmoInClip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aweapon_GetCurrentAmmoInClip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aweapon_GetCurrentAmmoInClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aweapon_GetCurrentAmmoInClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aweapon_GetCurrentAmmoInClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aweapon_GetCurrentAmmoInClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aweapon_GetCurrentState_Statics
	{
		struct weapon_eventGetCurrentState_Parms
		{
			EWeaponState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_Aweapon_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_Aweapon_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(weapon_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_Survival_Game_EWeaponState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aweapon_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aweapon_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aweapon_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aweapon_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aweapon_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aweapon, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(weapon_eventGetCurrentState_Parms), Z_Construct_UFunction_Aweapon_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aweapon_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aweapon_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aweapon_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aweapon_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aweapon_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aweapon_GetPawnOwner_Statics
	{
		struct weapon_eventGetPawnOwner_Parms
		{
			ASurvivalGameCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aweapon_GetPawnOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(weapon_eventGetPawnOwner_Parms, ReturnValue), Z_Construct_UClass_ASurvivalGameCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aweapon_GetPawnOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aweapon_GetPawnOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aweapon_GetPawnOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aweapon_GetPawnOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aweapon, nullptr, "GetPawnOwner", nullptr, nullptr, sizeof(weapon_eventGetPawnOwner_Parms), Z_Construct_UFunction_Aweapon_GetPawnOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aweapon_GetPawnOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aweapon_GetPawnOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aweapon_GetPawnOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aweapon_GetPawnOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aweapon_GetPawnOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aweapon_GetWeaponMesh_Statics
	{
		struct weapon_eventGetWeaponMesh_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aweapon_GetWeaponMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aweapon_GetWeaponMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(weapon_eventGetWeaponMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Aweapon_GetWeaponMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Aweapon_GetWeaponMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aweapon_GetWeaponMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aweapon_GetWeaponMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aweapon_GetWeaponMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aweapon_GetWeaponMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aweapon, nullptr, "GetWeaponMesh", nullptr, nullptr, sizeof(weapon_eventGetWeaponMesh_Parms), Z_Construct_UFunction_Aweapon_GetWeaponMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aweapon_GetWeaponMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aweapon_GetWeaponMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aweapon_GetWeaponMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aweapon_GetWeaponMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aweapon_GetWeaponMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aweapon_PawnOwner_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aweapon_PawnOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aweapon_PawnOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aweapon, nullptr, "PawnOwner", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aweapon_PawnOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aweapon_PawnOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aweapon_PawnOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aweapon_PawnOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aweapon_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aweapon_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aweapon_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aweapon, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aweapon_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aweapon_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aweapon_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aweapon_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Aweapon_NoRegister()
	{
		return Aweapon::StaticClass();
	}
	struct Z_Construct_UClass_Aweapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_weaponMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pawnOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawnOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_weaponConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitScanConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitScanConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timerIntervalAdjustment_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timerIntervalAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowAutomaticWeaponCatchup_MetaData[];
#endif
		static void NewProp_bAllowAutomaticWeaponCatchup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowAutomaticWeaponCatchup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireAC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fireAC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_muzzleAttachPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_muzzleAttachPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attachSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_attachSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_muzzleFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_muzzleFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_muzzlePSC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_muzzlePSC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_muzzlePSCSecondary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_muzzlePSCSecondary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireCameraShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_fireCameraShake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADSTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ADSTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_recoilCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_recoilCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_recoilSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_recoilSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_recoilResetSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_recoilResetSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireForceFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fireForceFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireLoopSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fireLoopSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireFinishSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fireFinishSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_outOfAmmoSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outOfAmmoSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reloadSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_reloadSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_equipSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_equipSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reloadAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_reloadAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_equipAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_equipAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_fireAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireAimingAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_fireAimingAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopedMuzzleFX_MetaData[];
#endif
		static void NewProp_bLoopedMuzzleFX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopedMuzzleFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopedFireSound_MetaData[];
#endif
		static void NewProp_bLoopedFireSound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopedFireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopedFireAnim_MetaData[];
#endif
		static void NewProp_bLoopedFireAnim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopedFireAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPendingReload_MetaData[];
#endif
		static void NewProp_bPendingReload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPendingReload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentAmmoInClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentAmmoInClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_burstCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_burstCounter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aweapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Aweapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Aweapon_BurstCounter, "BurstCounter" }, // 588878139
		{ &Z_Construct_UFunction_Aweapon_GetCurrentAmmo, "GetCurrentAmmo" }, // 2000448584
		{ &Z_Construct_UFunction_Aweapon_GetCurrentAmmoInClip, "GetCurrentAmmoInClip" }, // 691385226
		{ &Z_Construct_UFunction_Aweapon_GetCurrentState, "GetCurrentState" }, // 3574465836
		{ &Z_Construct_UFunction_Aweapon_GetPawnOwner, "GetPawnOwner" }, // 3085669495
		{ &Z_Construct_UFunction_Aweapon_GetWeaponMesh, "GetWeaponMesh" }, // 472718452
		{ &Z_Construct_UFunction_Aweapon_PawnOwner, "PawnOwner" }, // 2795985767
		{ &Z_Construct_UFunction_Aweapon_Reload, "Reload" }, // 1790102614
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/weapon.h" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_weaponMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_weaponMesh = { "weaponMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, weaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_weaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_weaponMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_item_MetaData[] = {
		{ "Category", "weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, item), Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_pawnOwner_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_pawnOwner = { "pawnOwner", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, pawnOwner), Z_Construct_UClass_ASurvivalGameCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_pawnOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_pawnOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_weaponConfig_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_weaponConfig = { "weaponConfig", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, weaponConfig), Z_Construct_UScriptStruct_FWeaponData, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_weaponConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_weaponConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_hitScanConfig_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_hitScanConfig = { "hitScanConfig", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, hitScanConfig), Z_Construct_UScriptStruct_FHitScanConfig, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_hitScanConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_hitScanConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_timerIntervalAdjustment_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_timerIntervalAdjustment = { "timerIntervalAdjustment", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, timerIntervalAdjustment), METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_timerIntervalAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_timerIntervalAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_bAllowAutomaticWeaponCatchup_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	void Z_Construct_UClass_Aweapon_Statics::NewProp_bAllowAutomaticWeaponCatchup_SetBit(void* Obj)
	{
		((Aweapon*)Obj)->bAllowAutomaticWeaponCatchup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_bAllowAutomaticWeaponCatchup = { "bAllowAutomaticWeaponCatchup", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Aweapon), &Z_Construct_UClass_Aweapon_Statics::NewProp_bAllowAutomaticWeaponCatchup_SetBit, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_bAllowAutomaticWeaponCatchup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_bAllowAutomaticWeaponCatchup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_fireAC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_fireAC = { "fireAC", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, fireAC), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_fireAC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_fireAC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_muzzleAttachPoint_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_muzzleAttachPoint = { "muzzleAttachPoint", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, muzzleAttachPoint), METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_muzzleAttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_muzzleAttachPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_attachSocket_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_attachSocket = { "attachSocket", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, attachSocket), METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_attachSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_attachSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_muzzleFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_muzzleFX = { "muzzleFX", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, muzzleFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_muzzleFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_muzzleFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_muzzlePSC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_muzzlePSC = { "muzzlePSC", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, muzzlePSC), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_muzzlePSC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_muzzlePSC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_muzzlePSCSecondary_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_muzzlePSCSecondary = { "muzzlePSCSecondary", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, muzzlePSCSecondary), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_muzzlePSCSecondary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_muzzlePSCSecondary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_fireCameraShake_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_fireCameraShake = { "fireCameraShake", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, fireCameraShake), Z_Construct_UClass_UMatineeCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_fireCameraShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_fireCameraShake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_ADSTime_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_ADSTime = { "ADSTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, ADSTime), METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_ADSTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_ADSTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_recoilCurve_MetaData[] = {
		{ "Category", "Recoil" },
		{ "Comment", "//Aim Down Sight Time (ADSTime)\n" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
		{ "ToolTip", "Aim Down Sight Time (ADSTime)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_recoilCurve = { "recoilCurve", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, recoilCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_recoilCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_recoilCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_recoilSpeed_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_recoilSpeed = { "recoilSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, recoilSpeed), METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_recoilSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_recoilSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_recoilResetSpeed_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_recoilResetSpeed = { "recoilResetSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, recoilResetSpeed), METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_recoilResetSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_recoilResetSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_fireForceFeedback_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_fireForceFeedback = { "fireForceFeedback", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, fireForceFeedback), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_fireForceFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_fireForceFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_fireSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_fireSound = { "fireSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, fireSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_fireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_fireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_fireLoopSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_fireLoopSound = { "fireLoopSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, fireLoopSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_fireLoopSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_fireLoopSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_fireFinishSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_fireFinishSound = { "fireFinishSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, fireFinishSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_fireFinishSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_fireFinishSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_outOfAmmoSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_outOfAmmoSound = { "outOfAmmoSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, outOfAmmoSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_outOfAmmoSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_outOfAmmoSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_reloadSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_reloadSound = { "reloadSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, reloadSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_reloadSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_reloadSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_equipSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_equipSound = { "equipSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, equipSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_equipSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_equipSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_reloadAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_reloadAnim = { "reloadAnim", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, reloadAnim), Z_Construct_UScriptStruct_FWeaponAnim, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_reloadAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_reloadAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_equipAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_equipAnim = { "equipAnim", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, equipAnim), Z_Construct_UScriptStruct_FWeaponAnim, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_equipAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_equipAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_fireAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_fireAnim = { "fireAnim", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, fireAnim), Z_Construct_UScriptStruct_FWeaponAnim, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_fireAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_fireAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_fireAimingAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_fireAimingAnim = { "fireAimingAnim", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, fireAimingAnim), Z_Construct_UScriptStruct_FWeaponAnim, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_fireAimingAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_fireAimingAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedMuzzleFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	void Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedMuzzleFX_SetBit(void* Obj)
	{
		((Aweapon*)Obj)->bLoopedMuzzleFX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedMuzzleFX = { "bLoopedMuzzleFX", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(Aweapon), &Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedMuzzleFX_SetBit, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedMuzzleFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedMuzzleFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedFireSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	void Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedFireSound_SetBit(void* Obj)
	{
		((Aweapon*)Obj)->bLoopedFireSound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedFireSound = { "bLoopedFireSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(Aweapon), &Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedFireSound_SetBit, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedFireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedFireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedFireAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	void Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedFireAnim_SetBit(void* Obj)
	{
		((Aweapon*)Obj)->bLoopedFireAnim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedFireAnim = { "bLoopedFireAnim", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(Aweapon), &Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedFireAnim_SetBit, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedFireAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedFireAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_bPendingReload_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	void Z_Construct_UClass_Aweapon_Statics::NewProp_bPendingReload_SetBit(void* Obj)
	{
		((Aweapon*)Obj)->bPendingReload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_bPendingReload = { "bPendingReload", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(Aweapon), &Z_Construct_UClass_Aweapon_Statics::NewProp_bPendingReload_SetBit, METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_bPendingReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_bPendingReload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_currentAmmoInClip_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_currentAmmoInClip = { "currentAmmoInClip", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, currentAmmoInClip), METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_currentAmmoInClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_currentAmmoInClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aweapon_Statics::NewProp_burstCounter_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Aweapon_Statics::NewProp_burstCounter = { "burstCounter", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aweapon, burstCounter), METADATA_PARAMS(Z_Construct_UClass_Aweapon_Statics::NewProp_burstCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::NewProp_burstCounter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aweapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_weaponMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_pawnOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_weaponConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_hitScanConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_timerIntervalAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_bAllowAutomaticWeaponCatchup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_fireAC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_muzzleAttachPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_attachSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_muzzleFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_muzzlePSC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_muzzlePSCSecondary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_fireCameraShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_ADSTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_recoilCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_recoilSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_recoilResetSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_fireForceFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_fireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_fireLoopSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_fireFinishSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_outOfAmmoSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_reloadSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_equipSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_reloadAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_equipAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_fireAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_fireAimingAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedMuzzleFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedFireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_bLoopedFireAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_bPendingReload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_currentAmmoInClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aweapon_Statics::NewProp_burstCounter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aweapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aweapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aweapon_Statics::ClassParams = {
		&Aweapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Aweapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Aweapon_Statics::PropPointers),
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
	IMPLEMENT_CLASS(Aweapon, 1832790902);
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
