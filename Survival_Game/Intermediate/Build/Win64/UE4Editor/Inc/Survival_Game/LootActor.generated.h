// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASurvivalGameCharacter;
#ifdef SURVIVAL_GAME_LootActor_generated_h
#error "LootActor.generated.h already included, missing '#pragma once' in LootActor.h"
#endif
#define SURVIVAL_GAME_LootActor_generated_h

#define Survival_Game_Source_Survival_Game_World_LootActor_h_12_SPARSE_DATA
#define Survival_Game_Source_Survival_Game_World_LootActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInteract);


#define Survival_Game_Source_Survival_Game_World_LootActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInteract);


#define Survival_Game_Source_Survival_Game_World_LootActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALootActor(); \
	friend struct Z_Construct_UClass_ALootActor_Statics; \
public: \
	DECLARE_CLASS(ALootActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(ALootActor)


#define Survival_Game_Source_Survival_Game_World_LootActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALootActor(); \
	friend struct Z_Construct_UClass_ALootActor_Statics; \
public: \
	DECLARE_CLASS(ALootActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(ALootActor)


#define Survival_Game_Source_Survival_Game_World_LootActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALootActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALootActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALootActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALootActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALootActor(ALootActor&&); \
	NO_API ALootActor(const ALootActor&); \
public:


#define Survival_Game_Source_Survival_Game_World_LootActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALootActor(ALootActor&&); \
	NO_API ALootActor(const ALootActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALootActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALootActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALootActor)


#define Survival_Game_Source_Survival_Game_World_LootActor_h_12_PRIVATE_PROPERTY_OFFSET
#define Survival_Game_Source_Survival_Game_World_LootActor_h_9_PROLOG
#define Survival_Game_Source_Survival_Game_World_LootActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_World_LootActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_World_LootActor_h_12_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_World_LootActor_h_12_RPC_WRAPPERS \
	Survival_Game_Source_Survival_Game_World_LootActor_h_12_INCLASS \
	Survival_Game_Source_Survival_Game_World_LootActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Game_Source_Survival_Game_World_LootActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_World_LootActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_World_LootActor_h_12_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_World_LootActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_World_LootActor_h_12_INCLASS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_World_LootActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVAL_GAME_API UClass* StaticClass<class ALootActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Game_Source_Survival_Game_World_LootActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
