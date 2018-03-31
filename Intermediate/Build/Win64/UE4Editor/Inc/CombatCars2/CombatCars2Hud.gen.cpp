// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CombatCars2Hud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatCars2Hud() {}
// Cross Module References
	COMBATCARS2_API UClass* Z_Construct_UClass_ACombatCars2Hud_NoRegister();
	COMBATCARS2_API UClass* Z_Construct_UClass_ACombatCars2Hud();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CombatCars2();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void ACombatCars2Hud::StaticRegisterNativesACombatCars2Hud()
	{
	}
	UClass* Z_Construct_UClass_ACombatCars2Hud_NoRegister()
	{
		return ACombatCars2Hud::StaticClass();
	}
	UClass* Z_Construct_UClass_ACombatCars2Hud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_CombatCars2,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "CombatCars2Hud.h" },
				{ "ModuleRelativePath", "CombatCars2Hud.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDFont_MetaData[] = {
				{ "ModuleRelativePath", "CombatCars2Hud.h" },
				{ "ToolTip", "Font used to render the vehicle info" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDFont = { UE4CodeGen_Private::EPropertyClass::Object, "HUDFont", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ACombatCars2Hud, HUDFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(NewProp_HUDFont_MetaData, ARRAY_COUNT(NewProp_HUDFont_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HUDFont,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACombatCars2Hud>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACombatCars2Hud::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACombatCars2Hud, 3338713022);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACombatCars2Hud(Z_Construct_UClass_ACombatCars2Hud, &ACombatCars2Hud::StaticClass, TEXT("/Script/CombatCars2"), TEXT("ACombatCars2Hud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACombatCars2Hud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
