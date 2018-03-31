// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CombatCars2WheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatCars2WheelRear() {}
// Cross Module References
	COMBATCARS2_API UClass* Z_Construct_UClass_UCombatCars2WheelRear_NoRegister();
	COMBATCARS2_API UClass* Z_Construct_UClass_UCombatCars2WheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_CombatCars2();
// End Cross Module References
	void UCombatCars2WheelRear::StaticRegisterNativesUCombatCars2WheelRear()
	{
	}
	UClass* Z_Construct_UClass_UCombatCars2WheelRear_NoRegister()
	{
		return UCombatCars2WheelRear::StaticClass();
	}
	UClass* Z_Construct_UClass_UCombatCars2WheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
				(UObject* (*)())Z_Construct_UPackage__Script_CombatCars2,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "CombatCars2WheelRear.h" },
				{ "ModuleRelativePath", "CombatCars2WheelRear.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCombatCars2WheelRear>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCombatCars2WheelRear::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCombatCars2WheelRear, 2496714830);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCombatCars2WheelRear(Z_Construct_UClass_UCombatCars2WheelRear, &UCombatCars2WheelRear::StaticClass, TEXT("/Script/CombatCars2"), TEXT("UCombatCars2WheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatCars2WheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
