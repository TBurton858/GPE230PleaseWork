// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The230Class/T_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT_Character() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
THE230CLASS_API UClass* Z_Construct_UClass_AT_Character();
THE230CLASS_API UClass* Z_Construct_UClass_AT_Character_NoRegister();
UPackage* Z_Construct_UPackage__Script_The230Class();
// End Cross Module References

// Begin Class AT_Character Function ApplyDamage
struct Z_Construct_UFunction_AT_Character_ApplyDamage_Statics
{
	struct T_Character_eventApplyDamage_Parms
	{
		float DamageAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Simplified Damage and Heal\n" },
#endif
		{ "ModuleRelativePath", "T_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simplified Damage and Heal" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AT_Character_ApplyDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(T_Character_eventApplyDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT_Character_ApplyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT_Character_ApplyDamage_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AT_Character_ApplyDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT_Character_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT_Character, nullptr, "ApplyDamage", nullptr, nullptr, Z_Construct_UFunction_AT_Character_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT_Character_ApplyDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AT_Character_ApplyDamage_Statics::T_Character_eventApplyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AT_Character_ApplyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AT_Character_ApplyDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AT_Character_ApplyDamage_Statics::T_Character_eventApplyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AT_Character_ApplyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT_Character_ApplyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AT_Character::execApplyDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDamage(Z_Param_DamageAmount);
	P_NATIVE_END;
}
// End Class AT_Character Function ApplyDamage

// Begin Class AT_Character Function ApplyHeal
struct Z_Construct_UFunction_AT_Character_ApplyHeal_Statics
{
	struct T_Character_eventApplyHeal_Parms
	{
		float HealAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "T_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AT_Character_ApplyHeal_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(T_Character_eventApplyHeal_Parms, HealAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT_Character_ApplyHeal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT_Character_ApplyHeal_Statics::NewProp_HealAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AT_Character_ApplyHeal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT_Character_ApplyHeal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT_Character, nullptr, "ApplyHeal", nullptr, nullptr, Z_Construct_UFunction_AT_Character_ApplyHeal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT_Character_ApplyHeal_Statics::PropPointers), sizeof(Z_Construct_UFunction_AT_Character_ApplyHeal_Statics::T_Character_eventApplyHeal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AT_Character_ApplyHeal_Statics::Function_MetaDataParams), Z_Construct_UFunction_AT_Character_ApplyHeal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AT_Character_ApplyHeal_Statics::T_Character_eventApplyHeal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AT_Character_ApplyHeal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT_Character_ApplyHeal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AT_Character::execApplyHeal)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HealAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyHeal(Z_Param_HealAmount);
	P_NATIVE_END;
}
// End Class AT_Character Function ApplyHeal

// Begin Class AT_Character Function Die
struct Z_Construct_UFunction_AT_Character_Die_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "T_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT_Character_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT_Character, nullptr, "Die", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AT_Character_Die_Statics::Function_MetaDataParams), Z_Construct_UFunction_AT_Character_Die_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AT_Character_Die()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT_Character_Die_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AT_Character::execDie)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Die();
	P_NATIVE_END;
}
// End Class AT_Character Function Die

// Begin Class AT_Character
void AT_Character::StaticRegisterNativesAT_Character()
{
	UClass* Class = AT_Character::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDamage", &AT_Character::execApplyDamage },
		{ "ApplyHeal", &AT_Character::execApplyHeal },
		{ "Die", &AT_Character::execDie },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT_Character);
UClass* Z_Construct_UClass_AT_Character_NoRegister()
{
	return AT_Character::StaticClass();
}
struct Z_Construct_UClass_AT_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "T_Character.h" },
		{ "ModuleRelativePath", "T_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health variables\n" },
#endif
		{ "ModuleRelativePath", "T_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "T_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement speeds\n" },
#endif
		{ "ModuleRelativePath", "T_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement speeds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "T_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AT_Character_ApplyDamage, "ApplyDamage" }, // 3921556369
		{ &Z_Construct_UFunction_AT_Character_ApplyHeal, "ApplyHeal" }, // 3372618549
		{ &Z_Construct_UFunction_AT_Character_Die, "Die" }, // 2378357293
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT_Character_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_Character, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT_Character_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_Character, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT_Character_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_Character, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT_Character_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_Character, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT_Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT_Character_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT_Character_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT_Character_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT_Character_Statics::NewProp_RotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AT_Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AT_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_The230Class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AT_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AT_Character_Statics::ClassParams = {
	&AT_Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AT_Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AT_Character_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AT_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_AT_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AT_Character()
{
	if (!Z_Registration_Info_UClass_AT_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT_Character.OuterSingleton, Z_Construct_UClass_AT_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AT_Character.OuterSingleton;
}
template<> THE230CLASS_API UClass* StaticClass<AT_Character>()
{
	return AT_Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AT_Character);
AT_Character::~AT_Character() {}
// End Class AT_Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AT_Character, AT_Character::StaticClass, TEXT("AT_Character"), &Z_Registration_Info_UClass_AT_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT_Character), 2514388347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_Character_h_38442348(TEXT("/Script/The230Class"),
	Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
