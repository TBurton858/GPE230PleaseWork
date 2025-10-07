// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The230Class/Public/T_TriggerKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT_TriggerKey() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
THE230CLASS_API UClass* Z_Construct_UClass_AT_TriggerKey();
THE230CLASS_API UClass* Z_Construct_UClass_AT_TriggerKey_NoRegister();
UPackage* Z_Construct_UPackage__Script_The230Class();
// End Cross Module References

// Begin Class AT_TriggerKey Function OnOverlapBegin
struct Z_Construct_UFunction_AT_TriggerKey_OnOverlapBegin_Statics
{
	struct T_TriggerKey_eventOnOverlapBegin_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/T_TriggerKey.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT_TriggerKey_OnOverlapBegin_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(T_TriggerKey_eventOnOverlapBegin_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT_TriggerKey_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(T_TriggerKey_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT_TriggerKey_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT_TriggerKey_OnOverlapBegin_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT_TriggerKey_OnOverlapBegin_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AT_TriggerKey_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT_TriggerKey_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT_TriggerKey, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AT_TriggerKey_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT_TriggerKey_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AT_TriggerKey_OnOverlapBegin_Statics::T_TriggerKey_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AT_TriggerKey_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AT_TriggerKey_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AT_TriggerKey_OnOverlapBegin_Statics::T_TriggerKey_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AT_TriggerKey_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT_TriggerKey_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AT_TriggerKey::execOnOverlapBegin)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AT_TriggerKey Function OnOverlapBegin

// Begin Class AT_TriggerKey
void AT_TriggerKey::StaticRegisterNativesAT_TriggerKey()
{
	UClass* Class = AT_TriggerKey::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &AT_TriggerKey::execOnOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT_TriggerKey);
UClass* Z_Construct_UClass_AT_TriggerKey_NoRegister()
{
	return AT_TriggerKey::StaticClass();
}
struct Z_Construct_UClass_AT_TriggerKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "T_TriggerKey.h" },
		{ "ModuleRelativePath", "Public/T_TriggerKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetToDestroy_MetaData[] = {
		{ "Category", "Key" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The actor to destroy when something overlaps\n" },
#endif
		{ "ModuleRelativePath", "Public/T_TriggerKey.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The actor to destroy when something overlaps" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetToDestroy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AT_TriggerKey_OnOverlapBegin, "OnOverlapBegin" }, // 1236692904
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT_TriggerKey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT_TriggerKey_Statics::NewProp_TargetToDestroy = { "TargetToDestroy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AT_TriggerKey, TargetToDestroy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetToDestroy_MetaData), NewProp_TargetToDestroy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT_TriggerKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT_TriggerKey_Statics::NewProp_TargetToDestroy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AT_TriggerKey_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AT_TriggerKey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATriggerBox,
	(UObject* (*)())Z_Construct_UPackage__Script_The230Class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AT_TriggerKey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AT_TriggerKey_Statics::ClassParams = {
	&AT_TriggerKey::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AT_TriggerKey_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AT_TriggerKey_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AT_TriggerKey_Statics::Class_MetaDataParams), Z_Construct_UClass_AT_TriggerKey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AT_TriggerKey()
{
	if (!Z_Registration_Info_UClass_AT_TriggerKey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT_TriggerKey.OuterSingleton, Z_Construct_UClass_AT_TriggerKey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AT_TriggerKey.OuterSingleton;
}
template<> THE230CLASS_API UClass* StaticClass<AT_TriggerKey>()
{
	return AT_TriggerKey::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AT_TriggerKey);
AT_TriggerKey::~AT_TriggerKey() {}
// End Class AT_TriggerKey

// Begin Registration
struct Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_Public_T_TriggerKey_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AT_TriggerKey, AT_TriggerKey::StaticClass, TEXT("AT_TriggerKey"), &Z_Registration_Info_UClass_AT_TriggerKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT_TriggerKey), 1578807513U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_Public_T_TriggerKey_h_3150818992(TEXT("/Script/The230Class"),
	Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_Public_T_TriggerKey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_Public_T_TriggerKey_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
