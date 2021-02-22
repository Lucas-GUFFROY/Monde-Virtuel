/*
 * Animaux.h
 *
 *  Created on: 16 déc. 2020
 *      Author: Lucas
 */

#ifndef ANIMAUX_H_
#define ANIMAUX_H_
#include "Biome.h"
#include "Maitre.h"


#include <iostream>
using namespace std;

class Animaux {
	
protected :	
	string nom;
	int vie;
	Biome* biome;
	
	Maitre* maitre;
	


	
	
public:
	Animaux();
	Animaux(string);
	virtual ~Animaux();
	const string& getNom() const;
	void setNom(const string &nom);
	int getVie() const;
	void setVie(int vie);
	virtual string exporter();
	Animaux(const Animaux &other);
	Animaux& operator ++();
};

#endif /* ANIMAUX_H_ */
