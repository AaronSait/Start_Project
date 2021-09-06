// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASurvivalGameCharacter;
class USkeletalMeshComponent;
enum class EWeaponState : uint8;
#ifdef SURVIVAL_GAME_weapon_generated_h
#error "weapon.generated.h already included, missing '#pragma once' in weapon.h"
#endif
#define SURVIVAL_GAME_weapon_generated_h

#define Survival_Game_Source_Survival_Game_Weapons_weapon_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHitScanConfig_Statics; \
	SURVIVAL_GAME_API static class UScriptStruct* StaticStruct();


template<> SURVIVAL_GAME_API UScriptStruct* StaticStruct<struct FHitScanConfig>();

#define Survival_Game_Source_Survival_Game_Weapons_weapon_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponAnim_Statics; \
	SURVIVAL_GAME_API static class UScriptStruct* StaticStruct();


template<> SURVIVAL_GAME_API UScriptStruct* StaticStruct<struct FWeaponAnim>();

#define Survival_Game_Source_Survival_Game_Weapons_weapon_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponData_Statics; \
	SURVIVAL_GAME_API static class UScriptStruct* StaticStruct();


template<> SURVIVAL_GAME_API UScriptStruct* StaticStruct<struct FWeaponData>();

#define Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_SPARSE_DATA
#define Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execBurstCounter); \
	DECLARE_FUNCTION(execPawnOwner); \
	DECLARE_FUNCTION(execGetPawnOwner); \
	DECLARE_FUNCTION(execGetWeaponMesh); \
	DECLARE_FUNCTION(execGetCurrentAmmoInClip); \
	DECLARE_FUNCTION(execGetCurrentAmmo); \
	DECLARE_FUNCTION(execGetCurrentState);


#define Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execBurstCounter); \
	DECLARE_FUNCTION(execPawnOwner); \
	DECLARE_FUNCTION(execGetPawnOwner); \
	DECLARE_FUNCTION(execGetWeaponMesh); \
	DECLARE_FUNCTION(execGetCurrentAmmoInClip); \
	DECLARE_FUNCTION(execGetCurrentAmmo); \
	DECLARE_FUNCTION(execGetCurrentState);


#define Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAweapon(); \
	friend struct Z_Construct_UClass_Aweapon_Statics; \
public: \
	DECLARE_CLASS(Aweapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(Aweapon)


#define Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_INCLASS \
private: \
	static void StaticRegisterNativesAweapon(); \
	friend struct Z_Construct_UClass_Aweapon_Statics; \
public: \
	DECLARE_CLASS(Aweapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(Aweapon)


#define Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Aweapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aweapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aweapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aweapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aweapon(Aweapon&&); \
	NO_API Aweapon(const Aweapon&); \
public:


#define Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aweapon(Aweapon&&); \
	NO_API Aweapon(const Aweapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aweapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aweapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aweapon)


#define Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__item() { return STRUCT_OFFSET(Aweapon, item); } \
	FORCEINLINE static uint32 __PPO__pawnOwner() { return STRUCT_OFFSET(Aweapon, pawnOwner); } \
	FORCEINLINE static uint32 __PPO__weaponConfig() { return STRUCT_OFFSET(Aweapon, weaponConfig); } \
	FORCEINLINE static uint32 __PPO__hitScanConfig() { return STRUCT_OFFSET(Aweapon, hitScanConfig); } \
	FORCEINLINE static uint32 __PPO__timerIntervalAdjustment() { return STRUCT_OFFSET(Aweapon, timerIntervalAdjustment); } \
	FORCEINLINE static uint32 __PPO__bAllowAutomaticWeaponCatchup() { return STRUCT_OFFSET(Aweapon, bAllowAutomaticWeaponCatchup); } \
	FORCEINLINE static uint32 __PPO__fireAC() { return STRUCT_OFFSET(Aweapon, fireAC); } \
	FORCEINLINE static uint32 __PPO__muzzleAttachPoint() { return STRUCT_OFFSET(Aweapon, muzzleAttachPoint); } \
	FORCEINLINE static uint32 __PPO__attachSocket() { return STRUCT_OFFSET(Aweapon, attachSocket); } \
	FORCEINLINE static uint32 __PPO__muzzleFX() { return STRUCT_OFFSET(Aweapon, muzzleFX); } \
	FORCEINLINE static uint32 __PPO__muzzlePSC() { return STRUCT_OFFSET(Aweapon, muzzlePSC); } \
	FORCEINLINE static uint32 __PPO__muzzlePSCSecondary() { return STRUCT_OFFSET(Aweapon, muzzlePSCSecondary); } \
	FORCEINLINE static uint32 __PPO__fireCameraShake() { return STRUCT_OFFSET(Aweapon, fireCameraShake); } \
	FORCEINLINE static uint32 __PPO__ADSTime() { return STRUCT_OFFSET(Aweapon, ADSTime); } \
	FORCEINLINE static uint32 __PPO__recoilCurve() { return STRUCT_OFFSET(Aweapon, recoilCurve); } \
	FORCEINLINE static uint32 __PPO__recoilSpeed() { return STRUCT_OFFSET(Aweapon, recoilSpeed); } \
	FORCEINLINE static uint32 __PPO__recoilResetSpeed() { return STRUCT_OFFSET(Aweapon, recoilResetSpeed); } \
	FORCEINLINE static uint32 __PPO__fireForceFeedback() { return STRUCT_OFFSET(Aweapon, fireForceFeedback); } \
	FORCEINLINE static uint32 __PPO__fireSound() { return STRUCT_OFFSET(Aweapon, fireSound); } \
	FORCEINLINE static uint32 __PPO__fireLoopSound() { return STRUCT_OFFSET(Aweapon, fireLoopSound); } \
	FORCEINLINE static uint32 __PPO__fireFinishSound() { return STRUCT_OFFSET(Aweapon, fireFinishSound); } \
	FORCEINLINE static uint32 __PPO__outOfAmmoSound() { return STRUCT_OFFSET(Aweapon, outOfAmmoSound); } \
	FORCEINLINE static uint32 __PPO__reloadSound() { return STRUCT_OFFSET(Aweapon, reloadSound); } \
	FORCEINLINE static uint32 __PPO__equipSound() { return STRUCT_OFFSET(Aweapon, equipSound); } \
	FORCEINLINE static uint32 __PPO__reloadAnim() { return STRUCT_OFFSET(Aweapon, reloadAnim); } \
	FORCEINLINE static uint32 __PPO__equipAnim() { return STRUCT_OFFSET(Aweapon, equipAnim); } \
	FORCEINLINE static uint32 __PPO__fireAnim() { return STRUCT_OFFSET(Aweapon, fireAnim); } \
	FORCEINLINE static uint32 __PPO__fireAimingAnim() { return STRUCT_OFFSET(Aweapon, fireAimingAnim); } \
	FORCEINLINE static uint32 __PPO__currentAmmoInClip() { return STRUCT_OFFSET(Aweapon, currentAmmoInClip); } \
	FORCEINLINE static uint32 __PPO__burstCounter() { return STRUCT_OFFSET(Aweapon, burstCounter); }


#define Survival_Game_Source_Survival_Game_Weapons_weapon_h_82_PROLOG
#define Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_RPC_WRAPPERS \
	Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_INCLASS \
	Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_INCLASS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_Weapons_weapon_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVAL_GAME_API UClass* StaticClass<class Aweapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Game_Source_Survival_Game_Weapons_weapon_h


#define FOREACH_ENUM_EWEAPONSTATE(op) \
	op(EWeaponState::Idle) \
	op(EWeaponState::Firing) \
	op(EWeaponState::Reloading) \
	op(EWeaponState::Equipping) 

enum class EWeaponState : uint8;
template<> SURVIVAL_GAME_API UEnum* StaticEnum<EWeaponState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
