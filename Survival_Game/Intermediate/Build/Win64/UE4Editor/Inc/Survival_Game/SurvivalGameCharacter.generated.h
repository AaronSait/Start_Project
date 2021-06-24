// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURVIVAL_GAME_SurvivalGameCharacter_generated_h
#error "SurvivalGameCharacter.generated.h already included, missing '#pragma once' in SurvivalGameCharacter.h"
#endif
#define SURVIVAL_GAME_SurvivalGameCharacter_generated_h

#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractionData_Statics; \
	SURVIVAL_GAME_API static class UScriptStruct* StaticStruct();


template<> SURVIVAL_GAME_API UScriptStruct* StaticStruct<struct FInteractionData>();

#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_SPARSE_DATA
#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_RPC_WRAPPERS
#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivalGameCharacter(); \
	friend struct Z_Construct_UClass_ASurvivalGameCharacter_Statics; \
public: \
	DECLARE_CLASS(ASurvivalGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalGameCharacter)


#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_INCLASS \
private: \
	static void StaticRegisterNativesASurvivalGameCharacter(); \
	friend struct Z_Construct_UClass_ASurvivalGameCharacter_Statics; \
public: \
	DECLARE_CLASS(ASurvivalGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalGameCharacter)


#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_STANDARD_CONSTRUCTORS \
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


#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalGameCharacter(ASurvivalGameCharacter&&); \
	NO_API ASurvivalGameCharacter(const ASurvivalGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASurvivalGameCharacter)


#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__interactionCheckFrequence() { return STRUCT_OFFSET(ASurvivalGameCharacter, interactionCheckFrequence); } \
	FORCEINLINE static uint32 __PPO__interactionCheckDistance() { return STRUCT_OFFSET(ASurvivalGameCharacter, interactionCheckDistance); } \
	FORCEINLINE static uint32 __PPO__interactionData() { return STRUCT_OFFSET(ASurvivalGameCharacter, interactionData); }


#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_29_PROLOG
#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_RPC_WRAPPERS \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_INCLASS \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_INCLASS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVAL_GAME_API UClass* StaticClass<class ASurvivalGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Game_Source_Survival_Game_Player_SurvivalGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
