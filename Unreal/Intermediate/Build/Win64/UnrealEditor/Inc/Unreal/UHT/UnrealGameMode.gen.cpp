// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal/UnrealGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UNREAL_API UClass* Z_Construct_UClass_AUnrealGameMode();
UNREAL_API UClass* Z_Construct_UClass_AUnrealGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Unreal();
// End Cross Module References

// Begin Class AUnrealGameMode
void AUnrealGameMode::StaticRegisterNativesAUnrealGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealGameMode);
UClass* Z_Construct_UClass_AUnrealGameMode_NoRegister()
{
	return AUnrealGameMode::StaticClass();
}
struct Z_Construct_UClass_AUnrealGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealGameMode.h" },
		{ "ModuleRelativePath", "UnrealGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUnrealGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealGameMode_Statics::ClassParams = {
	&AUnrealGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnrealGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUnrealGameMode()
{
	if (!Z_Registration_Info_UClass_AUnrealGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealGameMode.OuterSingleton, Z_Construct_UClass_AUnrealGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUnrealGameMode.OuterSingleton;
}
template<> UNREAL_API UClass* StaticClass<AUnrealGameMode>()
{
	return AUnrealGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealGameMode);
AUnrealGameMode::~AUnrealGameMode() {}
// End Class AUnrealGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Source_Unreal_UnrealGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealGameMode, AUnrealGameMode::StaticClass, TEXT("AUnrealGameMode"), &Z_Registration_Info_UClass_AUnrealGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealGameMode), 3310270816U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Source_Unreal_UnrealGameMode_h_550301020(TEXT("/Script/Unreal"),
	Z_CompiledInDeferFile_FID_Unreal_Source_Unreal_UnrealGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Source_Unreal_UnrealGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
