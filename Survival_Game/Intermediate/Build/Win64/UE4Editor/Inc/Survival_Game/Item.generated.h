// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASurvivalGameCharacter;
#ifdef SURVIVAL_GAME_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define SURVIVAL_GAME_Item_generated_h

#define Survival_Game_Source_Survival_Game_Items_Item_h_12_DELEGATE \
static inline void FOnItemModified_DelegateWrapper(const FMulticastScriptDelegate& OnItemModified) \
{ \
	OnItemModified.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Survival_Game_Source_Survival_Game_Items_Item_h_28_SPARSE_DATA
#define Survival_Game_Source_Survival_Game_Items_Item_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShouldShowInInventory); \
	DECLARE_FUNCTION(execGetStackWeight); \
	DECLARE_FUNCTION(execGetQuantity); \
	DECLARE_FUNCTION(execSetQuantity);


#define Survival_Game_Source_Survival_Game_Items_Item_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShouldShowInInventory); \
	DECLARE_FUNCTION(execGetStackWeight); \
	DECLARE_FUNCTION(execGetQuantity); \
	DECLARE_FUNCTION(execSetQuantity);


#define Survival_Game_Source_Survival_Game_Items_Item_h_28_EVENT_PARMS \
	struct Item_eventOnUse_Parms \
	{ \
		ASurvivalGameCharacter* character; \
	};


#define Survival_Game_Source_Survival_Game_Items_Item_h_28_CALLBACK_WRAPPERS
#define Survival_Game_Source_Survival_Game_Items_Item_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItem(); \
	friend struct Z_Construct_UClass_UItem_Statics; \
public: \
	DECLARE_CLASS(UItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(UItem)


#define Survival_Game_Source_Survival_Game_Items_Item_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUItem(); \
	friend struct Z_Construct_UClass_UItem_Statics; \
public: \
	DECLARE_CLASS(UItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(UItem)


#define Survival_Game_Source_Survival_Game_Items_Item_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItem(UItem&&); \
	NO_API UItem(const UItem&); \
public:


#define Survival_Game_Source_Survival_Game_Items_Item_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItem(UItem&&); \
	NO_API UItem(const UItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItem)


#define Survival_Game_Source_Survival_Game_Items_Item_h_28_PRIVATE_PROPERTY_OFFSET
#define Survival_Game_Source_Survival_Game_Items_Item_h_25_PROLOG \
	Survival_Game_Source_Survival_Game_Items_Item_h_28_EVENT_PARMS


#define Survival_Game_Source_Survival_Game_Items_Item_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_Items_Item_h_28_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_Items_Item_h_28_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_Items_Item_h_28_RPC_WRAPPERS \
	Survival_Game_Source_Survival_Game_Items_Item_h_28_CALLBACK_WRAPPERS \
	Survival_Game_Source_Survival_Game_Items_Item_h_28_INCLASS \
	Survival_Game_Source_Survival_Game_Items_Item_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Game_Source_Survival_Game_Items_Item_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_Items_Item_h_28_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_Items_Item_h_28_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_Items_Item_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_Items_Item_h_28_CALLBACK_WRAPPERS \
	Survival_Game_Source_Survival_Game_Items_Item_h_28_INCLASS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_Items_Item_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVAL_GAME_API UClass* StaticClass<class UItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Game_Source_Survival_Game_Items_Item_h


#define FOREACH_ENUM_EITEMREARITY(op) \
	op(EItemRearity::IR_Common) \
	op(EItemRearity::IR_Uncommon) \
	op(EItemRearity::IR_Rear) \
	op(EItemRearity::IR_VeryRear) \
	op(EItemRearity::IR_Legendary) 

enum class EItemRearity : uint8;
template<> SURVIVAL_GAME_API UEnum* StaticEnum<EItemRearity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
