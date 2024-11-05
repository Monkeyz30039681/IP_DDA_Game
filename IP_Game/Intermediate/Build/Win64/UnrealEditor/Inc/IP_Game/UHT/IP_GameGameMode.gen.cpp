// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IP_Game/IP_GameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIP_GameGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
IP_GAME_API UClass* Z_Construct_UClass_AIP_GameGameMode();
IP_GAME_API UClass* Z_Construct_UClass_AIP_GameGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_IP_Game();
// End Cross Module References

// Begin Class AIP_GameGameMode
void AIP_GameGameMode::StaticRegisterNativesAIP_GameGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIP_GameGameMode);
UClass* Z_Construct_UClass_AIP_GameGameMode_NoRegister()
{
	return AIP_GameGameMode::StaticClass();
}
struct Z_Construct_UClass_AIP_GameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "IP_GameGameMode.h" },
		{ "ModuleRelativePath", "IP_GameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIP_GameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AIP_GameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IP_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_GameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIP_GameGameMode_Statics::ClassParams = {
	&AIP_GameGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIP_GameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AIP_GameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIP_GameGameMode()
{
	if (!Z_Registration_Info_UClass_AIP_GameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIP_GameGameMode.OuterSingleton, Z_Construct_UClass_AIP_GameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIP_GameGameMode.OuterSingleton;
}
template<> IP_GAME_API UClass* StaticClass<AIP_GameGameMode>()
{
	return AIP_GameGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIP_GameGameMode);
AIP_GameGameMode::~AIP_GameGameMode() {}
// End Class AIP_GameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_IP_Game_Source_IP_Game_IP_GameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIP_GameGameMode, AIP_GameGameMode::StaticClass, TEXT("AIP_GameGameMode"), &Z_Registration_Info_UClass_AIP_GameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIP_GameGameMode), 3990116315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IP_Game_Source_IP_Game_IP_GameGameMode_h_3796324900(TEXT("/Script/IP_Game"),
	Z_CompiledInDeferFile_FID_IP_Game_Source_IP_Game_IP_GameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IP_Game_Source_IP_Game_IP_GameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
