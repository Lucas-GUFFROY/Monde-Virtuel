/*
 * Animaux.cpp
 *
 *  Created on: 16 déc. 2020
 *      Author: Lucas
 */

#include "Animaux.h"
#include <sstream>

Animaux::Animaux(const Animaux &other){
	this->maitre = new Maitre(1500,50);
	this->biome = new Biome("Désert" , 15365);

}


Animaux::Animaux() {
this->maitre = new Maitre(1500,50);
this->biome = new Biome("Désert" , 15365);
}


Animaux::Animaux(string nom) {
	this->maitre = new Maitre(1500,50);
	this->nom = nom;
	this->biome = new Biome("Désert" , 15365);
}

Animaux::~Animaux() {

}

const string& Animaux::getNom() const {
	return nom;
}

void Animaux::setNom(const string &nom) {
	this->nom = nom;
}

int Animaux::getVie() const {
	return vie;
}

void Animaux::setVie(int vie) {
	this->vie = vie;
}


string Animaux::exporter()
{
	stringstream xml;

	xml << "<nom>" << this->nom << "</nom>" << endl;
	xml << "<vie>" << this->nom << "</vie>" << endl;
	xml << this->biome->exporter();
	xml << this->maitre->exporter();

	xml << "<Animaux>" << xml.str() << "</Animaux>";
  	//return "<Animaux></Animaux>";

	return xml.str();
}
Animaux& Animaux::operator ++()
	{
	  vie++ ;
	  return *this;
	}

