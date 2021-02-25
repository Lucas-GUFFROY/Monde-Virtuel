// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "EnergiePure.generated.h"

UCLASS()
class ENERGIX_API AEnergiePure : public AActor
{
	GENERATED_BODY()
	


private : 

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Energie", meta = (AllowPrivateAccess="true"))
	

	class UStaticMeshComponent * mailles;

public:	
	// Sets default values for this actor's properties
	AEnergiePure();
	FORCEINLINE class UStaticMeshComponent * getMailles() { return this->mailles; }
	UFUNCTION(BluePrintNativeEvent)
	void attraper();
	virtual void attraper_Implementation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
