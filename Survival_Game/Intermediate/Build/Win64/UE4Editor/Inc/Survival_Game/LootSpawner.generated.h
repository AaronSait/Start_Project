// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SURVIVAL_GAME_LootSpawner_generated_h
#error "LootSpawner.generated.h already included, missing '#pragma once' in LootSpawner.h"
#endif
#define SURVIVAL_GAME_LootSpawner_generated_h

#define Survival_Game_Source_Survival_Game_World_LootSpawner_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootTableRow_Statics; \
	SURVIVAL_GAME_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> SURVIVAL_GAME_API UScriptStruct* StaticStruct<struct FLootTableRow>();

#define Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_SPARSE_DATA
#define Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOmnItemTaken); \
	DECLARE_FUNCTION(execSpawnItem);


#define Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOmnItemTaken); \
	DECLARE_FUNCTION(execSpawnItem);


#define Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALootSpawner(); \
	friend struct Z_Construct_UClass_ALootSpawner_Statics; \
public: \
	DECLARE_CLASS(ALootSpawner, ATargetPoint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(ALootSpawner)


#define Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_INCLASS \
private: \
	static void StaticRegisterNativesALootSpawner(); \
	friend struct Z_Construct_UClass_ALootSpawner_Statics; \
public: \
	DECLARE_CLASS(ALootSpawner, ATargetPoint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(ALootSpawner)


#define Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALootSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALootSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALootSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALootSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALootSpawner(ALootSpawner&&); \
	NO_API ALootSpawner(const ALootSpawner&); \
public:


#define Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALootSpawner(ALootSpawner&&); \
	NO_API ALootSpawner(const ALootSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALootSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALootSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALootSpawner)


#define Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__spawnedPickups() { return STRUCT_OFFSET(ALootSpawner, spawnedPickups); }


#define Survival_Game_Source_Survival_Game_World_LootSpawner_h_26_PROLOG
#define Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_RPC_WRAPPERS \
	Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_INCLASS \
	Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_INCLASS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_World_LootSpawner_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVAL_GAME_API UClass* StaticClass<class ALootSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Game_Source_Survival_Game_World_LootSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
