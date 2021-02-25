// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"
#include "EnergiePure.h"
#include "ZoneApparition.generated.h"

UCLASS()
class ENERGIX_API AZoneApparition : public AActor
{
	GENERATED_BODY()
	
private: 
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Apparition", meta = (AllowPrivateAccess = true))
	class UBoxComponent * zone;
	UPROPERTY(EDITAnywhere, Category = "Energie")
	TSubclassOf<class AEnergiePure> objet;

public:	
	// Sets default values for this actor's properties
	AZoneApparition();
	 FORCEINLINE class UBoxComponent * getZone() const { return this->zone; }
	 UFUNCTION(BlueprintPure, Category= "Energie")
	 FVector getPointsAuHasard();
	 void apparaitre();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FTimerHandle minuteur;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
