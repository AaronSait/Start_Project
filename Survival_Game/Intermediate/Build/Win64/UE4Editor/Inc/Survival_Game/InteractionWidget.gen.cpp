// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_Game/Widgets/InteractionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionWidget() {}
// Cross Module References
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UInteractionWidget_NoRegister();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UInteractionWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Survival_Game();
	SURVIVAL_GAME_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInteractionWidget::execUpdateInteractionWidget)
	{
		P_GET_OBJECT(UInteractionComponent,Z_Param_interactionComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInteractionWidget(Z_Param_interactionComponent);
		P_NATIVE_END;
	}
	static FName NAME_UInteractionWidget_OnUpdateInteractionWidget = FName(TEXT("OnUpdateInteractionWidget"));
	void UInteractionWidget::OnUpdateInteractionWidget()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInteractionWidget_OnUpdateInteractionWidget),NULL);
	}
	void UInteractionWidget::StaticRegisterNativesUInteractionWidget()
	{
		UClass* Class = UInteractionWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateInteractionWidget", &UInteractionWidget::execUpdateInteractionWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionWidget_OnUpdateInteractionWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionWidget_OnUpdateInteractionWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/InteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionWidget_OnUpdateInteractionWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionWidget, nullptr, "OnUpdateInteractionWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionWidget_OnUpdateInteractionWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidget_OnUpdateInteractionWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionWidget_OnUpdateInteractionWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionWidget_OnUpdateInteractionWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionWidget_UpdateInteractionWidget_Statics
	{
		struct InteractionWidget_eventUpdateInteractionWidget_Parms
		{
			UInteractionComponent* interactionComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionWidget_UpdateInteractionWidget_Statics::NewProp_interactionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionWidget_UpdateInteractionWidget_Statics::NewProp_interactionComponent = { "interactionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionWidget_eventUpdateInteractionWidget_Parms, interactionComponent), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionWidget_UpdateInteractionWidget_Statics::NewProp_interactionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidget_UpdateInteractionWidget_Statics::NewProp_interactionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionWidget_UpdateInteractionWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionWidget_UpdateInteractionWidget_Statics::NewProp_interactionComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionWidget_UpdateInteractionWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Widgets/InteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionWidget_UpdateInteractionWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionWidget, nullptr, "UpdateInteractionWidget", nullptr, nullptr, sizeof(InteractionWidget_eventUpdateInteractionWidget_Parms), Z_Construct_UFunction_UInteractionWidget_UpdateInteractionWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidget_UpdateInteractionWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionWidget_UpdateInteractionWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionWidget_UpdateInteractionWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionWidget_UpdateInteractionWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionWidget_UpdateInteractionWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionWidget_NoRegister()
	{
		return UInteractionWidget::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_owningInteractionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owningInteractionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionWidget_OnUpdateInteractionWidget, "OnUpdateInteractionWidget" }, // 2373006358
		{ &Z_Construct_UFunction_UInteractionWidget_UpdateInteractionWidget, "UpdateInteractionWidget" }, // 3008339665
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/InteractionWidget.h" },
		{ "ModuleRelativePath", "Widgets/InteractionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionWidget_Statics::NewProp_owningInteractionComponent_MetaData[] = {
		{ "Category", "Interaction" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Widgets/InteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionWidget_Statics::NewProp_owningInteractionComponent = { "owningInteractionComponent", nullptr, (EPropertyFlags)0x001100000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionWidget, owningInteractionComponent), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionWidget_Statics::NewProp_owningInteractionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidget_Statics::NewProp_owningInteractionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionWidget_Statics::NewProp_owningInteractionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionWidget_Statics::ClassParams = {
		&UInteractionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionWidget, 3908717988);
	template<> SURVIVAL_GAME_API UClass* StaticClass<UInteractionWidget>()
	{
		return UInteractionWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionWidget(Z_Construct_UClass_UInteractionWidget, &UInteractionWidget::StaticClass, TEXT("/Script/Survival_Game"), TEXT("UInteractionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
