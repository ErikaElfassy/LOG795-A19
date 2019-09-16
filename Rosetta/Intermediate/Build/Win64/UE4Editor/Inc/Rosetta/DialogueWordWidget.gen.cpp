// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rosetta/DialogueWordWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueWordWidget() {}
// Cross Module References
	ROSETTA_API UClass* Z_Construct_UClass_UDialogueWordWidget_NoRegister();
	ROSETTA_API UClass* Z_Construct_UClass_UDialogueWordWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Rosetta();
	ROSETTA_API UFunction* Z_Construct_UFunction_UDialogueWordWidget_ActivateTranslation();
	ROSETTA_API UFunction* Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	ROSETTA_API UFunction* Z_Construct_UFunction_UDialogueWordWidget_OnTranslationHover();
	ROSETTA_API UFunction* Z_Construct_UFunction_UDialogueWordWidget_OnTranslationUnhover();
	ROSETTA_API UFunction* Z_Construct_UFunction_UDialogueWordWidget_UpdateTranslation();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UDialogueWordWidget::StaticRegisterNativesUDialogueWordWidget()
	{
		UClass* Class = UDialogueWordWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateTranslation", &UDialogueWordWidget::execActivateTranslation },
			{ "DeactivateTranslation", &UDialogueWordWidget::execDeactivateTranslation },
			{ "OnTranslationHover", &UDialogueWordWidget::execOnTranslationHover },
			{ "OnTranslationUnhover", &UDialogueWordWidget::execOnTranslationUnhover },
			{ "UpdateTranslation", &UDialogueWordWidget::execUpdateTranslation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueWordWidget_ActivateTranslation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWordWidget_ActivateTranslation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DialogueWordWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWordWidget_ActivateTranslation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWordWidget, nullptr, "ActivateTranslation", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWordWidget_ActivateTranslation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogueWordWidget_ActivateTranslation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWordWidget_ActivateTranslation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueWordWidget_ActivateTranslation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation_Statics
	{
		struct DialogueWordWidget_eventDeactivateTranslation_Parms
		{
			FText InText;
			TEnumAsByte<ETextCommit::Type> InCommitType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCommitType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation_Statics::NewProp_InCommitType = { "InCommitType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueWordWidget_eventDeactivateTranslation_Parms, InCommitType), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueWordWidget_eventDeactivateTranslation_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation_Statics::NewProp_InText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation_Statics::NewProp_InCommitType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DialogueWordWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWordWidget, nullptr, "DeactivateTranslation", sizeof(DialogueWordWidget_eventDeactivateTranslation_Parms), Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueWordWidget_OnTranslationHover_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWordWidget_OnTranslationHover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DialogueWordWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWordWidget_OnTranslationHover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWordWidget, nullptr, "OnTranslationHover", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWordWidget_OnTranslationHover_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogueWordWidget_OnTranslationHover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWordWidget_OnTranslationHover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueWordWidget_OnTranslationHover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueWordWidget_OnTranslationUnhover_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWordWidget_OnTranslationUnhover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DialogueWordWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWordWidget_OnTranslationUnhover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWordWidget, nullptr, "OnTranslationUnhover", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWordWidget_OnTranslationUnhover_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogueWordWidget_OnTranslationUnhover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWordWidget_OnTranslationUnhover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueWordWidget_OnTranslationUnhover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueWordWidget_UpdateTranslation_Statics
	{
		struct DialogueWordWidget_eventUpdateTranslation_Parms
		{
			FString TranslationString;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TranslationString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueWordWidget_UpdateTranslation_Statics::NewProp_TranslationString = { "TranslationString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueWordWidget_eventUpdateTranslation_Parms, TranslationString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWordWidget_UpdateTranslation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWordWidget_UpdateTranslation_Statics::NewProp_TranslationString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWordWidget_UpdateTranslation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DialogueWordWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWordWidget_UpdateTranslation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWordWidget, nullptr, "UpdateTranslation", sizeof(DialogueWordWidget_eventUpdateTranslation_Parms), Z_Construct_UFunction_UDialogueWordWidget_UpdateTranslation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDialogueWordWidget_UpdateTranslation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWordWidget_UpdateTranslation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogueWordWidget_UpdateTranslation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWordWidget_UpdateTranslation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueWordWidget_UpdateTranslation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDialogueWordWidget_NoRegister()
	{
		return UDialogueWordWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueWordWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslationInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Original_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Original;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslationButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueWordWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Rosetta,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueWordWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueWordWidget_ActivateTranslation, "ActivateTranslation" }, // 3984111024
		{ &Z_Construct_UFunction_UDialogueWordWidget_DeactivateTranslation, "DeactivateTranslation" }, // 189567844
		{ &Z_Construct_UFunction_UDialogueWordWidget_OnTranslationHover, "OnTranslationHover" }, // 1339062758
		{ &Z_Construct_UFunction_UDialogueWordWidget_OnTranslationUnhover, "OnTranslationUnhover" }, // 1887229057
		{ &Z_Construct_UFunction_UDialogueWordWidget_UpdateTranslation, "UpdateTranslation" }, // 535959234
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWordWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DialogueWordWidget.h" },
		{ "ModuleRelativePath", "DialogueWordWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_TranslationInput_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DialogueWordWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_TranslationInput = { "TranslationInput", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueWordWidget, TranslationInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_TranslationInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_TranslationInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_Translation_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DialogueWordWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueWordWidget, Translation), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_Translation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_Original_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DialogueWordWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_Original = { "Original", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueWordWidget, Original), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_Original_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_Original_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_TranslationButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DialogueWordWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_TranslationButton = { "TranslationButton", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueWordWidget, TranslationButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_TranslationButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_TranslationButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueWordWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_TranslationInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_Translation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_Original,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWordWidget_Statics::NewProp_TranslationButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueWordWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueWordWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueWordWidget_Statics::ClassParams = {
		&UDialogueWordWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueWordWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UDialogueWordWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueWordWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDialogueWordWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueWordWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueWordWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueWordWidget, 3778885010);
	template<> ROSETTA_API UClass* StaticClass<UDialogueWordWidget>()
	{
		return UDialogueWordWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueWordWidget(Z_Construct_UClass_UDialogueWordWidget, &UDialogueWordWidget::StaticClass, TEXT("/Script/Rosetta"), TEXT("UDialogueWordWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueWordWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
