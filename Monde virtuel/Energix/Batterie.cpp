// Fill out your copyright notice in the Description page of Project Settings.


#include "Batterie.h"

void ABatterie::setActif(bool etat)
{
	this->actif = etat;
}
void ABatterie::activer()
{
	this->actif = true;
}
void ABatterie::desactiver() 
{
	this->actif = false;
}
bool ABatterie::estActif()
{
	return this->actif;
}
void ABatterie::attraper_Implementation()
{
	Super::attraper_Implementation();
	Destroy();
}

