// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Player/SurvivalPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalPlayerController() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvivalPlayerController_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_ASurvivalPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
// End Cross Module References
	static FName NAME_ASurvivalPlayerController_HideLootMenu = FName(TEXT("HideLootMenu"));
	void ASurvivalPlayerController::HideLootMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASurvivalPlayerController_HideLootMenu),NULL);
	}
	static FName NAME_ASurvivalPlayerController_OnHitPlayer = FName(TEXT("OnHitPlayer"));
	void ASurvivalPlayerController::OnHitPlayer()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASurvivalPlayerController_OnHitPlayer),NULL);
	}
	static FName NAME_ASurvivalPlayerController_ShowDeathMenu = FName(TEXT("ShowDeathMenu"));
	void ASurvivalPlayerController::ShowDeathMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASurvivalPlayerController_ShowDeathMenu),NULL);
	}
	static FName NAME_ASurvivalPlayerController_ShowIngameUI = FName(TEXT("ShowIngameUI"));
	void ASurvivalPlayerController::ShowIngameUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASurvivalPlayerController_ShowIngameUI),NULL);
	}
	static FName NAME_ASurvivalPlayerController_ShowLootMenu = FName(TEXT("ShowLootMenu"));
	void ASurvivalPlayerController::ShowLootMenu(const UInventoryComponent* lootSource)
	{
		SurvivalPlayerController_eventShowLootMenu_Parms Parms;
		Parms.lootSource=lootSource;
		ProcessEvent(FindFunctionChecked(NAME_ASurvivalPlayerController_ShowLootMenu),&Parms);
	}
	static FName NAME_ASurvivalPlayerController_ShowNotification = FName(TEXT("ShowNotification"));
	void ASurvivalPlayerController::ShowNotification(FText const& message)
	{
		SurvivalPlayerController_eventShowNotification_Parms Parms;
		Parms.message=message;
		ProcessEvent(FindFunctionChecked(NAME_ASurvivalPlayerController_ShowNotification),&Parms);
	}
	void ASurvivalPlayerController::StaticRegisterNativesASurvivalPlayerController()
	{
	}
	struct Z_Construct_UFunction_ASurvivalPlayerController_HideLootMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalPlayerController_HideLootMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/SurvivalPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalPlayerController_HideLootMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalPlayerController, nullptr, "HideLootMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalPlayerController_HideLootMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalPlayerController_HideLootMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalPlayerController_HideLootMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASurvivalPlayerController_HideLootMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalPlayerController_OnHitPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalPlayerController_OnHitPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/SurvivalPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalPlayerController_OnHitPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalPlayerController, nullptr, "OnHitPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalPlayerController_OnHitPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalPlayerController_OnHitPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalPlayerController_OnHitPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASurvivalPlayerController_OnHitPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalPlayerController_ShowDeathMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalPlayerController_ShowDeathMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/SurvivalPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalPlayerController_ShowDeathMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalPlayerController, nullptr, "ShowDeathMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalPlayerController_ShowDeathMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalPlayerController_ShowDeathMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalPlayerController_ShowDeathMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASurvivalPlayerController_ShowDeathMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalPlayerController_ShowIngameUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalPlayerController_ShowIngameUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/SurvivalPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalPlayerController_ShowIngameUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalPlayerController, nullptr, "ShowIngameUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalPlayerController_ShowIngameUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalPlayerController_ShowIngameUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalPlayerController_ShowIngameUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASurvivalPlayerController_ShowIngameUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalPlayerController_ShowLootMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lootSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lootSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalPlayerController_ShowLootMenu_Statics::NewProp_lootSource_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivalPlayerController_ShowLootMenu_Statics::NewProp_lootSource = { "lootSource", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivalPlayerController_eventShowLootMenu_Parms, lootSource), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalPlayerController_ShowLootMenu_Statics::NewProp_lootSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalPlayerController_ShowLootMenu_Statics::NewProp_lootSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalPlayerController_ShowLootMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalPlayerController_ShowLootMenu_Statics::NewProp_lootSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalPlayerController_ShowLootMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/SurvivalPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalPlayerController_ShowLootMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalPlayerController, nullptr, "ShowLootMenu", nullptr, nullptr, sizeof(SurvivalPlayerController_eventShowLootMenu_Parms), Z_Construct_UFunction_ASurvivalPlayerController_ShowLootMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalPlayerController_ShowLootMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalPlayerController_ShowLootMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalPlayerController_ShowLootMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalPlayerController_ShowLootMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASurvivalPlayerController_ShowLootMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivalPlayerController_ShowNotification_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalPlayerController_ShowNotification_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ASurvivalPlayerController_ShowNotification_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivalPlayerController_eventShowNotification_Parms, message), METADATA_PARAMS(Z_Construct_UFunction_ASurvivalPlayerController_ShowNotification_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalPlayerController_ShowNotification_Statics::NewProp_message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalPlayerController_ShowNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalPlayerController_ShowNotification_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalPlayerController_ShowNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/SurvivalPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalPlayerController_ShowNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalPlayerController, nullptr, "ShowNotification", nullptr, nullptr, sizeof(SurvivalPlayerController_eventShowNotification_Parms), Z_Construct_UFunction_ASurvivalPlayerController_ShowNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalPlayerController_ShowNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalPlayerController_ShowNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalPlayerController_ShowNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalPlayerController_ShowNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASurvivalPlayerController_ShowNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASurvivalPlayerController_NoRegister()
	{
		return ASurvivalPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASurvivalPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvivalPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASurvivalPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASurvivalPlayerController_HideLootMenu, "HideLootMenu" }, // 2050993571
		{ &Z_Construct_UFunction_ASurvivalPlayerController_OnHitPlayer, "OnHitPlayer" }, // 2131572114
		{ &Z_Construct_UFunction_ASurvivalPlayerController_ShowDeathMenu, "ShowDeathMenu" }, // 1521364149
		{ &Z_Construct_UFunction_ASurvivalPlayerController_ShowIngameUI, "ShowIngameUI" }, // 2054550860
		{ &Z_Construct_UFunction_ASurvivalPlayerController_ShowLootMenu, "ShowLootMenu" }, // 959178355
		{ &Z_Construct_UFunction_ASurvivalPlayerController_ShowNotification, "ShowNotification" }, // 559338344
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/SurvivalPlayerController.h" },
		{ "ModuleRelativePath", "Player/SurvivalPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvivalPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalPlayerController_Statics::ClassParams = {
		&ASurvivalPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASurvivalPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvivalPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASurvivalPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASurvivalPlayerController, 1052986524);
	template<> SURVIVAL_GAME_API UClass* StaticClass<ASurvivalPlayerController>()
	{
		return ASurvivalPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASurvivalPlayerController(Z_Construct_UClass_ASurvivalPlayerController, &ASurvivalPlayerController::StaticClass, TEXT("/Script/Survival_Game"), TEXT("ASurvivalPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
