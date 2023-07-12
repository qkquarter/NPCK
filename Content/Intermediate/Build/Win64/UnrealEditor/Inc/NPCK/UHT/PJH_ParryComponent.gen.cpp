// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPCK/Public/PJH_ParryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePJH_ParryComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	NPCK_API UClass* Z_Construct_UClass_UPJH_ParryComponent();
	NPCK_API UClass* Z_Construct_UClass_UPJH_ParryComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NPCK();
// End Cross Module References
	DEFINE_FUNCTION(UPJH_ParryComponent::execreceiveAttack)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_damage);
		P_GET_UBOOL(Z_Param_isParryable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->receiveAttack(Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_damage,Z_Param_isParryable);
		P_NATIVE_END;
	}
	void UPJH_ParryComponent::StaticRegisterNativesUPJH_ParryComponent()
	{
		UClass* Class = UPJH_ParryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "receiveAttack", &UPJH_ParryComponent::execreceiveAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics
	{
		struct PJH_ParryComponent_eventreceiveAttack_Parms
		{
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			float damage;
			bool isParryable;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
		static void NewProp_isParryable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isParryable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_ParryComponent_eventreceiveAttack_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_ParryComponent_eventreceiveAttack_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_ParryComponent_eventreceiveAttack_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::NewProp_isParryable_SetBit(void* Obj)
	{
		((PJH_ParryComponent_eventreceiveAttack_Parms*)Obj)->isParryable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::NewProp_isParryable = { "isParryable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PJH_ParryComponent_eventreceiveAttack_Parms), &Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::NewProp_isParryable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::NewProp_damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::NewProp_isParryable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xb9\xde\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/PJH_ParryComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xb9\xde\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPJH_ParryComponent, nullptr, "receiveAttack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::PJH_ParryComponent_eventreceiveAttack_Parms), Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPJH_ParryComponent);
	UClass* Z_Construct_UClass_UPJH_ParryComponent_NoRegister()
	{
		return UPJH_ParryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPJH_ParryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_parryKey_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_parryKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanParry_MetaData[];
#endif
		static void NewProp_bCanParry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanParry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartParry_MetaData[];
#endif
		static void NewProp_bStartParry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartParry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_particle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_particle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPJH_ParryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NPCK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPJH_ParryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPJH_ParryComponent_receiveAttack, "receiveAttack" }, // 4109194328
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPJH_ParryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PJH_ParryComponent.h" },
		{ "ModuleRelativePath", "Public/PJH_ParryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_parryKey_MetaData[] = {
		{ "Category", "PJH_ParryComponent" },
		{ "ModuleRelativePath", "Public/PJH_ParryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_parryKey = { "parryKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPJH_ParryComponent, parryKey), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_parryKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_parryKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_bCanParry_MetaData[] = {
		{ "Category", "PJH_ParryComponent" },
		{ "Comment", "// \xef\xbf\xbd\xd0\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/PJH_ParryComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xd0\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	void Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_bCanParry_SetBit(void* Obj)
	{
		((UPJH_ParryComponent*)Obj)->bCanParry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_bCanParry = { "bCanParry", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPJH_ParryComponent), &Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_bCanParry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_bCanParry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_bCanParry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_bStartParry_MetaData[] = {
		{ "Category", "PJH_ParryComponent" },
		{ "Comment", "// \xef\xbf\xbd\xd0\xb8\xef\xbf\xbd \xc5\xb0 \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/PJH_ParryComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xd0\xb8\xef\xbf\xbd \xc5\xb0 \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	void Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_bStartParry_SetBit(void* Obj)
	{
		((UPJH_ParryComponent*)Obj)->bStartParry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_bStartParry = { "bStartParry", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPJH_ParryComponent), &Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_bStartParry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_bStartParry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_bStartParry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_particle_MetaData[] = {
		{ "Category", "PJH_ParryComponent" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xc5\xac \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/PJH_ParryComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xc5\xac \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_particle = { "particle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPJH_ParryComponent, particle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_particle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPJH_ParryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_parryKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_bCanParry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_bStartParry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPJH_ParryComponent_Statics::NewProp_particle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPJH_ParryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPJH_ParryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPJH_ParryComponent_Statics::ClassParams = {
		&UPJH_ParryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPJH_ParryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPJH_ParryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPJH_ParryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPJH_ParryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPJH_ParryComponent()
	{
		if (!Z_Registration_Info_UClass_UPJH_ParryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPJH_ParryComponent.OuterSingleton, Z_Construct_UClass_UPJH_ParryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPJH_ParryComponent.OuterSingleton;
	}
	template<> NPCK_API UClass* StaticClass<UPJH_ParryComponent>()
	{
		return UPJH_ParryComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPJH_ParryComponent);
	UPJH_ParryComponent::~UPJH_ParryComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_ParryComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_ParryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPJH_ParryComponent, UPJH_ParryComponent::StaticClass, TEXT("UPJH_ParryComponent"), &Z_Registration_Info_UClass_UPJH_ParryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPJH_ParryComponent), 3045732118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_ParryComponent_h_3859155651(TEXT("/Script/NPCK"),
		Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_ParryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_ParryComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
