// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPCK/Public/PJH_EnemyBaseAnim.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePJH_EnemyBaseAnim() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	NPCK_API UClass* Z_Construct_UClass_UPJH_EnemyBaseAnim();
	NPCK_API UClass* Z_Construct_UClass_UPJH_EnemyBaseAnim_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NPCK();
// End Cross Module References
	void UPJH_EnemyBaseAnim::StaticRegisterNativesUPJH_EnemyBaseAnim()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPJH_EnemyBaseAnim);
	UClass* Z_Construct_UClass_UPJH_EnemyBaseAnim_NoRegister()
	{
		return UPJH_EnemyBaseAnim::StaticClass();
	}
	struct Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_FinisherMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy_FinisherMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_assassinationMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy_assassinationMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_NPCK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PJH_EnemyBaseAnim.h" },
		{ "ModuleRelativePath", "Public/PJH_EnemyBaseAnim.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::NewProp_Enemy_FinisherMontage_MetaData[] = {
		{ "Category", "Montage" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb9\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/PJH_EnemyBaseAnim.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb9\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::NewProp_Enemy_FinisherMontage = { "Enemy_FinisherMontage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPJH_EnemyBaseAnim, Enemy_FinisherMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::NewProp_Enemy_FinisherMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::NewProp_Enemy_FinisherMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::NewProp_Enemy_assassinationMontage_MetaData[] = {
		{ "Category", "Montage" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb9\xef\xbf\xbd \xef\xbf\xbd\xcf\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/PJH_EnemyBaseAnim.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb9\xef\xbf\xbd \xef\xbf\xbd\xcf\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::NewProp_Enemy_assassinationMontage = { "Enemy_assassinationMontage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPJH_EnemyBaseAnim, Enemy_assassinationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::NewProp_Enemy_assassinationMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::NewProp_Enemy_assassinationMontage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::NewProp_Enemy_FinisherMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::NewProp_Enemy_assassinationMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPJH_EnemyBaseAnim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::ClassParams = {
		&UPJH_EnemyBaseAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPJH_EnemyBaseAnim()
	{
		if (!Z_Registration_Info_UClass_UPJH_EnemyBaseAnim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPJH_EnemyBaseAnim.OuterSingleton, Z_Construct_UClass_UPJH_EnemyBaseAnim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPJH_EnemyBaseAnim.OuterSingleton;
	}
	template<> NPCK_API UClass* StaticClass<UPJH_EnemyBaseAnim>()
	{
		return UPJH_EnemyBaseAnim::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPJH_EnemyBaseAnim);
	UPJH_EnemyBaseAnim::~UPJH_EnemyBaseAnim() {}
	struct Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBaseAnim_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBaseAnim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPJH_EnemyBaseAnim, UPJH_EnemyBaseAnim::StaticClass, TEXT("UPJH_EnemyBaseAnim"), &Z_Registration_Info_UClass_UPJH_EnemyBaseAnim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPJH_EnemyBaseAnim), 3776213500U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBaseAnim_h_878271074(TEXT("/Script/NPCK"),
		Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBaseAnim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBaseAnim_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
