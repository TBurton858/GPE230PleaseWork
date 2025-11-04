// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The230Class/T_EnemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT_EnemyCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
THE230CLASS_API UClass* Z_Construct_UClass_AT_EnemyCharacter();
THE230CLASS_API UClass* Z_Construct_UClass_AT_EnemyCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_The230Class();
// End Cross Module References

// Begin Class AT_EnemyCharacter Function AttackPlayer
struct Z_Construct_UFunction_AT_EnemyCharacter_AttackPlayer_Statics
{
	struct T_EnemyCharacter_eventAttackPlayer_Parms
	{
		AActor* TargetActor;
		float DamageAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This function will be called from Blueprint\n" },
#endif
		{ "CPP_Default_DamageAmount", "10.000000" },
		{ "ModuleRelativePath", "T_EnemyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function will be called from Blueprint" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT_EnemyCharacter_AttackPlayer_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(T_EnemyCharacter_eventAttackPlayer_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AT_EnemyCharacter_AttackPlayer_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(T_EnemyCharacter_eventAttackPlayer_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT_EnemyCharacter_AttackPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT_EnemyCharacter_AttackPlayer_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT_EnemyCharacter_AttackPlayer_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AT_EnemyCharacter_AttackPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT_EnemyCharacter_AttackPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT_EnemyCharacter, nullptr, "AttackPlayer", nullptr, nullptr, Z_Construct_UFunction_AT_EnemyCharacter_AttackPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT_EnemyCharacter_AttackPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AT_EnemyCharacter_AttackPlayer_Statics::T_EnemyCharacter_eventAttackPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AT_EnemyCharacter_AttackPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AT_EnemyCharacter_AttackPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AT_EnemyCharacter_AttackPlayer_Statics::T_EnemyCharacter_eventAttackPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AT_EnemyCharacter_AttackPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT_EnemyCharacter_AttackPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AT_EnemyCharacter::execAttackPlayer)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttackPlayer(Z_Param_TargetActor,Z_Param_DamageAmount);
	P_NATIVE_END;
}
// End Class AT_EnemyCharacter Function AttackPlayer

// Begin Class AT_EnemyCharacter
void AT_EnemyCharacter::StaticRegisterNativesAT_EnemyCharacter()
{
	UClass* Class = AT_EnemyCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttackPlayer", &AT_EnemyCharacter::execAttackPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT_EnemyCharacter);
UClass* Z_Construct_UClass_AT_EnemyCharacter_NoRegister()
{
	return AT_EnemyCharacter::StaticClass();
}
struct Z_Construct_UClass_AT_EnemyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "T_EnemyCharacter.h" },
		{ "ModuleRelativePath", "T_EnemyCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AT_EnemyCharacter_AttackPlayer, "AttackPlayer" }, // 2711740753
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT_EnemyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AT_EnemyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_The230Class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AT_EnemyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AT_EnemyCharacter_Statics::ClassParams = {
	&AT_EnemyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AT_EnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AT_EnemyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AT_EnemyCharacter()
{
	if (!Z_Registration_Info_UClass_AT_EnemyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT_EnemyCharacter.OuterSingleton, Z_Construct_UClass_AT_EnemyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AT_EnemyCharacter.OuterSingleton;
}
template<> THE230CLASS_API UClass* StaticClass<AT_EnemyCharacter>()
{
	return AT_EnemyCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AT_EnemyCharacter);
AT_EnemyCharacter::~AT_EnemyCharacter() {}
// End Class AT_EnemyCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_EnemyCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AT_EnemyCharacter, AT_EnemyCharacter::StaticClass, TEXT("AT_EnemyCharacter"), &Z_Registration_Info_UClass_AT_EnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT_EnemyCharacter), 2321533384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_EnemyCharacter_h_2526159296(TEXT("/Script/The230Class"),
	Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_EnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_EnemyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
