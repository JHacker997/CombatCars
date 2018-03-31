// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBATCARS2_GunController_generated_h
#error "GunController.generated.h already included, missing '#pragma once' in GunController.h"
#endif
#define COMBATCARS2_GunController_generated_h

#define CC3_Source_CombatCars2_GunController_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execkillChildren) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->killChildren(); \
		P_NATIVE_END; \
	}


#define CC3_Source_CombatCars2_GunController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execkillChildren) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->killChildren(); \
		P_NATIVE_END; \
	}


#define CC3_Source_CombatCars2_GunController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGunController(); \
	friend COMBATCARS2_API class UClass* Z_Construct_UClass_UGunController(); \
public: \
	DECLARE_CLASS(UGunController, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CombatCars2"), NO_API) \
	DECLARE_SERIALIZER(UGunController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CC3_Source_CombatCars2_GunController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGunController(); \
	friend COMBATCARS2_API class UClass* Z_Construct_UClass_UGunController(); \
public: \
	DECLARE_CLASS(UGunController, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CombatCars2"), NO_API) \
	DECLARE_SERIALIZER(UGunController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CC3_Source_CombatCars2_GunController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGunController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGunController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGunController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGunController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGunController(UGunController&&); \
	NO_API UGunController(const UGunController&); \
public:


#define CC3_Source_CombatCars2_GunController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGunController(UGunController&&); \
	NO_API UGunController(const UGunController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGunController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGunController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGunController)


#define CC3_Source_CombatCars2_GunController_h_14_PRIVATE_PROPERTY_OFFSET
#define CC3_Source_CombatCars2_GunController_h_11_PROLOG
#define CC3_Source_CombatCars2_GunController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CC3_Source_CombatCars2_GunController_h_14_PRIVATE_PROPERTY_OFFSET \
	CC3_Source_CombatCars2_GunController_h_14_RPC_WRAPPERS \
	CC3_Source_CombatCars2_GunController_h_14_INCLASS \
	CC3_Source_CombatCars2_GunController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CC3_Source_CombatCars2_GunController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CC3_Source_CombatCars2_GunController_h_14_PRIVATE_PROPERTY_OFFSET \
	CC3_Source_CombatCars2_GunController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CC3_Source_CombatCars2_GunController_h_14_INCLASS_NO_PURE_DECLS \
	CC3_Source_CombatCars2_GunController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CC3_Source_CombatCars2_GunController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
