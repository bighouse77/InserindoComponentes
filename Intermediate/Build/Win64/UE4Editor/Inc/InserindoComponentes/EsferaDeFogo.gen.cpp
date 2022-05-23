// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InserindoComponentes/EsferaDeFogo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEsferaDeFogo() {}
// Cross Module References
	INSERINDOCOMPONENTES_API UClass* Z_Construct_UClass_AEsferaDeFogo_NoRegister();
	INSERINDOCOMPONENTES_API UClass* Z_Construct_UClass_AEsferaDeFogo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_InserindoComponentes();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void AEsferaDeFogo::StaticRegisterNativesAEsferaDeFogo()
	{
	}
	UClass* Z_Construct_UClass_AEsferaDeFogo_NoRegister()
	{
		return AEsferaDeFogo::StaticClass();
	}
	struct Z_Construct_UClass_AEsferaDeFogo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EsferaVisivel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EsferaVisivel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EsferaDeColisao_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EsferaDeColisao;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticulaDeFogo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticulaDeFogo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEsferaDeFogo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InserindoComponentes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEsferaDeFogo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EsferaDeFogo.h" },
		{ "ModuleRelativePath", "EsferaDeFogo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEsferaDeFogo_Statics::NewProp_EsferaVisivel_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "/*\n\x09\x09""Declara??o da vari?vel ponteiro EsferaVisivel, capaz de receber\n\x09\x09um endere?o de mem?ria de um recurso do tipo UStaticMeshComponent\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EsferaDeFogo.h" },
		{ "ToolTip", "Declara??o da vari?vel ponteiro EsferaVisivel, capaz de receber\num endere?o de mem?ria de um recurso do tipo UStaticMeshComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEsferaDeFogo_Statics::NewProp_EsferaVisivel = { "EsferaVisivel", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEsferaDeFogo, EsferaVisivel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEsferaDeFogo_Statics::NewProp_EsferaVisivel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEsferaDeFogo_Statics::NewProp_EsferaVisivel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEsferaDeFogo_Statics::NewProp_EsferaDeColisao_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// Class indixa forward declaration\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EsferaDeFogo.h" },
		{ "ToolTip", "Class indixa forward declaration" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEsferaDeFogo_Statics::NewProp_EsferaDeColisao = { "EsferaDeColisao", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEsferaDeFogo, EsferaDeColisao), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEsferaDeFogo_Statics::NewProp_EsferaDeColisao_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEsferaDeFogo_Statics::NewProp_EsferaDeColisao_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEsferaDeFogo_Statics::NewProp_ParticulaDeFogo_MetaData[] = {
		{ "Category", "Componentes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EsferaDeFogo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEsferaDeFogo_Statics::NewProp_ParticulaDeFogo = { "ParticulaDeFogo", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEsferaDeFogo, ParticulaDeFogo), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEsferaDeFogo_Statics::NewProp_ParticulaDeFogo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEsferaDeFogo_Statics::NewProp_ParticulaDeFogo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEsferaDeFogo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEsferaDeFogo_Statics::NewProp_EsferaVisivel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEsferaDeFogo_Statics::NewProp_EsferaDeColisao,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEsferaDeFogo_Statics::NewProp_ParticulaDeFogo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEsferaDeFogo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEsferaDeFogo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEsferaDeFogo_Statics::ClassParams = {
		&AEsferaDeFogo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEsferaDeFogo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEsferaDeFogo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEsferaDeFogo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEsferaDeFogo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEsferaDeFogo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEsferaDeFogo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEsferaDeFogo, 3464068555);
	template<> INSERINDOCOMPONENTES_API UClass* StaticClass<AEsferaDeFogo>()
	{
		return AEsferaDeFogo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEsferaDeFogo(Z_Construct_UClass_AEsferaDeFogo, &AEsferaDeFogo::StaticClass, TEXT("/Script/InserindoComponentes"), TEXT("AEsferaDeFogo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEsferaDeFogo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
