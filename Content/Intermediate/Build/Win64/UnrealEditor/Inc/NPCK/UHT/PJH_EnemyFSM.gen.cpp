// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPCK/Public/PJH_EnemyFSM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePJH_EnemyFSM() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NPCK_API UClass* Z_Construct_UClass_UPJH_EnemyFSM();
	NPCK_API UClass* Z_Construct_UClass_UPJH_EnemyFSM_NoRegister();
	NPCK_API UEnum* Z_Construct_UEnum_NPCK_EEnemyState();
	UPackage* Z_Construct_UPackage__Script_NPCK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyState;
	static UEnum* EEnemyState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnemyState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnemyState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NPCK_EEnemyState, Z_Construct_UPackage__Script_NPCK(), TEXT("EEnemyState"));
		}
		return Z_Registration_Info_UEnum_EEnemyState.OuterSingleton;
	}
	template<> NPCK_API UEnum* StaticEnum<EEnemyState>()
	{
		return EEnemyState_StaticEnum();
	}
	struct Z_Construct_UEnum_NPCK_EEnemyState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NPCK_EEnemyState_Statics::Enumerators[] = {
		{ "EEnemyState::Idle", (int64)EEnemyState::Idle },
		{ "EEnemyState::Move", (int64)EEnemyState::Move },
		{ "EEnemyState::Attack", (int64)EEnemyState::Attack },
		{ "EEnemyState::Guard", (int64)EEnemyState::Guard },
		{ "EEnemyState::Damaged", (int64)EEnemyState::Damaged },
		{ "EEnemyState::Vulnerable", (int64)EEnemyState::Vulnerable },
		{ "EEnemyState::Die", (int64)EEnemyState::Die },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NPCK_EEnemyState_Statics::Enum_MetaDataParams[] = {
		{ "Attack.Name", "EEnemyState::Attack" },
		{ "BlueprintType", "true" },
		{ "Damaged.Comment", "// \xef\xbf\xbd\xd0\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Damaged.Name", "EEnemyState::Damaged" },
		{ "Damaged.ToolTip", "\xef\xbf\xbd\xd0\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "Die.Comment", "// \xef\xbf\xbd\xce\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Die.Name", "EEnemyState::Die" },
		{ "Die.ToolTip", "\xef\xbf\xbd\xce\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "Guard.Name", "EEnemyState::Guard" },
		{ "Idle.Name", "EEnemyState::Idle" },
		{ "ModuleRelativePath", "Public/PJH_EnemyFSM.h" },
		{ "Move.Name", "EEnemyState::Move" },
		{ "Vulnerable.Name", "EEnemyState::Vulnerable" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NPCK_EEnemyState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NPCK,
		nullptr,
		"EEnemyState",
		"EEnemyState",
		Z_Construct_UEnum_NPCK_EEnemyState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NPCK_EEnemyState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NPCK_EEnemyState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NPCK_EEnemyState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NPCK_EEnemyState()
	{
		if (!Z_Registration_Info_UEnum_EEnemyState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyState.InnerSingleton, Z_Construct_UEnum_NPCK_EEnemyState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnemyState.InnerSingleton;
	}
	void UPJH_EnemyFSM::StaticRegisterNativesUPJH_EnemyFSM()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPJH_EnemyFSM);
	UClass* Z_Construct_UClass_UPJH_EnemyFSM_NoRegister()
	{
		return UPJH_EnemyFSM::StaticClass();
	}
	struct Z_Construct_UClass_UPJH_EnemyFSM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_mState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPJH_EnemyFSM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NPCK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPJH_EnemyFSM_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PJH_EnemyFSM.h" },
		{ "ModuleRelativePath", "Public/PJH_EnemyFSM.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPJH_EnemyFSM_Statics::NewProp_mState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPJH_EnemyFSM_Statics::NewProp_mState_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/PJH_EnemyFSM.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPJH_EnemyFSM_Statics::NewProp_mState = { "mState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPJH_EnemyFSM, mState), Z_Construct_UEnum_NPCK_EEnemyState, METADATA_PARAMS(Z_Construct_UClass_UPJH_EnemyFSM_Statics::NewProp_mState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPJH_EnemyFSM_Statics::NewProp_mState_MetaData)) }; // 2676338528
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPJH_EnemyFSM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPJH_EnemyFSM_Statics::NewProp_mState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPJH_EnemyFSM_Statics::NewProp_mState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPJH_EnemyFSM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPJH_EnemyFSM>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPJH_EnemyFSM_Statics::ClassParams = {
		&UPJH_EnemyFSM::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPJH_EnemyFSM_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPJH_EnemyFSM_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPJH_EnemyFSM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPJH_EnemyFSM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPJH_EnemyFSM()
	{
		if (!Z_Registration_Info_UClass_UPJH_EnemyFSM.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPJH_EnemyFSM.OuterSingleton, Z_Construct_UClass_UPJH_EnemyFSM_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPJH_EnemyFSM.OuterSingleton;
	}
	template<> NPCK_API UClass* StaticClass<UPJH_EnemyFSM>()
	{
		return UPJH_EnemyFSM::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPJH_EnemyFSM);
	UPJH_EnemyFSM::~UPJH_EnemyFSM() {}
	struct Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyFSM_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyFSM_h_Statics::EnumInfo[] = {
		{ EEnemyState_StaticEnum, TEXT("EEnemyState"), &Z_Registration_Info_UEnum_EEnemyState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2676338528U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyFSM_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPJH_EnemyFSM, UPJH_EnemyFSM::StaticClass, TEXT("UPJH_EnemyFSM"), &Z_Registration_Info_UClass_UPJH_EnemyFSM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPJH_EnemyFSM), 1572597564U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyFSM_h_4265952502(TEXT("/Script/NPCK"),
		Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyFSM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyFSM_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyFSM_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyFSM_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
