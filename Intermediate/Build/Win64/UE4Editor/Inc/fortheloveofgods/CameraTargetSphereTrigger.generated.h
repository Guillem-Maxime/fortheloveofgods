// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef FORTHELOVEOFGODS_CameraTargetSphereTrigger_generated_h
#error "CameraTargetSphereTrigger.generated.h already included, missing '#pragma once' in CameraTargetSphereTrigger.h"
#endif
#define FORTHELOVEOFGODS_CameraTargetSphereTrigger_generated_h

#define fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_SPARSE_DATA
#define fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraTargetSphereTrigger(); \
	friend struct Z_Construct_UClass_ACameraTargetSphereTrigger_Statics; \
public: \
	DECLARE_CLASS(ACameraTargetSphereTrigger, ATriggerSphere, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fortheloveofgods"), NO_API) \
	DECLARE_SERIALIZER(ACameraTargetSphereTrigger)


#define fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACameraTargetSphereTrigger(); \
	friend struct Z_Construct_UClass_ACameraTargetSphereTrigger_Statics; \
public: \
	DECLARE_CLASS(ACameraTargetSphereTrigger, ATriggerSphere, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fortheloveofgods"), NO_API) \
	DECLARE_SERIALIZER(ACameraTargetSphereTrigger)


#define fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraTargetSphereTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraTargetSphereTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraTargetSphereTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraTargetSphereTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraTargetSphereTrigger(ACameraTargetSphereTrigger&&); \
	NO_API ACameraTargetSphereTrigger(const ACameraTargetSphereTrigger&); \
public:


#define fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraTargetSphereTrigger(ACameraTargetSphereTrigger&&); \
	NO_API ACameraTargetSphereTrigger(const ACameraTargetSphereTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraTargetSphereTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraTargetSphereTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACameraTargetSphereTrigger)


#define fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_PRIVATE_PROPERTY_OFFSET
#define fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_11_PROLOG
#define fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_PRIVATE_PROPERTY_OFFSET \
	fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_SPARSE_DATA \
	fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_RPC_WRAPPERS \
	fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_INCLASS \
	fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_PRIVATE_PROPERTY_OFFSET \
	fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_SPARSE_DATA \
	fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_INCLASS_NO_PURE_DECLS \
	fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FORTHELOVEOFGODS_API UClass* StaticClass<class ACameraTargetSphereTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fortheloveofgods_Source_fortheloveofgods_player_components_CameraTargetSphereTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
