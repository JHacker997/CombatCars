// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBATCARS2_DamageController_generated_h
#error "DamageController.generated.h already included, missing '#pragma once' in DamageController.h"
#endif
#define COMBATCARS2_DamageController_generated_h

#define CC3_Source_CombatCars2_DamageController_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetHealthMax) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHealthMax(Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyDamage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->ApplyDamage(Z_Param_damage); \
		P_NATIVE_END; \
	}


#define CC3_Source_CombatCars2_DamageController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetHealthMax) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHealthMax(Z_Param_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyDamage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->ApplyDamage(Z_Param_damage); \
		P_NATIVE_END; \
	}


#define CC3_Source_CombatCars2_DamageController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDamageController(); \
	friend COMBATCARS2_API class UClass* Z_Construct_UClass_UDamageController(); \
public: \
	DECLARE_CLASS(UDamageController, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CombatCars2"), NO_API) \
	DECLARE_SERIALIZER(UDamageController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CC3_Source_CombatCars2_DamageController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDamageController(); \
	friend COMBATCARS2_API class UClass* Z_Construct_UClass_UDamageController(); \
public: \
	DECLARE_CLASS(UDamageController, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CombatCars2"), NO_API) \
	DECLARE_SERIALIZER(UDamageController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CC3_Source_CombatCars2_DamageController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDamageController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDamageController(UDamageController&&); \
	NO_API UDamageController(const UDamageController&); \
public:


#define CC3_Source_CombatCars2_DamageController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDamageController(UDamageController&&); \
	NO_API UDamageController(const UDamageController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDamageController)


#define CC3_Source_CombatCars2_DamageController_h_13_PRIVATE_PROPERTY_OFFSET
#define CC3_Source_CombatCars2_DamageController_h_10_PROLOG
#define CC3_Source_CombatCars2_DamageController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CC3_Source_CombatCars2_DamageController_h_13_PRIVATE_PROPERTY_OFFSET \
	CC3_Source_CombatCars2_DamageController_h_13_RPC_WRAPPERS \
	CC3_Source_CombatCars2_DamageController_h_13_INCLASS \
	CC3_Source_CombatCars2_DamageController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CC3_Source_CombatCars2_DamageController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CC3_Source_CombatCars2_DamageController_h_13_PRIVATE_PROPERTY_OFFSET \
	CC3_Source_CombatCars2_DamageController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CC3_Source_CombatCars2_DamageController_h_13_INCLASS_NO_PURE_DECLS \
	CC3_Source_CombatCars2_DamageController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CC3_Source_CombatCars2_DamageController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
