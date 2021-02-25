// Fill out your copyright notice in the Description page of Project Settings.

#include "Runtime/Engine/Public/TimerManager.h"
#include "ZoneApparition.h"

// Sets default values
AZoneApparition::AZoneApparition()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->zone = CreateDefaultSubobject<UBoxComponent>(TEXT("Zone d'apparition"));
	this->RootComponent = zone;
}



FVector AZoneApparition::getPointsAuHasard()
{
	FVector origine = this->getZone()->Bounds.Origin;
	FVector etendue = this->getZone()->Bounds.BoxExtent;
	return UKismetMathLibrary::RandomPointInBoundingBox(origine, etendue);

}


void AZoneApparition::apparaitre()
{

	UWorld* monde = GetWorld();

	FVector point = this->getPointsAuHasard();
	FRotator rotation;
	rotation.Yaw = FMath::FRand() * 360.0f;
	rotation.Pitch = FMath::FRand() * 360.0f;
	rotation.Roll = FMath::FRand() * 360.0f;

	FActorSpawnParameters parametres;
	parametres.Owner = this;
	parametres.Instigator = GetInstigator();


	monde->SpawnActor<AEnergiePure>(this->objet, point, rotation, parametres);
}

// Called when the game starts or when spawned
void AZoneApparition::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(minuteur, this, &AZoneApparition::apparaitre, 4.0f, true);
	
}
	
// Called every frame
void AZoneApparition::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

