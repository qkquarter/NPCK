// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPCK/Public/CSC_Weapons.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSC_Weapons() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NPCK_API UClass* Z_Construct_UClass_ACSC_Weapons();
	NPCK_API UClass* Z_Construct_UClass_ACSC_Weapons_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NPCK();
// End Cross Module References
	void ACSC_Weapons::StaticRegisterNativesACSC_Weapons()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACSC_Weapons);
	UClass* Z_Construct_UClass_ACSC_Weapons_NoRegister()
	{
		return ACSC_Weapons::StaticClass();
	}
	struct Z_Construct_UClass_ACSC_Weapons_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rootcomp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rootcomp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACSC_Weapons_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NPCK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSC_Weapons_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CSC_Weapons.h" },
		{ "ModuleRelativePath", "Public/CSC_Weapons.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_rootcomp_MetaData[] = {
		{ "Category", "CSC_Weapons" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CSC_Weapons.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_rootcomp = { "rootcomp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSC_Weapons, rootcomp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_rootcomp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_rootcomp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "CSC_Weapons" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CSC_Weapons.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSC_Weapons, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_Collision_MetaData[] = {
		{ "Category", "CSC_Weapons" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CSC_Weapons.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSC_Weapons, Collision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_Collision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_AttackDamage_MetaData[] = {
		{ "Category", "CSC_Weapons" },
		{ "ModuleRelativePath", "Public/CSC_Weapons.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSC_Weapons, AttackDamage), METADATA_PARAMS(Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_AttackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_AttackDamage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACSC_Weapons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_rootcomp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_Collision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSC_Weapons_Statics::NewProp_AttackDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACSC_Weapons_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACSC_Weapons>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACSC_Weapons_Statics::ClassParams = {
		&ACSC_Weapons::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACSC_Weapons_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACSC_Weapons_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACSC_Weapons_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACSC_Weapons_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACSC_Weapons()
	{
		if (!Z_Registration_Info_UClass_ACSC_Weapons.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACSC_Weapons.OuterSingleton, Z_Construct_UClass_ACSC_Weapons_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACSC_Weapons.OuterSingleton;
	}
	template<> NPCK_API UClass* StaticClass<ACSC_Weapons>()
	{
		return ACSC_Weapons::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACSC_Weapons);
	ACSC_Weapons::~ACSC_Weapons() {}
	struct Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_Weapons_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_Weapons_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACSC_Weapons, ACSC_Weapons::StaticClass, TEXT("ACSC_Weapons"), &Z_Registration_Info_UClass_ACSC_Weapons, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACSC_Weapons), 2385867573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_Weapons_h_822157691(TEXT("/Script/NPCK"),
		Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_Weapons_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_Weapons_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
