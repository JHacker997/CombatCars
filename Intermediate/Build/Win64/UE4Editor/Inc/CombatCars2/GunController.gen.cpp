// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GunController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunController() {}
// Cross Module References
	COMBATCARS2_API UClass* Z_Construct_UClass_UGunController_NoRegister();
	COMBATCARS2_API UClass* Z_Construct_UClass_UGunController();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CombatCars2();
	COMBATCARS2_API UFunction* Z_Construct_UFunction_UGunController_killChildren();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void UGunController::StaticRegisterNativesUGunController()
	{
		UClass* Class = UGunController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "killChildren", (Native)&UGunController::execkillChildren },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGunController_killChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "GunController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGunController, "killChildren", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGunController_NoRegister()
	{
		return UGunController::StaticClass();
	}
	UClass* Z_Construct_UClass_UGunController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_CombatCars2,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGunController_killChildren, "killChildren" }, // 1235553645
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "GunController.h" },
				{ "ModuleRelativePath", "GunController.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[] = {
				{ "Category", "GunController" },
				{ "ModuleRelativePath", "GunController.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_location = { UE4CodeGen_Private::EPropertyClass::Struct, "location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGunController, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_location_MetaData, ARRAY_COUNT(NewProp_location_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gun3_MetaData[] = {
				{ "Category", "GunController" },
				{ "ModuleRelativePath", "GunController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gun3 = { UE4CodeGen_Private::EPropertyClass::Object, "gun3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGunController, gun3), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(NewProp_gun3_MetaData, ARRAY_COUNT(NewProp_gun3_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gun2_MetaData[] = {
				{ "Category", "GunController" },
				{ "ModuleRelativePath", "GunController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gun2 = { UE4CodeGen_Private::EPropertyClass::Object, "gun2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGunController, gun2), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(NewProp_gun2_MetaData, ARRAY_COUNT(NewProp_gun2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gungun2_MetaData[] = {
				{ "Category", "GunController" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "GunController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gungun2 = { UE4CodeGen_Private::EPropertyClass::Object, "gungun2", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(UGunController, gungun2), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(NewProp_gungun2_MetaData, ARRAY_COUNT(NewProp_gungun2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gungun_MetaData[] = {
				{ "Category", "GunController" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "GunController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gungun = { UE4CodeGen_Private::EPropertyClass::Object, "gungun", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(UGunController, gungun), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(NewProp_gungun_MetaData, ARRAY_COUNT(NewProp_gungun_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetSM_JoyControl2_MetaData[] = {
				{ "Category", "GunController" },
				{ "ModuleRelativePath", "GunController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetSM_JoyControl2 = { UE4CodeGen_Private::EPropertyClass::Object, "AssetSM_JoyControl2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGunController, AssetSM_JoyControl2), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_AssetSM_JoyControl2_MetaData, ARRAY_COUNT(NewProp_AssetSM_JoyControl2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bullet1_MetaData[] = {
				{ "Category", "GunController" },
				{ "ModuleRelativePath", "GunController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bullet1 = { UE4CodeGen_Private::EPropertyClass::Object, "Bullet1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGunController, Bullet1), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(NewProp_Bullet1_MetaData, ARRAY_COUNT(NewProp_Bullet1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetSM_JoyControl_MetaData[] = {
				{ "Category", "GunController" },
				{ "ModuleRelativePath", "GunController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetSM_JoyControl = { UE4CodeGen_Private::EPropertyClass::Object, "AssetSM_JoyControl", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UGunController, AssetSM_JoyControl), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_AssetSM_JoyControl_MetaData, ARRAY_COUNT(NewProp_AssetSM_JoyControl_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoyfulControl_MetaData[] = {
				{ "Category", "GunController" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "GunController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JoyfulControl = { UE4CodeGen_Private::EPropertyClass::Object, "JoyfulControl", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(UGunController, JoyfulControl), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_JoyfulControl_MetaData, ARRAY_COUNT(NewProp_JoyfulControl_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_gun3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_gun2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_gungun2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_gungun,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetSM_JoyControl2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bullet1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetSM_JoyControl,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JoyfulControl,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGunController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGunController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGunController, 3450429594);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGunController(Z_Construct_UClass_UGunController, &UGunController::StaticClass, TEXT("/Script/CombatCars2"), TEXT("UGunController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGunController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
