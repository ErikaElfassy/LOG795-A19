// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rosetta/RosettaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRosettaGameMode() {}
// Cross Module References
	ROSETTA_API UClass* Z_Construct_UClass_ARosettaGameMode_NoRegister();
	ROSETTA_API UClass* Z_Construct_UClass_ARosettaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Rosetta();
// End Cross Module References
	void ARosettaGameMode::StaticRegisterNativesARosettaGameMode()
	{
	}
	UClass* Z_Construct_UClass_ARosettaGameMode_NoRegister()
	{
		return ARosettaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARosettaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARosettaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Rosetta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARosettaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RosettaGameMode.h" },
		{ "ModuleRelativePath", "RosettaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARosettaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARosettaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARosettaGameMode_Statics::ClassParams = {
		&ARosettaGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ARosettaGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARosettaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARosettaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARosettaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARosettaGameMode, 1312002030);
	template<> ROSETTA_API UClass* StaticClass<ARosettaGameMode>()
	{
		return ARosettaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARosettaGameMode(Z_Construct_UClass_ARosettaGameMode, &ARosettaGameMode::StaticClass, TEXT("/Script/Rosetta"), TEXT("ARosettaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARosettaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
