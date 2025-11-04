// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The230Class/T_Pickup_Health.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT_Pickup_Health() {}

// Begin Cross Module References
THE230CLASS_API UClass* Z_Construct_UClass_AT_Pickup();
THE230CLASS_API UClass* Z_Construct_UClass_AT_Pickup_Health();
THE230CLASS_API UClass* Z_Construct_UClass_AT_Pickup_Health_NoRegister();
UPackage* Z_Construct_UPackage__Script_The230Class();
// End Cross Module References

// Begin Class AT_Pickup_Health
void AT_Pickup_Health::StaticRegisterNativesAT_Pickup_Health()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT_Pickup_Health);
UClass* Z_Construct_UClass_AT_Pickup_Health_NoRegister()
{
	return AT_Pickup_Health::StaticClass();
}
struct Z_Construct_UClass_AT_Pickup_Health_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "T_Pickup_Health.h" },
		{ "ModuleRelativePath", "T_Pickup_Health.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT_Pickup_Health>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AT_Pickup_Health_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AT_Pickup,
	(UObject* (*)())Z_Construct_UPackage__Script_The230Class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AT_Pickup_Health_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AT_Pickup_Health_Statics::ClassParams = {
	&AT_Pickup_Health::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AT_Pickup_Health_Statics::Class_MetaDataParams), Z_Construct_UClass_AT_Pickup_Health_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AT_Pickup_Health()
{
	if (!Z_Registration_Info_UClass_AT_Pickup_Health.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT_Pickup_Health.OuterSingleton, Z_Construct_UClass_AT_Pickup_Health_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AT_Pickup_Health.OuterSingleton;
}
template<> THE230CLASS_API UClass* StaticClass<AT_Pickup_Health>()
{
	return AT_Pickup_Health::StaticClass();
}
AT_Pickup_Health::AT_Pickup_Health() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AT_Pickup_Health);
AT_Pickup_Health::~AT_Pickup_Health() {}
// End Class AT_Pickup_Health

// Begin Registration
struct Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_Pickup_Health_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AT_Pickup_Health, AT_Pickup_Health::StaticClass, TEXT("AT_Pickup_Health"), &Z_Registration_Info_UClass_AT_Pickup_Health, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT_Pickup_Health), 3909905016U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_Pickup_Health_h_845449051(TEXT("/Script/The230Class"),
	Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_Pickup_Health_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_Pickup_Health_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
