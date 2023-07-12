// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PJH_EnemyBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NPCK_PJH_EnemyBase_generated_h
#error "PJH_EnemyBase.generated.h already included, missing '#pragma once' in PJH_EnemyBase.h"
#endif
#define NPCK_PJH_EnemyBase_generated_h

#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_SPARSE_DATA
#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBackEndOverlap); \
	DECLARE_FUNCTION(execBackOverlap);


#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBackEndOverlap); \
	DECLARE_FUNCTION(execBackOverlap);


#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_ACCESSORS
#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_CALLBACK_WRAPPERS
#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPJH_EnemyBase(); \
	friend struct Z_Construct_UClass_APJH_EnemyBase_Statics; \
public: \
	DECLARE_CLASS(APJH_EnemyBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NPCK"), NO_API) \
	DECLARE_SERIALIZER(APJH_EnemyBase)


#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPJH_EnemyBase(); \
	friend struct Z_Construct_UClass_APJH_EnemyBase_Statics; \
public: \
	DECLARE_CLASS(APJH_EnemyBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NPCK"), NO_API) \
	DECLARE_SERIALIZER(APJH_EnemyBase)


#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APJH_EnemyBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APJH_EnemyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APJH_EnemyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APJH_EnemyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APJH_EnemyBase(APJH_EnemyBase&&); \
	NO_API APJH_EnemyBase(const APJH_EnemyBase&); \
public: \
	NO_API virtual ~APJH_EnemyBase();


#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APJH_EnemyBase(APJH_EnemyBase&&); \
	NO_API APJH_EnemyBase(const APJH_EnemyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APJH_EnemyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APJH_EnemyBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APJH_EnemyBase) \
	NO_API virtual ~APJH_EnemyBase();


#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_10_PROLOG
#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_SPARSE_DATA \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_RPC_WRAPPERS \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_ACCESSORS \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_CALLBACK_WRAPPERS \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_INCLASS \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_SPARSE_DATA \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_ACCESSORS \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_CALLBACK_WRAPPERS \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NPCK_API UClass* StaticClass<class APJH_EnemyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
