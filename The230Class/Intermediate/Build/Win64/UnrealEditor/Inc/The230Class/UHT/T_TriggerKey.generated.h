// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "T_TriggerKey.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef THE230CLASS_T_TriggerKey_generated_h
#error "T_TriggerKey.generated.h already included, missing '#pragma once' in T_TriggerKey.h"
#endif
#define THE230CLASS_T_TriggerKey_generated_h

#define FID_The230Class_Source_The230Class_Public_T_TriggerKey_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_The230Class_Source_The230Class_Public_T_TriggerKey_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT_TriggerKey(); \
	friend struct Z_Construct_UClass_AT_TriggerKey_Statics; \
public: \
	DECLARE_CLASS(AT_TriggerKey, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The230Class"), NO_API) \
	DECLARE_SERIALIZER(AT_TriggerKey)


#define FID_The230Class_Source_The230Class_Public_T_TriggerKey_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AT_TriggerKey(AT_TriggerKey&&); \
	AT_TriggerKey(const AT_TriggerKey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT_TriggerKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT_TriggerKey); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AT_TriggerKey) \
	NO_API virtual ~AT_TriggerKey();


#define FID_The230Class_Source_The230Class_Public_T_TriggerKey_h_7_PROLOG
#define FID_The230Class_Source_The230Class_Public_T_TriggerKey_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The230Class_Source_The230Class_Public_T_TriggerKey_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The230Class_Source_The230Class_Public_T_TriggerKey_h_10_INCLASS_NO_PURE_DECLS \
	FID_The230Class_Source_The230Class_Public_T_TriggerKey_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THE230CLASS_API UClass* StaticClass<class AT_TriggerKey>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The230Class_Source_The230Class_Public_T_TriggerKey_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
