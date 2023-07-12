// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPCK_AnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef NPCK_NPCK_AnimInstance_generated_h
#error "NPCK_AnimInstance.generated.h already included, missing '#pragma once' in NPCK_AnimInstance.h"
#endif
#define NPCK_NPCK_AnimInstance_generated_h

#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_SPARSE_DATA
#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayAttackMontage); \
	DECLARE_FUNCTION(execAnimNotify_AnimEnd); \
	DECLARE_FUNCTION(execAnimNotify_RopeDisappear); \
	DECLARE_FUNCTION(execAnimNotify_RopeAppears); \
	DECLARE_FUNCTION(execAnimNotify_StartGrapplingMovement); \
	DECLARE_FUNCTION(execAnimNotify_ThrowRope); \
	DECLARE_FUNCTION(execGetEndedMontage); \
	DECLARE_FUNCTION(execGetCurrentPlayMontage); \
	DECLARE_FUNCTION(execAnimNotify_ResetHitInfo); \
	DECLARE_FUNCTION(execAnimNotify_EndAttack); \
	DECLARE_FUNCTION(execAnimNotify_HitEnd); \
	DECLARE_FUNCTION(execAnimNotify_ParryAction); \
	DECLARE_FUNCTION(execAnimNotify_ParryEnd); \
	DECLARE_FUNCTION(execAnimNotify_ParryStart); \
	DECLARE_FUNCTION(execAnimNotify_GuardBreakEnd); \
	DECLARE_FUNCTION(execAnimNotify_GuardHitEnd);


#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayAttackMontage); \
	DECLARE_FUNCTION(execAnimNotify_AnimEnd); \
	DECLARE_FUNCTION(execAnimNotify_RopeDisappear); \
	DECLARE_FUNCTION(execAnimNotify_RopeAppears); \
	DECLARE_FUNCTION(execAnimNotify_StartGrapplingMovement); \
	DECLARE_FUNCTION(execAnimNotify_ThrowRope); \
	DECLARE_FUNCTION(execGetEndedMontage); \
	DECLARE_FUNCTION(execGetCurrentPlayMontage); \
	DECLARE_FUNCTION(execAnimNotify_ResetHitInfo); \
	DECLARE_FUNCTION(execAnimNotify_EndAttack); \
	DECLARE_FUNCTION(execAnimNotify_HitEnd); \
	DECLARE_FUNCTION(execAnimNotify_ParryAction); \
	DECLARE_FUNCTION(execAnimNotify_ParryEnd); \
	DECLARE_FUNCTION(execAnimNotify_ParryStart); \
	DECLARE_FUNCTION(execAnimNotify_GuardBreakEnd); \
	DECLARE_FUNCTION(execAnimNotify_GuardHitEnd);


#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_ACCESSORS
#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_CALLBACK_WRAPPERS
#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNPCK_AnimInstance(); \
	friend struct Z_Construct_UClass_UNPCK_AnimInstance_Statics; \
public: \
	DECLARE_CLASS(UNPCK_AnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NPCK"), NO_API) \
	DECLARE_SERIALIZER(UNPCK_AnimInstance)


#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUNPCK_AnimInstance(); \
	friend struct Z_Construct_UClass_UNPCK_AnimInstance_Statics; \
public: \
	DECLARE_CLASS(UNPCK_AnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NPCK"), NO_API) \
	DECLARE_SERIALIZER(UNPCK_AnimInstance)


#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNPCK_AnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNPCK_AnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNPCK_AnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNPCK_AnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNPCK_AnimInstance(UNPCK_AnimInstance&&); \
	NO_API UNPCK_AnimInstance(const UNPCK_AnimInstance&); \
public: \
	NO_API virtual ~UNPCK_AnimInstance();


#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNPCK_AnimInstance(UNPCK_AnimInstance&&); \
	NO_API UNPCK_AnimInstance(const UNPCK_AnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNPCK_AnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNPCK_AnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNPCK_AnimInstance) \
	NO_API virtual ~UNPCK_AnimInstance();


#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_14_PROLOG
#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_SPARSE_DATA \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_RPC_WRAPPERS \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_ACCESSORS \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_CALLBACK_WRAPPERS \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_INCLASS \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_SPARSE_DATA \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_ACCESSORS \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_CALLBACK_WRAPPERS \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NPCK_API UClass* StaticClass<class UNPCK_AnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
