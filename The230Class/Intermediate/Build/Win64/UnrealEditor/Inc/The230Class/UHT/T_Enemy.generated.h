// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "T_Enemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef THE230CLASS_T_Enemy_generated_h
#error "T_Enemy.generated.h already included, missing '#pragma once' in T_Enemy.h"
#endif
#define THE230CLASS_T_Enemy_generated_h

#define FID_The230Class_Source_The230Class_T_Enemy_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAttackPlayer);


#define FID_The230Class_Source_The230Class_T_Enemy_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT_Enemy(); \
	friend struct Z_Construct_UClass_AT_Enemy_Statics; \
public: \
	DECLARE_CLASS(AT_Enemy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The230Class"), NO_API) \
	DECLARE_SERIALIZER(AT_Enemy)


#define FID_The230Class_Source_The230Class_T_Enemy_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AT_Enemy(AT_Enemy&&); \
	AT_Enemy(const AT_Enemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT_Enemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT_Enemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AT_Enemy) \
	NO_API virtual ~AT_Enemy();


#define FID_The230Class_Source_The230Class_T_Enemy_h_8_PROLOG
#define FID_The230Class_Source_The230Class_T_Enemy_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The230Class_Source_The230Class_T_Enemy_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The230Class_Source_The230Class_T_Enemy_h_11_INCLASS_NO_PURE_DECLS \
	FID_The230Class_Source_The230Class_T_Enemy_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THE230CLASS_API UClass* StaticClass<class AT_Enemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The230Class_Source_The230Class_T_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
