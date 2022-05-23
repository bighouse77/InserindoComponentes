// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EsferaDeFogo.generated.h"

UCLASS()
class INSERINDOCOMPONENTES_API AEsferaDeFogo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEsferaDeFogo();

private:
	/*
		Declaração da variável ponteiro EsferaVisivel, capaz de receber
		um endereço de memória de um recurso do tipo UStaticMeshComponent
	*/
	UPROPERTY(EditAnywhere, Category = "Componentes")
	UStaticMeshComponent* EsferaVisivel;

	// Class indixa forward declaration
	UPROPERTY(EditAnywhere, Category = "Componentes")
	class USphereComponent* EsferaDeColisao;

	// Ponteiro para um componente de sistema de partícula
	UPROPERTY(EditAnywhere, Category = "Componentes")
	UParticleSystemComponent* ParticulaDeFogo;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
