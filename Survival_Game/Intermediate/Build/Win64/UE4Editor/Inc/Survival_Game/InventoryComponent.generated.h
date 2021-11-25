// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItem;
struct FItemAddResult;
#ifdef SURVIVAL_GAME_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define SURVIVAL_GAME_InventoryComponent_generated_h

#define Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemAddResult_Statics; \
	SURVIVAL_GAME_API static class UScriptStruct* StaticStruct();


template<> SURVIVAL_GAME_API UScriptStruct* StaticStruct<struct FItemAddResult>();

#define Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_10_DELEGATE \
static inline void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated) \
{ \
	OnInventoryUpdated.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_SPARSE_DATA
#define Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRefreshInventory); \
	DECLARE_FUNCTION(execGetItems); \
	DECLARE_FUNCTION(execGetCapacity); \
	DECLARE_FUNCTION(execGetWeightCapacity); \
	DECLARE_FUNCTION(execSetCapacity); \
	DECLARE_FUNCTION(execSetWeightCapacity); \
	DECLARE_FUNCTION(execGetCurrentWeight); \
	DECLARE_FUNCTION(execFindItemsByClass); \
	DECLARE_FUNCTION(execFindItemByClass); \
	DECLARE_FUNCTION(execFindItem); \
	DECLARE_FUNCTION(execHasItem); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execTryAddItemFromClass); \
	DECLARE_FUNCTION(execTryAddItem);


#define Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefreshInventory); \
	DECLARE_FUNCTION(execGetItems); \
	DECLARE_FUNCTION(execGetCapacity); \
	DECLARE_FUNCTION(execGetWeightCapacity); \
	DECLARE_FUNCTION(execSetCapacity); \
	DECLARE_FUNCTION(execSetWeightCapacity); \
	DECLARE_FUNCTION(execGetCurrentWeight); \
	DECLARE_FUNCTION(execFindItemsByClass); \
	DECLARE_FUNCTION(execFindItemByClass); \
	DECLARE_FUNCTION(execFindItem); \
	DECLARE_FUNCTION(execHasItem); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execTryAddItemFromClass); \
	DECLARE_FUNCTION(execTryAddItem);


#define Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival_Game"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public:


#define Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent)


#define Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__weightCapacity() { return STRUCT_OFFSET(UInventoryComponent, weightCapacity); } \
	FORCEINLINE static uint32 __PPO__capacity() { return STRUCT_OFFSET(UInventoryComponent, capacity); } \
	FORCEINLINE static uint32 __PPO__items() { return STRUCT_OFFSET(UInventoryComponent, items); }


#define Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_72_PROLOG
#define Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_RPC_WRAPPERS \
	Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_INCLASS \
	Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_PRIVATE_PROPERTY_OFFSET \
	Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_SPARSE_DATA \
	Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_INCLASS_NO_PURE_DECLS \
	Survival_Game_Source_Survival_Game_Components_InventoryComponent_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVAL_GAME_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Game_Source_Survival_Game_Components_InventoryComponent_h


#define FOREACH_ENUM_EITEMADDRESULT(op) \
	op(EItemAddResult::IAR_NoItemsAdded) \
	op(EItemAddResult::IAR_SomeItemsAdded) \
	op(EItemAddResult::IAR_AllItemsAdded) 

enum class EItemAddResult : uint8;
template<> SURVIVAL_GAME_API UEnum* StaticEnum<EItemAddResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
