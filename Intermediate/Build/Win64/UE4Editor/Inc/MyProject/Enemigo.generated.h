// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_Enemigo_generated_h
#error "Enemigo.generated.h already included, missing '#pragma once' in Enemigo.h"
#endif
#define MYPROJECT_Enemigo_generated_h

#define MyProject_Source_MyProject_Enemigo_h_12_SPARSE_DATA
#define MyProject_Source_MyProject_Enemigo_h_12_RPC_WRAPPERS
#define MyProject_Source_MyProject_Enemigo_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_Enemigo_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemigo(); \
	friend struct Z_Construct_UClass_AEnemigo_Statics; \
public: \
	DECLARE_CLASS(AEnemigo, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemigo)


#define MyProject_Source_MyProject_Enemigo_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemigo(); \
	friend struct Z_Construct_UClass_AEnemigo_Statics; \
public: \
	DECLARE_CLASS(AEnemigo, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemigo)


#define MyProject_Source_MyProject_Enemigo_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemigo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemigo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemigo(AEnemigo&&); \
	NO_API AEnemigo(const AEnemigo&); \
public:


#define MyProject_Source_MyProject_Enemigo_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemigo(AEnemigo&&); \
	NO_API AEnemigo(const AEnemigo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemigo)


#define MyProject_Source_MyProject_Enemigo_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(AEnemigo, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__Energy() { return STRUCT_OFFSET(AEnemigo, Energy); }


#define MyProject_Source_MyProject_Enemigo_h_9_PROLOG
#define MyProject_Source_MyProject_Enemigo_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Enemigo_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Enemigo_h_12_SPARSE_DATA \
	MyProject_Source_MyProject_Enemigo_h_12_RPC_WRAPPERS \
	MyProject_Source_MyProject_Enemigo_h_12_INCLASS \
	MyProject_Source_MyProject_Enemigo_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_Enemigo_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Enemigo_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Enemigo_h_12_SPARSE_DATA \
	MyProject_Source_MyProject_Enemigo_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Enemigo_h_12_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Enemigo_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AEnemigo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_Enemigo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
