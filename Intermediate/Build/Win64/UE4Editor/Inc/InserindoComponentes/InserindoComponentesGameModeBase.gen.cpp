// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InserindoComponentes/InserindoComponentesGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInserindoComponentesGameModeBase() {}
// Cross Module References
	INSERINDOCOMPONENTES_API UClass* Z_Construct_UClass_AInserindoComponentesGameModeBase_NoRegister();
	INSERINDOCOMPONENTES_API UClass* Z_Construct_UClass_AInserindoComponentesGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_InserindoComponentes();
// End Cross Module References
	void AInserindoComponentesGameModeBase::StaticRegisterNativesAInserindoComponentesGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AInserindoComponentesGameModeBase_NoRegister()
	{
		return AInserindoComponentesGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AInserindoComponentesGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInserindoComponentesGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InserindoComponentes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInserindoComponentesGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "InserindoComponentesGameModeBase.h" },
		{ "ModuleRelativePath", "InserindoComponentesGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInserindoComponentesGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInserindoComponentesGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInserindoComponentesGameModeBase_Statics::ClassParams = {
		&AInserindoComponentesGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInserindoComponentesGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInserindoComponentesGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInserindoComponentesGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInserindoComponentesGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInserindoComponentesGameModeBase, 2650073982);
	template<> INSERINDOCOMPONENTES_API UClass* StaticClass<AInserindoComponentesGameModeBase>()
	{
		return AInserindoComponentesGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInserindoComponentesGameModeBase(Z_Construct_UClass_AInserindoComponentesGameModeBase, &AInserindoComponentesGameModeBase::StaticClass, TEXT("/Script/InserindoComponentes"), TEXT("AInserindoComponentesGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInserindoComponentesGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
