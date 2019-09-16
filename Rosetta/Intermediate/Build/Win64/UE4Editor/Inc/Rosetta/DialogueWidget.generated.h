// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROSETTA_DialogueWidget_generated_h
#error "DialogueWidget.generated.h already included, missing '#pragma once' in DialogueWidget.h"
#endif
#define ROSETTA_DialogueWidget_generated_h

#define LOG795_A19_Source_Rosetta_DialogueWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeactivateResponse) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InCommitType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateResponse(Z_Param_Out_InText,ETextCommit::Type(Z_Param_InCommitType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOkayPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OkayPressed(); \
		P_NATIVE_END; \
	}


#define LOG795_A19_Source_Rosetta_DialogueWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeactivateResponse) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_GET_PROPERTY(UByteProperty,Z_Param_InCommitType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateResponse(Z_Param_Out_InText,ETextCommit::Type(Z_Param_InCommitType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOkayPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OkayPressed(); \
		P_NATIVE_END; \
	}


#define LOG795_A19_Source_Rosetta_DialogueWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueWidget(); \
	friend struct Z_Construct_UClass_UDialogueWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rosetta"), NO_API) \
	DECLARE_SERIALIZER(UDialogueWidget)


#define LOG795_A19_Source_Rosetta_DialogueWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueWidget(); \
	friend struct Z_Construct_UClass_UDialogueWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rosetta"), NO_API) \
	DECLARE_SERIALIZER(UDialogueWidget)


#define LOG795_A19_Source_Rosetta_DialogueWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueWidget(UDialogueWidget&&); \
	NO_API UDialogueWidget(const UDialogueWidget&); \
public:


#define LOG795_A19_Source_Rosetta_DialogueWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueWidget(UDialogueWidget&&); \
	NO_API UDialogueWidget(const UDialogueWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueWidget)


#define LOG795_A19_Source_Rosetta_DialogueWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OkayButton() { return STRUCT_OFFSET(UDialogueWidget, OkayButton); } \
	FORCEINLINE static uint32 __PPO__WordsPanel() { return STRUCT_OFFSET(UDialogueWidget, WordsPanel); } \
	FORCEINLINE static uint32 __PPO__DWWClass() { return STRUCT_OFFSET(UDialogueWidget, DWWClass); } \
	FORCEINLINE static uint32 __PPO__ResponseInput() { return STRUCT_OFFSET(UDialogueWidget, ResponseInput); }


#define LOG795_A19_Source_Rosetta_DialogueWidget_h_16_PROLOG
#define LOG795_A19_Source_Rosetta_DialogueWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LOG795_A19_Source_Rosetta_DialogueWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	LOG795_A19_Source_Rosetta_DialogueWidget_h_19_RPC_WRAPPERS \
	LOG795_A19_Source_Rosetta_DialogueWidget_h_19_INCLASS \
	LOG795_A19_Source_Rosetta_DialogueWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LOG795_A19_Source_Rosetta_DialogueWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LOG795_A19_Source_Rosetta_DialogueWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	LOG795_A19_Source_Rosetta_DialogueWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	LOG795_A19_Source_Rosetta_DialogueWidget_h_19_INCLASS_NO_PURE_DECLS \
	LOG795_A19_Source_Rosetta_DialogueWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSETTA_API UClass* StaticClass<class UDialogueWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LOG795_A19_Source_Rosetta_DialogueWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
