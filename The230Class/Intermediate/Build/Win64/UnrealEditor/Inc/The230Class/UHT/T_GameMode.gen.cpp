// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The230Class/T_GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT_GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THE230CLASS_API UClass* Z_Construct_UClass_AT_GameMode();
THE230CLASS_API UClass* Z_Construct_UClass_AT_GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_The230Class();
// End Cross Module References

// Begin Class AT_GameMode
void AT_GameMode::StaticRegisterNativesAT_GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT_GameMode);
UClass* Z_Construct_UClass_AT_GameMode_NoRegister()
{
	return AT_GameMode::StaticClass();
}
struct Z_Construct_UClass_AT_GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "T_GameMode.h" },
		{ "ModuleRelativePath", "T_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT_GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AT_GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_The230Class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AT_GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AT_GameMode_Statics::ClassParams = {
	&AT_GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AT_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AT_GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AT_GameMode()
{
	if (!Z_Registration_Info_UClass_AT_GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT_GameMode.OuterSingleton, Z_Construct_UClass_AT_GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AT_GameMode.OuterSingleton;
}
template<> THE230CLASS_API UClass* StaticClass<AT_GameMode>()
{
	return AT_GameMode::StaticClass();
}
AT_GameMode::AT_GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AT_GameMode);
AT_GameMode::~AT_GameMode() {}
// End Class AT_GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AT_GameMode, AT_GameMode::StaticClass, TEXT("AT_GameMode"), &Z_Registration_Info_UClass_AT_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT_GameMode), 1610524533U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_GameMode_h_814992049(TEXT("/Script/The230Class"),
	Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_The230Class_Source_The230Class_T_GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
