// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIP_Game_init() {}
	IP_GAME_API UFunction* Z_Construct_UDelegateFunction_IP_Game_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_IP_Game;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_IP_Game()
	{
		if (!Z_Registration_Info_UPackage__Script_IP_Game.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_IP_Game_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/IP_Game",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2697E8B2,
				0xFC0E77C8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_IP_Game.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_IP_Game.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_IP_Game(Z_Construct_UPackage__Script_IP_Game, TEXT("/Script/IP_Game"), Z_Registration_Info_UPackage__Script_IP_Game, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2697E8B2, 0xFC0E77C8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
