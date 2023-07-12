// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPCK/Public/CSC_AttackComponent.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSC_AttackComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	NPCK_API UClass* Z_Construct_UClass_UCSC_AttackComponent();
	NPCK_API UClass* Z_Construct_UClass_UCSC_AttackComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NPCK();
// End Cross Module References
	DEFINE_FUNCTION(UCSC_AttackComponent::execSetVictim)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVictim(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void UCSC_AttackComponent::StaticRegisterNativesUCSC_AttackComponent()
	{
		UClass* Class = UCSC_AttackComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetVictim", &UCSC_AttackComponent::execSetVictim },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics
	{
		struct CSC_AttackComponent_eventSetVictim_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CSC_AttackComponent_eventSetVictim_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CSC_AttackComponent_eventSetVictim_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CSC_AttackComponent_eventSetVictim_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CSC_AttackComponent_eventSetVictim_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CSC_AttackComponent_eventSetVictim_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CSC_AttackComponent_eventSetVictim_Parms), &Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CSC_AttackComponent_eventSetVictim_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSC_AttackComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSC_AttackComponent, nullptr, "SetVictim", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::CSC_AttackComponent_eventSetVictim_Parms), Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSC_AttackComponent_SetVictim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCSC_AttackComponent_SetVictim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSC_AttackComponent);
	UClass* Z_Construct_UClass_UCSC_AttackComponent_NoRegister()
	{
		return UCSC_AttackComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCSC_AttackComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackInPut_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackInPut;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enemies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Enemies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAttacking_MetaData[];
#endif
		static void NewProp_IsAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAttacking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanNextCombo_MetaData[];
#endif
		static void NewProp_CanNextCombo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanNextCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsComboInputOn_MetaData[];
#endif
		static void NewProp_IsComboInputOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsComboInputOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCombo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCombo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCombo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSC_AttackComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NPCK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCSC_AttackComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCSC_AttackComponent_SetVictim, "SetVictim" }, // 3171216900
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSC_AttackComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CSC_AttackComponent.h" },
		{ "ModuleRelativePath", "Public/CSC_AttackComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_AttackInPut_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CSC_AttackComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_AttackInPut = { "AttackInPut", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSC_AttackComponent, AttackInPut), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_AttackInPut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_AttackInPut_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_Enemies_Inner = { "Enemies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_Enemies_MetaData[] = {
		{ "Category", "CSC_AttackComponent" },
		{ "ModuleRelativePath", "Public/CSC_AttackComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_Enemies = { "Enemies", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSC_AttackComponent, Enemies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_Enemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_Enemies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_IsAttacking_MetaData[] = {
		{ "Category", "CSC_AttackComponent" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/CSC_AttackComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	void Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_IsAttacking_SetBit(void* Obj)
	{
		((UCSC_AttackComponent*)Obj)->IsAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_IsAttacking = { "IsAttacking", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCSC_AttackComponent), &Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_IsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_IsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_IsAttacking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_CanNextCombo_MetaData[] = {
		{ "Category", "CSC_AttackComponent" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xba\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/CSC_AttackComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xba\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	void Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_CanNextCombo_SetBit(void* Obj)
	{
		((UCSC_AttackComponent*)Obj)->CanNextCombo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_CanNextCombo = { "CanNextCombo", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCSC_AttackComponent), &Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_CanNextCombo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_CanNextCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_CanNextCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_IsComboInputOn_MetaData[] = {
		{ "Category", "CSC_AttackComponent" },
		{ "Comment", "//\xef\xbf\xbd\xde\xba\xef\xbf\xbd\xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/CSC_AttackComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xde\xba\xef\xbf\xbd\xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	void Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_IsComboInputOn_SetBit(void* Obj)
	{
		((UCSC_AttackComponent*)Obj)->IsComboInputOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_IsComboInputOn = { "IsComboInputOn", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCSC_AttackComponent), &Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_IsComboInputOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_IsComboInputOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_IsComboInputOn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_CurrentCombo_MetaData[] = {
		{ "Category", "CSC_AttackComponent" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xba\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/CSC_AttackComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xba\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_CurrentCombo = { "CurrentCombo", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSC_AttackComponent, CurrentCombo), METADATA_PARAMS(Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_CurrentCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_CurrentCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_MaxCombo_MetaData[] = {
		{ "Category", "CSC_AttackComponent" },
		{ "Comment", "//\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xef\xbf\xbd\xde\xba\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/CSC_AttackComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xef\xbf\xbd\xde\xba\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_MaxCombo = { "MaxCombo", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSC_AttackComponent, MaxCombo), METADATA_PARAMS(Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_MaxCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_MaxCombo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSC_AttackComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_AttackInPut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_Enemies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_Enemies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_IsAttacking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_CanNextCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_IsComboInputOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_CurrentCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSC_AttackComponent_Statics::NewProp_MaxCombo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSC_AttackComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSC_AttackComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSC_AttackComponent_Statics::ClassParams = {
		&UCSC_AttackComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCSC_AttackComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_AttackComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCSC_AttackComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSC_AttackComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSC_AttackComponent()
	{
		if (!Z_Registration_Info_UClass_UCSC_AttackComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSC_AttackComponent.OuterSingleton, Z_Construct_UClass_UCSC_AttackComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSC_AttackComponent.OuterSingleton;
	}
	template<> NPCK_API UClass* StaticClass<UCSC_AttackComponent>()
	{
		return UCSC_AttackComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSC_AttackComponent);
	UCSC_AttackComponent::~UCSC_AttackComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_AttackComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_AttackComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSC_AttackComponent, UCSC_AttackComponent::StaticClass, TEXT("UCSC_AttackComponent"), &Z_Registration_Info_UClass_UCSC_AttackComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSC_AttackComponent), 931290911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_AttackComponent_h_4089844621(TEXT("/Script/NPCK"),
		Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_AttackComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_CSC_AttackComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
