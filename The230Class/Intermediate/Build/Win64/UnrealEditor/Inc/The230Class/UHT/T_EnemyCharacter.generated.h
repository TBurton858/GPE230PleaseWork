// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "T_EnemyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef THE230CLASS_T_EnemyCharacter_generated_h
#error "T_EnemyCharacter.generated.h already included, missing '#pragma once' in T_EnemyCharacter.h"
#endif
#define THE230CLASS_T_EnemyCharacter_generated_h

#define FID_The230Class_Source_The230Class_T_EnemyCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAttackPlayer);


#define FID_The230Class_Source_The230Class_T_EnemyCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT_EnemyCharacter(); \
	friend struct Z_Construct_UClass_AT_EnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AT_EnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/The230Class"), NO_API) \
	DECLARE_SERIALIZER(AT_EnemyCharacter)


#define FID_The230Class_Source_The230Class_T_EnemyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AT_EnemyCharacter(AT_EnemyCharacter&&); \
	AT_EnemyCharacter(const AT_EnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT_EnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT_EnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AT_EnemyCharacter) \
	NO_API virtual ~AT_EnemyCharacter();


#define FID_The230Class_Source_The230Class_T_EnemyCharacter_h_10_PROLOG
#define FID_The230Class_Source_The230Class_T_EnemyCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_The230Class_Source_The230Class_T_EnemyCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_The230Class_Source_The230Class_T_EnemyCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_The230Class_Source_The230Class_T_EnemyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THE230CLASS_API UClass* StaticClass<class AT_EnemyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_The230Class_Source_The230Class_T_EnemyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
