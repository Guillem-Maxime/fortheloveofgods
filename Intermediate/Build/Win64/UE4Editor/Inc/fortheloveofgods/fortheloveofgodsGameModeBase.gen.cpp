// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fortheloveofgods/fortheloveofgodsGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefortheloveofgodsGameModeBase() {}
// Cross Module References
	FORTHELOVEOFGODS_API UClass* Z_Construct_UClass_AfortheloveofgodsGameModeBase_NoRegister();
	FORTHELOVEOFGODS_API UClass* Z_Construct_UClass_AfortheloveofgodsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_fortheloveofgods();
// End Cross Module References
	void AfortheloveofgodsGameModeBase::StaticRegisterNativesAfortheloveofgodsGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AfortheloveofgodsGameModeBase_NoRegister()
	{
		return AfortheloveofgodsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AfortheloveofgodsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AfortheloveofgodsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_fortheloveofgods,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AfortheloveofgodsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "fortheloveofgodsGameModeBase.h" },
		{ "ModuleRelativePath", "fortheloveofgodsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AfortheloveofgodsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AfortheloveofgodsGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AfortheloveofgodsGameModeBase_Statics::ClassParams = {
		&AfortheloveofgodsGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AfortheloveofgodsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AfortheloveofgodsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AfortheloveofgodsGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AfortheloveofgodsGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AfortheloveofgodsGameModeBase, 1439841535);
	template<> FORTHELOVEOFGODS_API UClass* StaticClass<AfortheloveofgodsGameModeBase>()
	{
		return AfortheloveofgodsGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AfortheloveofgodsGameModeBase(Z_Construct_UClass_AfortheloveofgodsGameModeBase, &AfortheloveofgodsGameModeBase::StaticClass, TEXT("/Script/fortheloveofgods"), TEXT("AfortheloveofgodsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AfortheloveofgodsGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
