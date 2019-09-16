// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROSETTA_RosettaCharacter_generated_h
#error "RosettaCharacter.generated.h already included, missing '#pragma once' in RosettaCharacter.h"
#endif
#define ROSETTA_RosettaCharacter_generated_h

#define LOG795_A19_Source_Rosetta_RosettaCharacter_h_13_RPC_WRAPPERS
#define LOG795_A19_Source_Rosetta_RosettaCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define LOG795_A19_Source_Rosetta_RosettaCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARosettaCharacter(); \
	friend struct Z_Construct_UClass_ARosettaCharacter_Statics; \
public: \
	DECLARE_CLASS(ARosettaCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rosetta"), NO_API) \
	DECLARE_SERIALIZER(ARosettaCharacter)


#define LOG795_A19_Source_Rosetta_RosettaCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesARosettaCharacter(); \
	friend struct Z_Construct_UClass_ARosettaCharacter_Statics; \
public: \
	DECLARE_CLASS(ARosettaCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rosetta"), NO_API) \
	DECLARE_SERIALIZER(ARosettaCharacter)


#define LOG795_A19_Source_Rosetta_RosettaCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARosettaCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARosettaCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARosettaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARosettaCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARosettaCharacter(ARosettaCharacter&&); \
	NO_API ARosettaCharacter(const ARosettaCharacter&); \
public:


#define LOG795_A19_Source_Rosetta_RosettaCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARosettaCharacter(ARosettaCharacter&&); \
	NO_API ARosettaCharacter(const ARosettaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARosettaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARosettaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARosettaCharacter)


#define LOG795_A19_Source_Rosetta_RosettaCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ARosettaCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ARosettaCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__Reach() { return STRUCT_OFFSET(ARosettaCharacter, Reach); } \
	FORCEINLINE static uint32 __PPO__ReachLineHeightFromEyes() { return STRUCT_OFFSET(ARosettaCharacter, ReachLineHeightFromEyes); }


#define LOG795_A19_Source_Rosetta_RosettaCharacter_h_10_PROLOG
#define LOG795_A19_Source_Rosetta_RosettaCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LOG795_A19_Source_Rosetta_RosettaCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	LOG795_A19_Source_Rosetta_RosettaCharacter_h_13_RPC_WRAPPERS \
	LOG795_A19_Source_Rosetta_RosettaCharacter_h_13_INCLASS \
	LOG795_A19_Source_Rosetta_RosettaCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LOG795_A19_Source_Rosetta_RosettaCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LOG795_A19_Source_Rosetta_RosettaCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	LOG795_A19_Source_Rosetta_RosettaCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	LOG795_A19_Source_Rosetta_RosettaCharacter_h_13_INCLASS_NO_PURE_DECLS \
	LOG795_A19_Source_Rosetta_RosettaCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSETTA_API UClass* StaticClass<class ARosettaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LOG795_A19_Source_Rosetta_RosettaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
