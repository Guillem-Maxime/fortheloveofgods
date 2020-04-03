// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fortheloveofgods/player/components/PlayerCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCameraComponent() {}
// Cross Module References
	FORTHELOVEOFGODS_API UClass* Z_Construct_UClass_UPlayerCameraComponent_NoRegister();
	FORTHELOVEOFGODS_API UClass* Z_Construct_UClass_UPlayerCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_fortheloveofgods();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void UPlayerCameraComponent::StaticRegisterNativesUPlayerCameraComponent()
	{
	}
	UClass* Z_Construct_UClass_UPlayerCameraComponent_NoRegister()
	{
		return UPlayerCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusAngleLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusAngleLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OurCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OurCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_fortheloveofgods,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "player/components/PlayerCameraComponent.h" },
		{ "ModuleRelativePath", "player/components/PlayerCameraComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_FocusAngleLimit_MetaData[] = {
		{ "Category", "PlayerCameraComponent" },
		{ "ModuleRelativePath", "player/components/PlayerCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_FocusAngleLimit = { "FocusAngleLimit", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCameraComponent, FocusAngleLimit), METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_FocusAngleLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_FocusAngleLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_MinArmLength_MetaData[] = {
		{ "Category", "PlayerCameraComponent" },
		{ "ModuleRelativePath", "player/components/PlayerCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_MinArmLength = { "MinArmLength", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCameraComponent, MinArmLength), METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_MinArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_MinArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_MaxArmLength_MetaData[] = {
		{ "Category", "PlayerCameraComponent" },
		{ "ModuleRelativePath", "player/components/PlayerCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_MaxArmLength = { "MaxArmLength", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCameraComponent, MaxArmLength), METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_MaxArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_MaxArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_OurCameraComponent_MetaData[] = {
		{ "Category", "PlayerCameraComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "player/components/PlayerCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_OurCameraComponent = { "OurCameraComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerCameraComponent, OurCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_OurCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_OurCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerCameraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_FocusAngleLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_MinArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_MaxArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCameraComponent_Statics::NewProp_OurCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCameraComponent_Statics::ClassParams = {
		&UPlayerCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerCameraComponent, 401905548);
	template<> FORTHELOVEOFGODS_API UClass* StaticClass<UPlayerCameraComponent>()
	{
		return UPlayerCameraComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerCameraComponent(Z_Construct_UClass_UPlayerCameraComponent, &UPlayerCameraComponent::StaticClass, TEXT("/Script/fortheloveofgods"), TEXT("UPlayerCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
