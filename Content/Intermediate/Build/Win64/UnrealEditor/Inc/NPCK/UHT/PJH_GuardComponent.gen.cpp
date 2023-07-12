// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPCK/Public/PJH_GuardComponent.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePJH_GuardComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	NPCK_API UClass* Z_Construct_UClass_UPJH_GuardComponent();
	NPCK_API UClass* Z_Construct_UClass_UPJH_GuardComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NPCK();
// End Cross Module References
	DEFINE_FUNCTION(UPJH_GuardComponent::execreceiveAttack)
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
	DEFINE_FUNCTION(UPJH_GuardComponent::execsetGuardGauge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_num);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setGuardGauge(Z_Param_num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPJH_GuardComponent::execgetGuardGauge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->getGuardGauge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPJH_GuardComponent::execchangeGuardGauge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_num);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->changeGuardGauge(Z_Param_num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPJH_GuardComponent::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void UPJH_GuardComponent::StaticRegisterNativesUPJH_GuardComponent()
	{
		UClass* Class = UPJH_GuardComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "changeGuardGauge", &UPJH_GuardComponent::execchangeGuardGauge },
			{ "getGuardGauge", &UPJH_GuardComponent::execgetGuardGauge },
			{ "OnOverlapBegin", &UPJH_GuardComponent::execOnOverlapBegin },
			{ "receiveAttack", &UPJH_GuardComponent::execreceiveAttack },
			{ "setGuardGauge", &UPJH_GuardComponent::execsetGuardGauge },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPJH_GuardComponent_changeGuardGauge_Statics
	{
		struct PJH_GuardComponent_eventchangeGuardGauge_Parms
		{
			float num;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_num;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPJH_GuardComponent_changeGuardGauge_Statics::NewProp_num = { "num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_GuardComponent_eventchangeGuardGauge_Parms, num), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPJH_GuardComponent_changeGuardGauge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPJH_GuardComponent_changeGuardGauge_Statics::NewProp_num,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPJH_GuardComponent_changeGuardGauge_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// num \xef\xbf\xbd\xef\xbf\xbd\xc5\xad \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/PJH_GuardComponent.h" },
		{ "ToolTip", "num \xef\xbf\xbd\xef\xbf\xbd\xc5\xad \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPJH_GuardComponent_changeGuardGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPJH_GuardComponent, nullptr, "changeGuardGauge", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPJH_GuardComponent_changeGuardGauge_Statics::PJH_GuardComponent_eventchangeGuardGauge_Parms), Z_Construct_UFunction_UPJH_GuardComponent_changeGuardGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPJH_GuardComponent_changeGuardGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPJH_GuardComponent_changeGuardGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPJH_GuardComponent_changeGuardGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPJH_GuardComponent_changeGuardGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPJH_GuardComponent_changeGuardGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPJH_GuardComponent_getGuardGauge_Statics
	{
		struct PJH_GuardComponent_eventgetGuardGauge_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPJH_GuardComponent_getGuardGauge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_GuardComponent_eventgetGuardGauge_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPJH_GuardComponent_getGuardGauge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPJH_GuardComponent_getGuardGauge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPJH_GuardComponent_getGuardGauge_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/PJH_GuardComponent.h" },
		{ "ToolTip", "\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPJH_GuardComponent_getGuardGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPJH_GuardComponent, nullptr, "getGuardGauge", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPJH_GuardComponent_getGuardGauge_Statics::PJH_GuardComponent_eventgetGuardGauge_Parms), Z_Construct_UFunction_UPJH_GuardComponent_getGuardGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPJH_GuardComponent_getGuardGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPJH_GuardComponent_getGuardGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPJH_GuardComponent_getGuardGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPJH_GuardComponent_getGuardGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPJH_GuardComponent_getGuardGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics
	{
		struct PJH_GuardComponent_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_GuardComponent_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_GuardComponent_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_GuardComponent_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_GuardComponent_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PJH_GuardComponent_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PJH_GuardComponent_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_GuardComponent_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PJH_GuardComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPJH_GuardComponent, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::PJH_GuardComponent_eventOnOverlapBegin_Parms), Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics
	{
		struct PJH_GuardComponent_eventreceiveAttack_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_GuardComponent_eventreceiveAttack_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_GuardComponent_eventreceiveAttack_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_GuardComponent_eventreceiveAttack_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::NewProp_isParryable_SetBit(void* Obj)
	{
		((PJH_GuardComponent_eventreceiveAttack_Parms*)Obj)->isParryable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::NewProp_isParryable = { "isParryable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PJH_GuardComponent_eventreceiveAttack_Parms), &Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::NewProp_isParryable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::NewProp_damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::NewProp_isParryable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/PJH_GuardComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPJH_GuardComponent, nullptr, "receiveAttack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::PJH_GuardComponent_eventreceiveAttack_Parms), Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPJH_GuardComponent_setGuardGauge_Statics
	{
		struct PJH_GuardComponent_eventsetGuardGauge_Parms
		{
			float num;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_num;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPJH_GuardComponent_setGuardGauge_Statics::NewProp_num = { "num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PJH_GuardComponent_eventsetGuardGauge_Parms, num), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPJH_GuardComponent_setGuardGauge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPJH_GuardComponent_setGuardGauge_Statics::NewProp_num,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPJH_GuardComponent_setGuardGauge_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/PJH_GuardComponent.h" },
		{ "ToolTip", "\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPJH_GuardComponent_setGuardGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPJH_GuardComponent, nullptr, "setGuardGauge", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPJH_GuardComponent_setGuardGauge_Statics::PJH_GuardComponent_eventsetGuardGauge_Parms), Z_Construct_UFunction_UPJH_GuardComponent_setGuardGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPJH_GuardComponent_setGuardGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPJH_GuardComponent_setGuardGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPJH_GuardComponent_setGuardGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPJH_GuardComponent_setGuardGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPJH_GuardComponent_setGuardGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPJH_GuardComponent);
	UClass* Z_Construct_UClass_UPJH_GuardComponent_NoRegister()
	{
		return UPJH_GuardComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPJH_GuardComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_guardKey_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_guardKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPJH_GuardComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NPCK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPJH_GuardComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPJH_GuardComponent_changeGuardGauge, "changeGuardGauge" }, // 3387133068
		{ &Z_Construct_UFunction_UPJH_GuardComponent_getGuardGauge, "getGuardGauge" }, // 1809590670
		{ &Z_Construct_UFunction_UPJH_GuardComponent_OnOverlapBegin, "OnOverlapBegin" }, // 2537886894
		{ &Z_Construct_UFunction_UPJH_GuardComponent_receiveAttack, "receiveAttack" }, // 2332578585
		{ &Z_Construct_UFunction_UPJH_GuardComponent_setGuardGauge, "setGuardGauge" }, // 3879147814
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPJH_GuardComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PJH_GuardComponent.h" },
		{ "ModuleRelativePath", "Public/PJH_GuardComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPJH_GuardComponent_Statics::NewProp_guardKey_MetaData[] = {
		{ "Category", "PJH_GuardComponent" },
		{ "ModuleRelativePath", "Public/PJH_GuardComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPJH_GuardComponent_Statics::NewProp_guardKey = { "guardKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPJH_GuardComponent, guardKey), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPJH_GuardComponent_Statics::NewProp_guardKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPJH_GuardComponent_Statics::NewProp_guardKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPJH_GuardComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPJH_GuardComponent_Statics::NewProp_guardKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPJH_GuardComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPJH_GuardComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPJH_GuardComponent_Statics::ClassParams = {
		&UPJH_GuardComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPJH_GuardComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPJH_GuardComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPJH_GuardComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPJH_GuardComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPJH_GuardComponent()
	{
		if (!Z_Registration_Info_UClass_UPJH_GuardComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPJH_GuardComponent.OuterSingleton, Z_Construct_UClass_UPJH_GuardComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPJH_GuardComponent.OuterSingleton;
	}
	template<> NPCK_API UClass* StaticClass<UPJH_GuardComponent>()
	{
		return UPJH_GuardComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPJH_GuardComponent);
	UPJH_GuardComponent::~UPJH_GuardComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_GuardComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_GuardComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPJH_GuardComponent, UPJH_GuardComponent::StaticClass, TEXT("UPJH_GuardComponent"), &Z_Registration_Info_UClass_UPJH_GuardComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPJH_GuardComponent), 1908240308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_GuardComponent_h_1322820397(TEXT("/Script/NPCK"),
		Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_GuardComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_PJH_GuardComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
