// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CombatCars2WheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatCars2WheelFront() {}
// Cross Module References
	COMBATCARS2_API UClass* Z_Construct_UClass_UCombatCars2WheelFront_NoRegister();
	COMBATCARS2_API UClass* Z_Construct_UClass_UCombatCars2WheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_CombatCars2();
// End Cross Module References
	void UCombatCars2WheelFront::StaticRegisterNativesUCombatCars2WheelFront()
	{
	}
	UClass* Z_Construct_UClass_UCombatCars2WheelFront_NoRegister()
	{
		return UCombatCars2WheelFront::StaticClass();
	}
	UClass* Z_Construct_UClass_UCombatCars2WheelFront()
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
				{ "IncludePath", "CombatCars2WheelFront.h" },
				{ "ModuleRelativePath", "CombatCars2WheelFront.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCombatCars2WheelFront>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCombatCars2WheelFront::StaticClass,
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
	IMPLEMENT_CLASS(UCombatCars2WheelFront, 3627674728);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCombatCars2WheelFront(Z_Construct_UClass_UCombatCars2WheelFront, &UCombatCars2WheelFront::StaticClass, TEXT("/Script/CombatCars2"), TEXT("UCombatCars2WheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatCars2WheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
