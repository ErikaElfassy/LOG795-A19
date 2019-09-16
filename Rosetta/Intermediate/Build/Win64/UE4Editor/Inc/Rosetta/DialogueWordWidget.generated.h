// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROSETTA_DialogueWordWidget_generated_h
#error "DialogueWordWidget.generated.h already included, missing '#pragma once' in DialogueWordWidget.h"
#endif
#define ROSETTA_DialogueWordWidget_generated_h

#define LOG795_A19_Source_Rosetta_DialogueWordWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateTranslation) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TranslationString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateTranslation(Z_Param_TranslationString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateTranslation) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InCommitType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateTranslation(Z_Param_Out_InText,ETextCommit::Type(Z_Param_InCommitType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateTranslation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateTranslation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTranslationUnhover) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTranslationUnhover(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTranslationHover) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTranslationHover(); \
		P_NATIVE_END; \
	}


#define LOG795_A19_Source_Rosetta_DialogueWordWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateTranslation) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TranslationString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateTranslation(Z_Param_TranslationString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateTranslation) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InCommitType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateTranslation(Z_Param_Out_InText,ETextCommit::Type(Z_Param_InCommitType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateTranslation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateTranslation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTranslationUnhover) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTranslationUnhover(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTranslationHover) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTranslationHover(); \
		P_NATIVE_END; \
	}


#define LOG795_A19_Source_Rosetta_DialogueWordWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueWordWidget(); \
	friend struct Z_Construct_UClass_UDialogueWordWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueWordWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rosetta"), NO_API) \
	DECLARE_SERIALIZER(UDialogueWordWidget)


#define LOG795_A19_Source_Rosetta_DialogueWordWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueWordWidget(); \
	friend struct Z_Construct_UClass_UDialogueWordWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueWordWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rosetta"), NO_API) \
	DECLARE_SERIALIZER(UDialogueWordWidget)


#define LOG795_A19_Source_Rosetta_DialogueWordWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueWordWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueWordWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueWordWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueWordWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueWordWidget(UDialogueWordWidget&&); \
	NO_API UDialogueWordWidget(const UDialogueWordWidget&); \
public:


#define LOG795_A19_Source_Rosetta_DialogueWordWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueWordWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueWordWidget(UDialogueWordWidget&&); \
	NO_API UDialogueWordWidget(const UDialogueWordWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueWordWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueWordWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueWordWidget)


#define LOG795_A19_Source_Rosetta_DialogueWordWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TranslationButton() { return STRUCT_OFFSET(UDialogueWordWidget, TranslationButton); } \
	FORCEINLINE static uint32 __PPO__Original() { return STRUCT_OFFSET(UDialogueWordWidget, Original); } \
	FORCEINLINE static uint32 __PPO__Translation() { return STRUCT_OFFSET(UDialogueWordWidget, Translation); } \
	FORCEINLINE static uint32 __PPO__TranslationInput() { return STRUCT_OFFSET(UDialogueWordWidget, TranslationInput); }


#define LOG795_A19_Source_Rosetta_DialogueWordWidget_h_16_PROLOG
#define LOG795_A19_Source_Rosetta_DialogueWordWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LOG795_A19_Source_Rosetta_DialogueWordWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	LOG795_A19_Source_Rosetta_DialogueWordWidget_h_19_RPC_WRAPPERS \
	LOG795_A19_Source_Rosetta_DialogueWordWidget_h_19_INCLASS \
	LOG795_A19_Source_Rosetta_DialogueWordWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LOG795_A19_Source_Rosetta_DialogueWordWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LOG795_A19_Source_Rosetta_DialogueWordWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	LOG795_A19_Source_Rosetta_DialogueWordWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	LOG795_A19_Source_Rosetta_DialogueWordWidget_h_19_INCLASS_NO_PURE_DECLS \
	LOG795_A19_Source_Rosetta_DialogueWordWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSETTA_API UClass* StaticClass<class UDialogueWordWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LOG795_A19_Source_Rosetta_DialogueWordWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
