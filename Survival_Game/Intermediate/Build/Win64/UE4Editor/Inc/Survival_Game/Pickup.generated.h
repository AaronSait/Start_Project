// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASurvivalGameCharacter;
#ifdef SURVIVAL_GAME_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define SURVIVAL_GAME_Pickup_generated_h

#define Survival_Game_Source_Survival_Game_World_Pickup_h_12_SPARSE_DATA
#define Survival_Game_Source_Survival_Game_World_Pickup_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTakePickup); \
	DECLARE_FUNCTION(execOnItemModified);


#define Survival_Game_Source_Survival_Game_World_Pickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTakePickup); \
	DECLARE_FUNCTION(execOnItemModified);


#define Survival_Game_Source_Survival_Game_World_Pickup_h_12_EVENT_PARMS
#define Survival_Game_Source_Survival_Game_World_Pickup_h_12_CALLBACK_WRAPPERS
#define Survival_Game_Source_Survival_Game_World_Pickup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define Survival_Game_Source_Survival_Game_World_Pickup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define Survival_Game_Source_Survival_Game_World_Pickup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define Survival_Game_Source_Survival_Game_World_Pickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define Survival_Game_Source_Survival_Game_World_Pickup_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__item() { return STRUCT_OFFSET(APickup, item); } \
	FORCEINLINE static uint32 __PPO__pickupMesh() { return STRUCT_OFFSET(APickup, pickupMesh); } \
	FORCEINLINE static uint32 __PPO__interactionComponent() { return STRUCT_OFFSET(APickup, interactionComponent); }


#define Survival_Game_Source_Survival_Game_World_Pickup_h_9_PROLOG \
	Survival_Game_Source_Survival_Game_World_Pickup_h_12_EVENT_PARMS


#define Survival_Game_Source_Survival_Game_World_Pickup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_World_Pickup_h_12_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_World_Pickup_h_12_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_World_Pickup_h_12_RPC_WRAPPERS \
	Survival_Game_Source_Survival_Game_World_Pickup_h_12_CALLBACK_WRAPPERS \
	Survival_Game_Source_Survival_Game_World_Pickup_h_12_INCLASS \
	Survival_Game_Source_Survival_Game_World_Pickup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Game_Source_Survival_Game_World_Pickup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_World_Pickup_h_12_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_World_Pickup_h_12_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_World_Pickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_World_Pickup_h_12_CALLBACK_WRAPPERS \
	Survival_Game_Source_Survival_Game_World_Pickup_h_12_INCLASS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_World_Pickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVAL_GAME_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Game_Source_Survival_Game_World_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
