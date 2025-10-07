// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "T_KEYJUSTWORK.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef THE230CLASS_T_KEYJUSTWORK_generated_h
#error "T_KEYJUSTWORK.generated.h already included, missing '#pragma once' in T_KEYJUSTWORK.h"
#endif
#define THE230CLASS_T_KEYJUSTWORK_generated_h

#define FID_The230Class_Source_The230Class_T_KEYJUSTWORK_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_The230Class_Source_The230Class_T_KEYJUSTWORK_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT_Key(); \
	friend struct Z_Construct_UClass_AT_Key_Statics; \
public: \
	DECLARE_CLASS(AT_Key, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The230Class"), NO_API) \
	DECLARE_SERIALIZER(AT_Key)


#define FID_The230Class_Source_The230Class_T_KEYJUSTWORK_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AT_Key(AT_Key&&); \
	AT_Key(const AT_Key&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT_Key); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT_Key); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AT_Key) \
	NO_API virtual ~AT_Key();


#define FID_The230Class_Source_The230Class_T_KEYJUSTWORK_h_9_PROLOG
#define FID_The230Class_Source_The230Class_T_KEYJUSTWORK_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The230Class_Source_The230Class_T_KEYJUSTWORK_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The230Class_Source_The230Class_T_KEYJUSTWORK_h_12_INCLASS_NO_PURE_DECLS \
	FID_The230Class_Source_The230Class_T_KEYJUSTWORK_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THE230CLASS_API UClass* StaticClass<class AT_Key>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The230Class_Source_The230Class_T_KEYJUSTWORK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
