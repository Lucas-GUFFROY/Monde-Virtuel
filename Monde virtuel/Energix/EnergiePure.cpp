// Fill out your copyright notice in the Description page of Project Settings.


#include "EnergiePure.h"

// Sets default values
AEnergiePure::AEnergiePure()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->mailles = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("Corps batterie"));
	this->RootComponent = this->mailles;
	this->getMailles()->SetSimulatePhysics(true);
}

void  AEnergiePure::attraper_Implementation()
{
	UE_LOG(LogClass, Log, TEXT(" AEnergiePure::attraper_Implementation()"));
}





// Called when the game starts or when spawned
void AEnergiePure::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnergiePure::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

