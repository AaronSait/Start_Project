// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvival_Game_init() {}
	SURVIVAL_GAME_API UFunction* Z_Construct_UDelegateFunction_Survival_Game_OnBeginInteract__DelegateSignature();
	SURVIVAL_GAME_API UFunction* Z_Construct_UDelegateFunction_Survival_Game_OnEndInteract__DelegateSignature();
	SURVIVAL_GAME_API UFunction* Z_Construct_UDelegateFunction_Survival_Game_OnBeginFocuse__DelegateSignature();
	SURVIVAL_GAME_API UFunction* Z_Construct_UDelegateFunction_Survival_Game_OnEndFocuse__DelegateSignature();
	SURVIVAL_GAME_API UFunction* Z_Construct_UDelegateFunction_Survival_Game_OnInteract__DelegateSignature();
	SURVIVAL_GAME_API UFunction* Z_Construct_UDelegateFunction_Survival_Game_OnInventoryUpdated__DelegateSignature();
	SURVIVAL_GAME_API UFunction* Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature();
	SURVIVAL_GAME_API UFunction* Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Survival_Game()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Survival_Game_OnBeginInteract__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Survival_Game_OnEndInteract__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Survival_Game_OnBeginFocuse__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Survival_Game_OnEndFocuse__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Survival_Game_OnInteract__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Survival_Game_OnInventoryUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Survival_Game_OnItemModified__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Survival_Game_OnEquippedItemChanged__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/Survival_Game",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8EF503B2,
				0x65CCE74C,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
