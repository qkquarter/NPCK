// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPCK/Public/PJH_EnemyBase.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePJH_EnemyBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NPCK_API UClass* Z_Construct_UClass_APJH_EnemyBase();
	NPCK_API UClass* Z_Construct_UClass_APJH_EnemyBase_NoRegister();
	NPCK_API UClass* Z_Construct_UClass_UPJH_EnemyBaseAnim_NoRegister();
	NPCK_API UClass* Z_Construct_UClass_UPJH_EnemyFSM_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NPCK();
// End Cross Module References
	DEFINE_FUNCTION(APJH_EnemyBase::execBackEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BackEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APJH_EnemyBase::execBackOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BackOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	static FName NAME_APJH_EnemyBase_HitTest = FName(TEXT("HitTest"));
	void APJH_EnemyBase::HitTest()
	{
		ProcessEvent(FindFunctionChecked(NAME_APJH_EnemyBase_HitTest),NULL);
	}
	void APJH_EnemyBase::StaticRegisterNativesAPJH_EnemyBase()
	{
		UClass* Class = APJH_EnemyBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BackEndOverlap", &APJH_EnemyBase::execBackEndOverlap },
			{ "BackOverlap", &APJH_EnemyBase::execBackOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics
	{
		struct PJH_EnemyBase_eventBackEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_EnemyBase_eventBackEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_EnemyBase_eventBackEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_EnemyBase_eventBackEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_EnemyBase_eventBackEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PJH_EnemyBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APJH_EnemyBase, nullptr, "BackEndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::PJH_EnemyBase_eventBackEndOverlap_Parms), Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics
	{
		struct PJH_EnemyBase_eventBackOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_EnemyBase_eventBackOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_EnemyBase_eventBackOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_EnemyBase_eventBackOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_EnemyBase_eventBackOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PJH_EnemyBase_eventBackOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PJH_EnemyBase_eventBackOverlap_Parms), &Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_EnemyBase_eventBackOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PJH_EnemyBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APJH_EnemyBase, nullptr, "BackOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::PJH_EnemyBase_eventBackOverlap_Parms), Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APJH_EnemyBase_BackOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APJH_EnemyBase_BackOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APJH_EnemyBase_HitTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APJH_EnemyBase_HitTest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PJH_EnemyBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APJH_EnemyBase_HitTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APJH_EnemyBase, nullptr, "HitTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APJH_EnemyBase_HitTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APJH_EnemyBase_HitTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APJH_EnemyBase_HitTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APJH_EnemyBase_HitTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APJH_EnemyBase);
	UClass* Z_Construct_UClass_APJH_EnemyBase_NoRegister()
	{
		return APJH_EnemyBase::StaticClass();
	}
	struct Z_Construct_UClass_APJH_EnemyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Back_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Back;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fsm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_fsm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_anim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_anim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HitNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APJH_EnemyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NPCK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APJH_EnemyBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APJH_EnemyBase_BackEndOverlap, "BackEndOverlap" }, // 21652610
		{ &Z_Construct_UFunction_APJH_EnemyBase_BackOverlap, "BackOverlap" }, // 3001561236
		{ &Z_Construct_UFunction_APJH_EnemyBase_HitTest, "HitTest" }, // 157636864
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APJH_EnemyBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PJH_EnemyBase.h" },
		{ "ModuleRelativePath", "Public/PJH_EnemyBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_Back_MetaData[] = {
		{ "Category", "PJH_EnemyBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PJH_EnemyBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_Back = { "Back", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APJH_EnemyBase, Back), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_Back_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_Back_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_fsm_MetaData[] = {
		{ "Category", "FSM" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PJH_EnemyBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_fsm = { "fsm", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APJH_EnemyBase, fsm), Z_Construct_UClass_UPJH_EnemyFSM_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_fsm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_fsm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_anim_MetaData[] = {
		{ "Category", "PJH_EnemyBase" },
		{ "ModuleRelativePath", "Public/PJH_EnemyBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_anim = { "anim", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APJH_EnemyBase, anim), Z_Construct_UClass_UPJH_EnemyBaseAnim_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_anim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_anim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_HitNum_MetaData[] = {
		{ "Category", "PJH_EnemyBase" },
		{ "ModuleRelativePath", "Public/PJH_EnemyBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_HitNum = { "HitNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APJH_EnemyBase, HitNum), METADATA_PARAMS(Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_HitNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_HitNum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APJH_EnemyBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_Back,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_fsm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_anim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APJH_EnemyBase_Statics::NewProp_HitNum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APJH_EnemyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APJH_EnemyBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APJH_EnemyBase_Statics::ClassParams = {
		&APJH_EnemyBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APJH_EnemyBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APJH_EnemyBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APJH_EnemyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APJH_EnemyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APJH_EnemyBase()
	{
		if (!Z_Registration_Info_UClass_APJH_EnemyBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APJH_EnemyBase.OuterSingleton, Z_Construct_UClass_APJH_EnemyBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APJH_EnemyBase.OuterSingleton;
	}
	template<> NPCK_API UClass* StaticClass<APJH_EnemyBase>()
	{
		return APJH_EnemyBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APJH_EnemyBase);
	APJH_EnemyBase::~APJH_EnemyBase() {}
	struct Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APJH_EnemyBase, APJH_EnemyBase::StaticClass, TEXT("APJH_EnemyBase"), &Z_Registration_Info_UClass_APJH_EnemyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APJH_EnemyBase), 3935238504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_3662746311(TEXT("/Script/NPCK"),
		Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_EnemyBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
