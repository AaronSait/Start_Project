// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASurvivalGameCharacter;
#ifdef SURVIVAL_GAME_InteractionComponent_generated_h
#error "InteractionComponent.generated.h already included, missing '#pragma once' in InteractionComponent.h"
#endif
#define SURVIVAL_GAME_InteractionComponent_generated_h

#define Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_16_DELEGATE \
struct _Script_Survival_Game_eventOnInteract_Parms \
{ \
	ASurvivalGameCharacter* character; \
}; \
static inline void FOnInteract_DelegateWrapper(const FMulticastScriptDelegate& OnInteract, ASurvivalGameCharacter* character) \
{ \
	_Script_Survival_Game_eventOnInteract_Parms Parms; \
	Parms.character=character; \
	OnInteract.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_15_DELEGATE \
struct _Script_Survival_Game_eventOnEndFocuse_Parms \
{ \
	ASurvivalGameCharacter* character; \
}; \
static inline void FOnEndFocuse_DelegateWrapper(const FMulticastScriptDelegate& OnEndFocuse, ASurvivalGameCharacter* character) \
{ \
	_Script_Survival_Game_eventOnEndFocuse_Parms Parms; \
	Parms.character=character; \
	OnEndFocuse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_14_DELEGATE \
struct _Script_Survival_Game_eventOnBeginFocuse_Parms \
{ \
	ASurvivalGameCharacter* character; \
}; \
static inline void FOnBeginFocuse_DelegateWrapper(const FMulticastScriptDelegate& OnBeginFocuse, ASurvivalGameCharacter* character) \
{ \
	_Script_Survival_Game_eventOnBeginFocuse_Parms Parms; \
	Parms.character=character; \
	OnBeginFocuse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_13_DELEGATE \
struct _Script_Survival_Game_eventOnEndInteract_Parms \
{ \
	ASurvivalGameCharacter* character; \
}; \
static inline void FOnEndInteract_DelegateWrapper(const FMulticastScriptDelegate& OnEndInteract, ASurvivalGameCharacter* character) \
{ \
	_Script_Survival_Game_eventOnEndInteract_Parms Parms; \
	Parms.character=character; \
	OnEndInteract.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_12_DELEGATE \
struct _Script_Survival_Game_eventOnBeginInteract_Parms \
{ \
	ASurvivalGameCharacter* character; \
}; \
static inline void FOnBeginInteract_DelegateWrapper(const FMulticastScriptDelegate& OnBeginInteract, ASurvivalGameCharacter* character) \
{ \
	_Script_Survival_Game_eventOnBeginInteract_Parms Parms; \
	Parms.character=character; \
	OnBeginInteract.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_SPARSE_DATA
#define Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInteractionPercentage); \
	DECLARE_FUNCTION(execSetInteractionActionText); \
	DECLARE_FUNCTION(execSetInteractionNameText);


#define Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInteractionPercentage); \
	DECLARE_FUNCTION(execSetInteractionActionText); \
	DECLARE_FUNCTION(execSetInteractionNameText);


#define Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionComponent, UWidgetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(UInteractionComponent)


#define Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionComponent, UWidgetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(UInteractionComponent)


#define Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionComponent(UInteractionComponent&&); \
	NO_API UInteractionComponent(const UInteractionComponent&); \
public:


#define Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionComponent(UInteractionComponent&&); \
	NO_API UInteractionComponent(const UInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractionComponent)


#define Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__characterInteracting() { return STRUCT_OFFSET(UInteractionComponent, characterInteracting); }


#define Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_18_PROLOG
#define Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_RPC_WRAPPERS \
	Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_INCLASS \
	Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_INCLASS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_Components_InteractionComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVAL_GAME_API UClass* StaticClass<class UInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Game_Source_Survival_Game_Components_InteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
