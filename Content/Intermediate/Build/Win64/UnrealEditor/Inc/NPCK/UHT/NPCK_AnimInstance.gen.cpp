// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPCK/Public/NPCK_AnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCK_AnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	NPCK_API UClass* Z_Construct_UClass_ANPCK_Player_NoRegister();
	NPCK_API UClass* Z_Construct_UClass_UNPCK_AnimInstance();
	NPCK_API UClass* Z_Construct_UClass_UNPCK_AnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NPCK();
// End Cross Module References
	DEFINE_FUNCTION(UNPCK_AnimInstance::execPlayAttackMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAttackMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCK_AnimInstance::execAnimNotify_AnimEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_AnimEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCK_AnimInstance::execAnimNotify_RopeDisappear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_RopeDisappear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCK_AnimInstance::execAnimNotify_RopeAppears)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_RopeAppears();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCK_AnimInstance::execAnimNotify_StartGrapplingMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_StartGrapplingMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCK_AnimInstance::execAnimNotify_ThrowRope)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_ThrowRope();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCK_AnimInstance::execGetEndedMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_binterp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEndedMontage(Z_Param_Montage,Z_Param_binterp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCK_AnimInstance::execGetCurrentPlayMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentPlayMontage(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCK_AnimInstance::execAnimNotify_ResetHitInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_ResetHitInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCK_AnimInstance::execAnimNotify_EndAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_EndAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCK_AnimInstance::execAnimNotify_HitEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_HitEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCK_AnimInstance::execAnimNotify_ParryAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_ParryAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCK_AnimInstance::execAnimNotify_ParryEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_ParryEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCK_AnimInstance::execAnimNotify_ParryStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_ParryStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCK_AnimInstance::execAnimNotify_GuardBreakEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_GuardBreakEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNPCK_AnimInstance::execAnimNotify_GuardHitEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_GuardHitEnd();
		P_NATIVE_END;
	}
	static FName NAME_UNPCK_AnimInstance_test = FName(TEXT("test"));
	void UNPCK_AnimInstance::test()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNPCK_AnimInstance_test),NULL);
	}
	void UNPCK_AnimInstance::StaticRegisterNativesUNPCK_AnimInstance()
	{
		UClass* Class = UNPCK_AnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_AnimEnd", &UNPCK_AnimInstance::execAnimNotify_AnimEnd },
			{ "AnimNotify_EndAttack", &UNPCK_AnimInstance::execAnimNotify_EndAttack },
			{ "AnimNotify_GuardBreakEnd", &UNPCK_AnimInstance::execAnimNotify_GuardBreakEnd },
			{ "AnimNotify_GuardHitEnd", &UNPCK_AnimInstance::execAnimNotify_GuardHitEnd },
			{ "AnimNotify_HitEnd", &UNPCK_AnimInstance::execAnimNotify_HitEnd },
			{ "AnimNotify_ParryAction", &UNPCK_AnimInstance::execAnimNotify_ParryAction },
			{ "AnimNotify_ParryEnd", &UNPCK_AnimInstance::execAnimNotify_ParryEnd },
			{ "AnimNotify_ParryStart", &UNPCK_AnimInstance::execAnimNotify_ParryStart },
			{ "AnimNotify_ResetHitInfo", &UNPCK_AnimInstance::execAnimNotify_ResetHitInfo },
			{ "AnimNotify_RopeAppears", &UNPCK_AnimInstance::execAnimNotify_RopeAppears },
			{ "AnimNotify_RopeDisappear", &UNPCK_AnimInstance::execAnimNotify_RopeDisappear },
			{ "AnimNotify_StartGrapplingMovement", &UNPCK_AnimInstance::execAnimNotify_StartGrapplingMovement },
			{ "AnimNotify_ThrowRope", &UNPCK_AnimInstance::execAnimNotify_ThrowRope },
			{ "GetCurrentPlayMontage", &UNPCK_AnimInstance::execGetCurrentPlayMontage },
			{ "GetEndedMontage", &UNPCK_AnimInstance::execGetEndedMontage },
			{ "PlayAttackMontage", &UNPCK_AnimInstance::execPlayAttackMontage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_AnimEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_AnimEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_AnimEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCK_AnimInstance, nullptr, "AnimNotify_AnimEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_AnimEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_AnimEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_AnimEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_AnimEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_EndAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_EndAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_EndAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCK_AnimInstance, nullptr, "AnimNotify_EndAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_EndAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_EndAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_EndAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_EndAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_GuardBreakEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_GuardBreakEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_GuardBreakEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCK_AnimInstance, nullptr, "AnimNotify_GuardBreakEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_GuardBreakEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_GuardBreakEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_GuardBreakEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_GuardBreakEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_GuardHitEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_GuardHitEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_GuardHitEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCK_AnimInstance, nullptr, "AnimNotify_GuardHitEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_GuardHitEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_GuardHitEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_GuardHitEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_GuardHitEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_HitEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_HitEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_HitEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCK_AnimInstance, nullptr, "AnimNotify_HitEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_HitEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_HitEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_HitEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_HitEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCK_AnimInstance, nullptr, "AnimNotify_ParryAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCK_AnimInstance, nullptr, "AnimNotify_ParryEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCK_AnimInstance, nullptr, "AnimNotify_ParryStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ResetHitInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ResetHitInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ResetHitInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCK_AnimInstance, nullptr, "AnimNotify_ResetHitInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ResetHitInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ResetHitInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ResetHitInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ResetHitInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_RopeAppears_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_RopeAppears_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_RopeAppears_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCK_AnimInstance, nullptr, "AnimNotify_RopeAppears", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_RopeAppears_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_RopeAppears_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_RopeAppears()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_RopeAppears_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_RopeDisappear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_RopeDisappear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_RopeDisappear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCK_AnimInstance, nullptr, "AnimNotify_RopeDisappear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_RopeDisappear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_RopeDisappear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_RopeDisappear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_RopeDisappear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_StartGrapplingMovement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_StartGrapplingMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_StartGrapplingMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCK_AnimInstance, nullptr, "AnimNotify_StartGrapplingMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_StartGrapplingMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_StartGrapplingMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_StartGrapplingMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_StartGrapplingMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ThrowRope_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ThrowRope_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xef\xbf\xbd\xd7\xb7\xef\xbf\xbd\xef\xbf\xbd\xc3\xb8\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
		{ "ToolTip", "\xef\xbf\xbd\xd7\xb7\xef\xbf\xbd\xef\xbf\xbd\xc3\xb8\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ThrowRope_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCK_AnimInstance, nullptr, "AnimNotify_ThrowRope", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ThrowRope_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ThrowRope_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ThrowRope()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ThrowRope_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCK_AnimInstance_GetCurrentPlayMontage_Statics
	{
		struct NPCK_AnimInstance_eventGetCurrentPlayMontage_Parms
		{
			UAnimMontage* Montage;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCK_AnimInstance_GetCurrentPlayMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NPCK_AnimInstance_eventGetCurrentPlayMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCK_AnimInstance_GetCurrentPlayMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCK_AnimInstance_GetCurrentPlayMontage_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCK_AnimInstance_GetCurrentPlayMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCK_AnimInstance_GetCurrentPlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCK_AnimInstance, nullptr, "GetCurrentPlayMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNPCK_AnimInstance_GetCurrentPlayMontage_Statics::NPCK_AnimInstance_eventGetCurrentPlayMontage_Parms), Z_Construct_UFunction_UNPCK_AnimInstance_GetCurrentPlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_GetCurrentPlayMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCK_AnimInstance_GetCurrentPlayMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_GetCurrentPlayMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCK_AnimInstance_GetCurrentPlayMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCK_AnimInstance_GetCurrentPlayMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCK_AnimInstance_GetEndedMontage_Statics
	{
		struct NPCK_AnimInstance_eventGetEndedMontage_Parms
		{
			UAnimMontage* Montage;
			bool binterp;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_binterp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_binterp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCK_AnimInstance_GetEndedMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NPCK_AnimInstance_eventGetEndedMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNPCK_AnimInstance_GetEndedMontage_Statics::NewProp_binterp_SetBit(void* Obj)
	{
		((NPCK_AnimInstance_eventGetEndedMontage_Parms*)Obj)->binterp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNPCK_AnimInstance_GetEndedMontage_Statics::NewProp_binterp = { "binterp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NPCK_AnimInstance_eventGetEndedMontage_Parms), &Z_Construct_UFunction_UNPCK_AnimInstance_GetEndedMontage_Statics::NewProp_binterp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCK_AnimInstance_GetEndedMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCK_AnimInstance_GetEndedMontage_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCK_AnimInstance_GetEndedMontage_Statics::NewProp_binterp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCK_AnimInstance_GetEndedMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCK_AnimInstance_GetEndedMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCK_AnimInstance, nullptr, "GetEndedMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNPCK_AnimInstance_GetEndedMontage_Statics::NPCK_AnimInstance_eventGetEndedMontage_Parms), Z_Construct_UFunction_UNPCK_AnimInstance_GetEndedMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_GetEndedMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCK_AnimInstance_GetEndedMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_GetEndedMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCK_AnimInstance_GetEndedMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCK_AnimInstance_GetEndedMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCK_AnimInstance_PlayAttackMontage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCK_AnimInstance_PlayAttackMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCK_AnimInstance_PlayAttackMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCK_AnimInstance, nullptr, "PlayAttackMontage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCK_AnimInstance_PlayAttackMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_PlayAttackMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCK_AnimInstance_PlayAttackMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCK_AnimInstance_PlayAttackMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNPCK_AnimInstance_test_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCK_AnimInstance_test_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCK_AnimInstance_test_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCK_AnimInstance, nullptr, "test", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNPCK_AnimInstance_test_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCK_AnimInstance_test_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNPCK_AnimInstance_test()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCK_AnimInstance_test_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCK_AnimInstance);
	UClass* Z_Construct_UClass_UNPCK_AnimInstance_NoRegister()
	{
		return UNPCK_AnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UNPCK_AnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_me_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_me;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inAir_MetaData[];
#endif
		static void NewProp_inAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_inAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_jumpCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isGuard_MetaData[];
#endif
		static void NewProp_isGuard_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isGuard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isHit_MetaData[];
#endif
		static void NewProp_isHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_guardBreak_MetaData[];
#endif
		static void NewProp_guardBreak_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_guardBreak;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startParry_MetaData[];
#endif
		static void NewProp_startParry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_startParry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_guardMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_guardMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_hitMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_impact_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_impact;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_FinisherMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player_FinisherMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_assassinationMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player_assassinationMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNPCK_AnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_NPCK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNPCK_AnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_AnimEnd, "AnimNotify_AnimEnd" }, // 1966836604
		{ &Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_EndAttack, "AnimNotify_EndAttack" }, // 3961131295
		{ &Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_GuardBreakEnd, "AnimNotify_GuardBreakEnd" }, // 480436425
		{ &Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_GuardHitEnd, "AnimNotify_GuardHitEnd" }, // 2305357112
		{ &Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_HitEnd, "AnimNotify_HitEnd" }, // 2830301096
		{ &Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryAction, "AnimNotify_ParryAction" }, // 597494573
		{ &Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryEnd, "AnimNotify_ParryEnd" }, // 259888564
		{ &Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ParryStart, "AnimNotify_ParryStart" }, // 740367550
		{ &Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ResetHitInfo, "AnimNotify_ResetHitInfo" }, // 3758904175
		{ &Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_RopeAppears, "AnimNotify_RopeAppears" }, // 1398997235
		{ &Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_RopeDisappear, "AnimNotify_RopeDisappear" }, // 2952524976
		{ &Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_StartGrapplingMovement, "AnimNotify_StartGrapplingMovement" }, // 1005375121
		{ &Z_Construct_UFunction_UNPCK_AnimInstance_AnimNotify_ThrowRope, "AnimNotify_ThrowRope" }, // 3457713267
		{ &Z_Construct_UFunction_UNPCK_AnimInstance_GetCurrentPlayMontage, "GetCurrentPlayMontage" }, // 3635475826
		{ &Z_Construct_UFunction_UNPCK_AnimInstance_GetEndedMontage, "GetEndedMontage" }, // 2433207045
		{ &Z_Construct_UFunction_UNPCK_AnimInstance_PlayAttackMontage, "PlayAttackMontage" }, // 882263614
		{ &Z_Construct_UFunction_UNPCK_AnimInstance_test, "test" }, // 2407531001
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_AnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "NPCK_AnimInstance.h" },
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_me_MetaData[] = {
		{ "Category", "NPCK_AnimInstance" },
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_me = { "me", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCK_AnimInstance, me), Z_Construct_UClass_ANPCK_Player_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_me_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_me_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_inAir_MetaData[] = {
		{ "Category", "NPCK_AnimInstance" },
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_inAir_SetBit(void* Obj)
	{
		((UNPCK_AnimInstance*)Obj)->inAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_inAir = { "inAir", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNPCK_AnimInstance), &Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_inAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_inAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_inAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "NPCK_AnimInstance" },
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCK_AnimInstance, speed), METADATA_PARAMS(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_direction_MetaData[] = {
		{ "Category", "NPCK_AnimInstance" },
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCK_AnimInstance, direction), METADATA_PARAMS(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_jumpCount_MetaData[] = {
		{ "Category", "NPCK_AnimInstance" },
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_jumpCount = { "jumpCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCK_AnimInstance, jumpCount), METADATA_PARAMS(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_jumpCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_jumpCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_isGuard_MetaData[] = {
		{ "Category", "NPCK_AnimInstance" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	void Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_isGuard_SetBit(void* Obj)
	{
		((UNPCK_AnimInstance*)Obj)->isGuard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_isGuard = { "isGuard", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNPCK_AnimInstance), &Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_isGuard_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_isGuard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_isGuard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_isHit_MetaData[] = {
		{ "Category", "NPCK_AnimInstance" },
		{ "Comment", "//\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
		{ "ToolTip", "\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	void Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_isHit_SetBit(void* Obj)
	{
		((UNPCK_AnimInstance*)Obj)->isHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_isHit = { "isHit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNPCK_AnimInstance), &Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_isHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_isHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_isHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_guardBreak_MetaData[] = {
		{ "Category", "NPCK_AnimInstance" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xea\xb7\xb9\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xea\xb7\xb9\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	void Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_guardBreak_SetBit(void* Obj)
	{
		((UNPCK_AnimInstance*)Obj)->guardBreak = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_guardBreak = { "guardBreak", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNPCK_AnimInstance), &Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_guardBreak_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_guardBreak_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_guardBreak_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_startParry_MetaData[] = {
		{ "Category", "NPCK_AnimInstance" },
		{ "Comment", "//\xef\xbf\xbd\xd0\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
		{ "ToolTip", "\xef\xbf\xbd\xd0\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	void Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_startParry_SetBit(void* Obj)
	{
		((UNPCK_AnimInstance*)Obj)->startParry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_startParry = { "startParry", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNPCK_AnimInstance), &Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_startParry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_startParry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_startParry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_guardMontage_MetaData[] = {
		{ "Category", "NPCK_AnimInstance" },
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_guardMontage = { "guardMontage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCK_AnimInstance, guardMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_guardMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_guardMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_hitMontage_MetaData[] = {
		{ "Category", "NPCK_AnimInstance" },
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_hitMontage = { "hitMontage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCK_AnimInstance, hitMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_hitMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_hitMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_impact_MetaData[] = {
		{ "Category", "NPCK_AnimInstance" },
		{ "Comment", "// \xef\xbf\xbd\xcb\xb9\xef\xbf\xbd \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
		{ "ToolTip", "\xef\xbf\xbd\xcb\xb9\xef\xbf\xbd \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_impact = { "impact", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCK_AnimInstance, impact), METADATA_PARAMS(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_impact_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_impact_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_AttackMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \n" },
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCK_AnimInstance, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_AttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_AttackMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_Player_FinisherMontage_MetaData[] = {
		{ "Category", "Montage" },
		{ "Comment", "// \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \n" },
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_Player_FinisherMontage = { "Player_FinisherMontage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCK_AnimInstance, Player_FinisherMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_Player_FinisherMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_Player_FinisherMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_Player_assassinationMontage_MetaData[] = {
		{ "Category", "Montage" },
		{ "Comment", "// \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xcf\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/NPCK_AnimInstance.h" },
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xcf\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_Player_assassinationMontage = { "Player_assassinationMontage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNPCK_AnimInstance, Player_assassinationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_Player_assassinationMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_Player_assassinationMontage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCK_AnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_me,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_inAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_jumpCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_isGuard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_isHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_guardBreak,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_startParry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_guardMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_hitMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_impact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_AttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_Player_FinisherMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCK_AnimInstance_Statics::NewProp_Player_assassinationMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNPCK_AnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCK_AnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCK_AnimInstance_Statics::ClassParams = {
		&UNPCK_AnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNPCK_AnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_AnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UNPCK_AnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCK_AnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNPCK_AnimInstance()
	{
		if (!Z_Registration_Info_UClass_UNPCK_AnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCK_AnimInstance.OuterSingleton, Z_Construct_UClass_UNPCK_AnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNPCK_AnimInstance.OuterSingleton;
	}
	template<> NPCK_API UClass* StaticClass<UNPCK_AnimInstance>()
	{
		return UNPCK_AnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCK_AnimInstance);
	UNPCK_AnimInstance::~UNPCK_AnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNPCK_AnimInstance, UNPCK_AnimInstance::StaticClass, TEXT("UNPCK_AnimInstance"), &Z_Registration_Info_UClass_UNPCK_AnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCK_AnimInstance), 1898621980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_3754689210(TEXT("/Script/NPCK"),
		Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_newnoca_Desktop_Alpha_Source_NPCK_Public_NPCK_AnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
