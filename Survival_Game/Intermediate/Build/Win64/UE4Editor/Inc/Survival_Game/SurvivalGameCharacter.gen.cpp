// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Player/SurvivalGameCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalGameCharacter() {}
// Cross Module References
	SURVIVAL_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionData();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvivalGameCharacter_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvivalGameCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FInteractionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SURVIVAL_GAME_API uint32 Get_Z_Construct_UScriptStruct_FInteractionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionData, Z_Construct_UPackage__Script_Survival_Game(), TEXT("InteractionData"), sizeof(FInteractionData), Get_Z_Construct_UScriptStruct_FInteractionData_Hash());
	}
	return Singleton;
}
template<> SURVIVAL_GAME_API UScriptStruct* StaticStruct<FInteractionData>()
{
	return FInteractionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteractionData(FInteractionData::StaticStruct, TEXT("/Script/Survival_Game"), TEXT("InteractionData"), false, nullptr, nullptr);
static struct FScriptStruct_Survival_Game_StaticRegisterNativesFInteractionData
{
	FScriptStruct_Survival_Game_StaticRegisterNativesFInteractionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InteractionData")),new UScriptStruct::TCppStructOps<FInteractionData>);
	}
} ScriptStruct_Survival_Game_StaticRegisterNativesFInteractionData;
	struct Z_Construct_UScriptStruct_FInteractionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewedInteractionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_viewedInteractionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lastInteractionCheckTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lastInteractionCheckTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInteractHeld_MetaData[];
#endif
		static void NewProp_bInteractHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInteractHeld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_viewedInteractionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_viewedInteractionComponent = { "viewedInteractionComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionData, viewedInteractionComponent), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_viewedInteractionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_viewedInteractionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_lastInteractionCheckTime_MetaData[] = {
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_lastInteractionCheckTime = { "lastInteractionCheckTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionData, lastInteractionCheckTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_lastInteractionCheckTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_lastInteractionCheckTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_bInteractHeld_MetaData[] = {
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_bInteractHeld_SetBit(void* Obj)
	{
		((FInteractionData*)Obj)->bInteractHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_bInteractHeld = { "bInteractHeld", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInteractionData), &Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_bInteractHeld_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_bInteractHeld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_bInteractHeld_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_viewedInteractionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_lastInteractionCheckTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_bInteractHeld,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
		nullptr,
		&NewStructOps,
		"InteractionData",
		sizeof(FInteractionData),
		alignof(FInteractionData),
		Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteractionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Survival_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteractionData"), sizeof(FInteractionData), Get_Z_Construct_UScriptStruct_FInteractionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteractionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteractionData_Hash() { return 2660773933U; }
	void ASurvivalGameCharacter::StaticRegisterNativesASurvivalGameCharacter()
	{
	}
	UClass* Z_Construct_UClass_ASurvivalGameCharacter_NoRegister()
	{
		return ASurvivalGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASurvivalGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_springArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_springArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_helmetMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_helmetMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chestMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chestMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_legsMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_legsMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vestMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_vestMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_feetMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_feetMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handsMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_handsMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_backpackMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_backpackMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_walkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_walkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSprinting_MetaData[];
#endif
		static void NewProp_bSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSprinting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionCheckFrequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interactionCheckFrequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionCheckDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interactionCheckDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_interactionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvivalGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/SurvivalGameCharacter.h" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_springArm_MetaData[] = {
		{ "AllowPrivatAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_springArm = { "springArm", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_springArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_springArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_camera = { "camera", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_helmetMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_helmetMesh = { "helmetMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, helmetMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_helmetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_helmetMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_chestMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_chestMesh = { "chestMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, chestMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_chestMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_chestMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_legsMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_legsMesh = { "legsMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, legsMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_legsMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_legsMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_vestMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_vestMesh = { "vestMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, vestMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_vestMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_vestMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_feetMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_feetMesh = { "feetMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, feetMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_feetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_feetMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_handsMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_handsMesh = { "handsMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, handsMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_handsMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_handsMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_backpackMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_backpackMesh = { "backpackMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, backpackMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_backpackMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_backpackMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_sprintSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_sprintSpeed = { "sprintSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, sprintSpeed), METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_sprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_sprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_walkSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_walkSpeed = { "walkSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, walkSpeed), METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_walkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_walkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_bSprinting_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_bSprinting_SetBit(void* Obj)
	{
		((ASurvivalGameCharacter*)Obj)->bSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_bSprinting = { "bSprinting", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASurvivalGameCharacter), &Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_bSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_bSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_bSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckFrequence_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckFrequence = { "interactionCheckFrequence", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, interactionCheckFrequence), METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckFrequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckFrequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckDistance = { "interactionCheckDistance", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, interactionCheckDistance), METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionData_MetaData[] = {
		{ "ModuleRelativePath", "Player/SurvivalGameCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionData = { "interactionData", nullptr, (EPropertyFlags)0x0020088000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalGameCharacter, interactionData), Z_Construct_UScriptStruct_FInteractionData, METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASurvivalGameCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_springArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_helmetMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_chestMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_legsMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_vestMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_feetMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_handsMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_backpackMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_sprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_walkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_bSprinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckFrequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionCheckDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalGameCharacter_Statics::NewProp_interactionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvivalGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalGameCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalGameCharacter_Statics::ClassParams = {
		&ASurvivalGameCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASurvivalGameCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvivalGameCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASurvivalGameCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASurvivalGameCharacter, 1305444914);
	template<> SURVIVAL_GAME_API UClass* StaticClass<ASurvivalGameCharacter>()
	{
		return ASurvivalGameCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASurvivalGameCharacter(Z_Construct_UClass_ASurvivalGameCharacter, &ASurvivalGameCharacter::StaticClass, TEXT("/Script/Survival_Game"), TEXT("ASurvivalGameCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalGameCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
