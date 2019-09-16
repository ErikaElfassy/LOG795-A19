// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rosetta/InteractableActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableActor() {}
// Cross Module References
	ROSETTA_API UClass* Z_Construct_UClass_AInteractableActor_NoRegister();
	ROSETTA_API UClass* Z_Construct_UClass_AInteractableActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Rosetta();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AInteractableActor::StaticRegisterNativesAInteractableActor()
	{
	}
	UClass* Z_Construct_UClass_AInteractableActor_NoRegister()
	{
		return AInteractableActor::StaticClass();
	}
	struct Z_Construct_UClass_AInteractableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DWClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DWClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Rosetta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableActor.h" },
		{ "ModuleRelativePath", "InteractableActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableActor_Statics::NewProp_DWClass_MetaData[] = {
		{ "ModuleRelativePath", "InteractableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInteractableActor_Statics::NewProp_DWClass = { "DWClass", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractableActor, DWClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AInteractableActor_Statics::NewProp_DWClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::NewProp_DWClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableActor_Statics::NewProp_DWClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractableActor_Statics::ClassParams = {
		&AInteractableActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInteractableActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractableActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractableActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractableActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractableActor, 3856825840);
	template<> ROSETTA_API UClass* StaticClass<AInteractableActor>()
	{
		return AInteractableActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractableActor(Z_Construct_UClass_AInteractableActor, &AInteractableActor::StaticClass, TEXT("/Script/Rosetta"), TEXT("AInteractableActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
