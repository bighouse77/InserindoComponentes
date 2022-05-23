// Fill out your copyright notice in the Description page of Project Settings.

#include "EsferaDeFogo.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AEsferaDeFogo::AEsferaDeFogo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Cria uma instância de USphereComponent que será apontada por EsferaDeColisao
	EsferaDeColisao = CreateDefaultSubobject<USphereComponent>(TEXT("Raiz"));

	// Define o tamanho do raio da esfera
	EsferaDeColisao->InitSphereRadius(100.f);

	// Define o nome do perfil de colisão
	EsferaDeColisao->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	// Overlap: sobreposição

	// Indica que EsferaDeColisao será o componente raiz da hierarquia de componentes
	RootComponent = EsferaDeColisao;

	/*
		Cria uma static mesh component e coloca o endereço de memória deste recurso
		no ponteiro EsferaVisivel
	*/
	EsferaVisivel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Esfera"));

	// Cria um componente de particula e coloca o entereço de memória no ponteiro
	ParticulaDeFogo = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particula Fogo"));

	// Coloca este componente como filho de EsferaVisível
	ParticulaDeFogo->SetupAttachment(EsferaVisivel);
	
	/*
		Ativa o bool (flag) que indica  que o efeito da partícula deve
		auto iniciar ao iniciar o jogo
	*/
	ParticulaDeFogo->bAutoActivate = true;

	/*(
		Anexa este componente como sendo filho do componente raiz, neste caso
		EsferaDeColisao é o raiz
	*/
	EsferaVisivel->SetupAttachment(RootComponent);

	/*
		Seta via código que a static mesh Shape_Shere
		será a static mesh da EsferaVisivel
	*/
	ConstructorHelpers::FObjectFinder<UStaticMesh>	
		Esfera(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

	// Seta via código que o material da esfera será M_METAL_GOLD
	ConstructorHelpers::FObjectFinder<UMaterialInterface>
		MaterialEsfera(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));

	// Indica que o sistema de partículas será o P_FIRE
	ConstructorHelpers::FObjectFinder<UParticleSystem>
		Fogo(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Fire.P_Fire'"));

	// Se todos os recursos forem encontrados, continue
	if (Esfera.Succeeded() && MaterialEsfera.Succeeded() && Fogo.Succeeded()) {

		// Seta que o static mesh da EsferaVisivel será Esfera.Object
		EsferaVisivel->SetStaticMesh(Esfera.Object);

		// Seta que o material da EsferaVisivel será MaterialEsfera.Object
		EsferaVisivel->SetMaterial(0, MaterialEsfera.Object);

		// Seta a particula Fogo.Object como template para Particula Fogo
		ParticulaDeFogo->SetTemplate(Fogo.Object);

		// Indica que a EsferaVisivel terá a localização x=0, y=0, z=-60
		EsferaVisivel->SetRelativeLocation(FVector(0.f, 0.f, -60.f));
	}
}

// Called when the game starts or when spawned
void AEsferaDeFogo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEsferaDeFogo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

