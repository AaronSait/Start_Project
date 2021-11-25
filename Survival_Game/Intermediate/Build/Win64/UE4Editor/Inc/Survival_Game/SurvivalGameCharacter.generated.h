// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEquippableSlot : uint8;
class UEquippableItems;
class Aweapon;
struct FHitResult;
class AActor;
class ASurvivalGameCharacter;
class UItem;
class UInventoryComponent;
enum class EEquippableSlot : uint8; class UEquippableItems;
class USkeletalMeshComponent;
#ifdef SURVIVAL_GAME_SurvivalGameCharacter_generated_h
#error "SurvivalGameCharacter.generated.h already included, missing '#pragma once' in SurvivalGameCharacter.h"
#endif
#define SURVIVAL_GAME_SurvivalGameCharacter_generated_h

#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractionData_Statics; \
	SURVIVAL_GAME_API static class UScriptStruct* StaticStruct();


template<> SURVIVAL_GAME_API UScriptStruct* StaticStruct<struct FInteractionData>();

#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_10_DELEGATE \
struct _Script_Survival_Game_eventOnEquippedItemChanged_Parms \
{ \
	EEquippableSlot slot; \
	const UEquippableItems* item; \
}; \
static inline void FOnEquippedItemChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEquippedItemChanged, const EEquippableSlot slot, const UEquippableItems* item) \
{ \
	_Script_Survival_Game_eventOnEquippedItemChanged_Parms Parms; \
	Parms.slot=slot; \
	Parms.item=item; \
	OnEquippedItemChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_SPARSE_DATA
#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGEtEquippedWeapon); \
	DECLARE_FUNCTION(execIsAiming); \
	DECLARE_FUNCTION(execEquippedWeapon); \
	DECLARE_FUNCTION(execPlayMeleeFX); \
	DECLARE_FUNCTION(execProcessMeleeHit); \
	DECLARE_FUNCTION(execKilled); \
	DECLARE_FUNCTION(execHealth); \
	DECLARE_FUNCTION(execLootSource); \
	DECLARE_FUNCTION(execOnLootSourceOwnerDestryed); \
	DECLARE_FUNCTION(execBeginLootingPlayer); \
	DECLARE_FUNCTION(execLootItem); \
	DECLARE_FUNCTION(execIsLooting); \
	DECLARE_FUNCTION(execSetLootSource); \
	DECLARE_FUNCTION(execGetEquippedItems); \
	DECLARE_FUNCTION(execGetSlotSkeletalMeshComponent); \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execUseItem);


#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGEtEquippedWeapon); \
	DECLARE_FUNCTION(execIsAiming); \
	DECLARE_FUNCTION(execEquippedWeapon); \
	DECLARE_FUNCTION(execPlayMeleeFX); \
	DECLARE_FUNCTION(execProcessMeleeHit); \
	DECLARE_FUNCTION(execKilled); \
	DECLARE_FUNCTION(execHealth); \
	DECLARE_FUNCTION(execLootSource); \
	DECLARE_FUNCTION(execOnLootSourceOwnerDestryed); \
	DECLARE_FUNCTION(execBeginLootingPlayer); \
	DECLARE_FUNCTION(execLootItem); \
	DECLARE_FUNCTION(execIsLooting); \
	DECLARE_FUNCTION(execSetLootSource); \
	DECLARE_FUNCTION(execGetEquippedItems); \
	DECLARE_FUNCTION(execGetSlotSkeletalMeshComponent); \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execUseItem);


#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_EVENT_PARMS \
	struct SurvivalGameCharacter_eventOnHealthModified_Parms \
	{ \
		float helathDelta; \
	};


#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_CALLBACK_WRAPPERS
#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivalGameCharacter(); \
	friend struct Z_Construct_UClass_ASurvivalGameCharacter_Statics; \
public: \
	DECLARE_CLASS(ASurvivalGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalGameCharacter)


#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_INCLASS \
private: \
	static void StaticRegisterNativesASurvivalGameCharacter(); \
	friend struct Z_Construct_UClass_ASurvivalGameCharacter_Statics; \
public: \
	DECLARE_CLASS(ASurvivalGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalGameCharacter)


#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASurvivalGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASurvivalGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalGameCharacter(ASurvivalGameCharacter&&); \
	NO_API ASurvivalGameCharacter(const ASurvivalGameCharacter&); \
public:


#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalGameCharacter(ASurvivalGameCharacter&&); \
	NO_API ASurvivalGameCharacter(const ASurvivalGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASurvivalGameCharacter)


#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__interactionCheckFrequence() { return STRUCT_OFFSET(ASurvivalGameCharacter, interactionCheckFrequence); } \
	FORCEINLINE static uint32 __PPO__interactionCheckDistance() { return STRUCT_OFFSET(ASurvivalGameCharacter, interactionCheckDistance); } \
	FORCEINLINE static uint32 __PPO__interactionData() { return STRUCT_OFFSET(ASurvivalGameCharacter, interactionData); } \
	FORCEINLINE static uint32 __PPO__equippedItems() { return STRUCT_OFFSET(ASurvivalGameCharacter, equippedItems); } \
	FORCEINLINE static uint32 __PPO__lootSource() { return STRUCT_OFFSET(ASurvivalGameCharacter, lootSource); } \
	FORCEINLINE static uint32 __PPO__health() { return STRUCT_OFFSET(ASurvivalGameCharacter, health); } \
	FORCEINLINE static uint32 __PPO__maxHealth() { return STRUCT_OFFSET(ASurvivalGameCharacter, maxHealth); } \
	FORCEINLINE static uint32 __PPO__meleeAttackDistance() { return STRUCT_OFFSET(ASurvivalGameCharacter, meleeAttackDistance); } \
	FORCEINLINE static uint32 __PPO__meleeAttackDamage() { return STRUCT_OFFSET(ASurvivalGameCharacter, meleeAttackDamage); } \
	FORCEINLINE static uint32 __PPO__meleeAttackMontage() { return STRUCT_OFFSET(ASurvivalGameCharacter, meleeAttackMontage); } \
	FORCEINLINE static uint32 __PPO__lastMeleeAttckTime() { return STRUCT_OFFSET(ASurvivalGameCharacter, lastMeleeAttckTime); } \
	FORCEINLINE static uint32 __PPO__equippedWeapon() { return STRUCT_OFFSET(ASurvivalGameCharacter, equippedWeapon); } \
	FORCEINLINE static uint32 __PPO__bIsAiming() { return STRUCT_OFFSET(ASurvivalGameCharacter, bIsAiming); }


#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_33_PROLOG \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_EVENT_PARMS


#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_RPC_WRAPPERS \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_CALLBACK_WRAPPERS \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_INCLASS \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_CALLBACK_WRAPPERS \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_INCLASS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVAL_GAME_API UClass* StaticClass<class ASurvivalGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
