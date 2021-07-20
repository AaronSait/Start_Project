// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASurvivalGameCharacter;
#ifdef SURVIVAL_GAME_EquippableItems_generated_h
#error "EquippableItems.generated.h already included, missing '#pragma once' in EquippableItems.h"
#endif
#define SURVIVAL_GAME_EquippableItems_generated_h

#define Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_SPARSE_DATA
#define Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEquipStatusChanged); \
	DECLARE_FUNCTION(execIsEquipped); \
	DECLARE_FUNCTION(execUnEquip); \
	DECLARE_FUNCTION(execEquip);


#define Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEquipStatusChanged); \
	DECLARE_FUNCTION(execIsEquipped); \
	DECLARE_FUNCTION(execUnEquip); \
	DECLARE_FUNCTION(execEquip);


#define Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquippableItems(); \
	friend struct Z_Construct_UClass_UEquippableItems_Statics; \
public: \
	DECLARE_CLASS(UEquippableItems, UItem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(UEquippableItems)


#define Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUEquippableItems(); \
	friend struct Z_Construct_UClass_UEquippableItems_Statics; \
public: \
	DECLARE_CLASS(UEquippableItems, UItem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(UEquippableItems)


#define Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquippableItems(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquippableItems) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquippableItems); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquippableItems); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquippableItems(UEquippableItems&&); \
	NO_API UEquippableItems(const UEquippableItems&); \
public:


#define Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquippableItems(UEquippableItems&&); \
	NO_API UEquippableItems(const UEquippableItems&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquippableItems); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquippableItems); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEquippableItems)


#define Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bEquipped() { return STRUCT_OFFSET(UEquippableItems, bEquipped); }


#define Survival_Game_Source_Survival_Game_Items_EquippableItems_h_28_PROLOG
#define Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_RPC_WRAPPERS \
	Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_INCLASS \
	Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_INCLASS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_Items_EquippableItems_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVAL_GAME_API UClass* StaticClass<class UEquippableItems>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Game_Source_Survival_Game_Items_EquippableItems_h


#define FOREACH_ENUM_EEQUIPPABLESLOT(op) \
	op(EEquippableSlot::EIS_Head) \
	op(EEquippableSlot::EIS_Helmet) \
	op(EEquippableSlot::EIS_Chest) \
	op(EEquippableSlot::EIS_Vest) \
	op(EEquippableSlot::EIS_Legs) \
	op(EEquippableSlot::EIS_Feet) \
	op(EEquippableSlot::EIS_Hands) \
	op(EEquippableSlot::EIS_Backpack) \
	op(EEquippableSlot::EIS_PrimaryWeapon) \
	op(EEquippableSlot::EIS_Throwable) 

enum class EEquippableSlot : uint8;
template<> SURVIVAL_GAME_API UEnum* StaticEnum<EEquippableSlot>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
