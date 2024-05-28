// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UNREAL_UnrealProjectile_generated_h
#error "UnrealProjectile.generated.h already included, missing '#pragma once' in UnrealProjectile.h"
#endif
#define UNREAL_UnrealProjectile_generated_h

#define FID_Unreal_Source_Unreal_UnrealProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_Source_Unreal_UnrealProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnrealProjectile(); \
	friend struct Z_Construct_UClass_AUnrealProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnrealProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Unreal"), NO_API) \
	DECLARE_SERIALIZER(AUnrealProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_Source_Unreal_UnrealProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUnrealProjectile(AUnrealProjectile&&); \
	AUnrealProjectile(const AUnrealProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnrealProjectile) \
	NO_API virtual ~AUnrealProjectile();


#define FID_Unreal_Source_Unreal_UnrealProjectile_h_12_PROLOG
#define FID_Unreal_Source_Unreal_UnrealProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Source_Unreal_UnrealProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Source_Unreal_UnrealProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Source_Unreal_UnrealProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREAL_API UClass* StaticClass<class AUnrealProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Source_Unreal_UnrealProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
