// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IP_GameProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef IP_GAME_IP_GameProjectile_generated_h
#error "IP_GameProjectile.generated.h already included, missing '#pragma once' in IP_GameProjectile.h"
#endif
#define IP_GAME_IP_GameProjectile_generated_h

#define FID_IP_Game_Source_IP_Game_IP_GameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_IP_Game_Source_IP_Game_IP_GameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIP_GameProjectile(); \
	friend struct Z_Construct_UClass_AIP_GameProjectile_Statics; \
public: \
	DECLARE_CLASS(AIP_GameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IP_Game"), NO_API) \
	DECLARE_SERIALIZER(AIP_GameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_IP_Game_Source_IP_Game_IP_GameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIP_GameProjectile(AIP_GameProjectile&&); \
	AIP_GameProjectile(const AIP_GameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIP_GameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIP_GameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIP_GameProjectile) \
	NO_API virtual ~AIP_GameProjectile();


#define FID_IP_Game_Source_IP_Game_IP_GameProjectile_h_12_PROLOG
#define FID_IP_Game_Source_IP_Game_IP_GameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IP_Game_Source_IP_Game_IP_GameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IP_Game_Source_IP_Game_IP_GameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_IP_Game_Source_IP_Game_IP_GameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IP_GAME_API UClass* StaticClass<class AIP_GameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IP_Game_Source_IP_Game_IP_GameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
