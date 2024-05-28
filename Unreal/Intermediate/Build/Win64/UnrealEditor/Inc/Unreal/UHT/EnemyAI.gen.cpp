// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal/Public/EnemyAI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAI() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UNREAL_API UClass* Z_Construct_UClass_AEnemyAI();
UNREAL_API UClass* Z_Construct_UClass_AEnemyAI_NoRegister();
UPackage* Z_Construct_UPackage__Script_Unreal();
// End Cross Module References

// Begin Class AEnemyAI
void AEnemyAI::StaticRegisterNativesAEnemyAI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyAI);
UClass* Z_Construct_UClass_AEnemyAI_NoRegister()
{
	return AEnemyAI::StaticClass();
}
struct Z_Construct_UClass_AEnemyAI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyAI.h" },
		{ "ModuleRelativePath", "Public/EnemyAI.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyAI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemyAI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyAI_Statics::ClassParams = {
	&AEnemyAI::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAI_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyAI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyAI()
{
	if (!Z_Registration_Info_UClass_AEnemyAI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyAI.OuterSingleton, Z_Construct_UClass_AEnemyAI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyAI.OuterSingleton;
}
template<> UNREAL_API UClass* StaticClass<AEnemyAI>()
{
	return AEnemyAI::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyAI);
AEnemyAI::~AEnemyAI() {}
// End Class AEnemyAI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Source_Unreal_Public_EnemyAI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyAI, AEnemyAI::StaticClass, TEXT("AEnemyAI"), &Z_Registration_Info_UClass_AEnemyAI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyAI), 4165433742U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Source_Unreal_Public_EnemyAI_h_1165586563(TEXT("/Script/Unreal"),
	Z_CompiledInDeferFile_FID_Unreal_Source_Unreal_Public_EnemyAI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Source_Unreal_Public_EnemyAI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
