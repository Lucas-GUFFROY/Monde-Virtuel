/*
 * Biome.cpp
 *
 *  Created on: 16 déc. 2020
 *      Author: Lucas
 */

#include "Biome.h"
#include <sstream>
Biome::Biome() {


}

const string& Biome::getNom() const {
	return nom;
}

void Biome::setNom(const string &nom) {
	this->nom = nom;
}

int Biome::getTaille() const {
	return taille;
}

void Biome::setTaille(int taille) {
	this->taille = taille;
}

Biome::~Biome() {

}

Biome::Biome(const Biome &other) {

}
Biome::Biome(string nom, int taille){
	this->nom = nom;
	this->taille = taille;
}

string Biome::exporter(){
	stringstream xml;
	xml << "<nom>" << this->nom << "</nom>" << endl;
	xml << "<taille>" << this->taille << "</taille>" <<endl;;
	xml << "<biome>" << xml.str() << "</biome>" << endl;;
	return xml.str();
}

