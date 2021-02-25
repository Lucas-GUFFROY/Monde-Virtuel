// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnergiePure.h"
#include "Batterie.generated.h"

/**
 * 
 */
UCLASS()
class ENERGIX_API ABatterie : public AEnergiePure
{
	GENERATED_BODY()

private :
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Energie", meta = (AllowPrivateAccess = true))
		int niveau;
	

	bool actif;

public :

	UFUNCTION(BlueprintCallable, Category= "Energie")
	void setActif(bool etat);
	UFUNCTION(BlueprintCallable, Category = "Energie")
	void activer();
	UFUNCTION(BlueprintCallable, Category = "Energie")
	void desactiver();
	UFUNCTION(BlueprintPure, Category = "Energie")
	bool estActif();
	 
	void attraper_Implementation() override;
	
};
