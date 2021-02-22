/*
 * Biome.h
 *
 *  Created on: 16 déc. 2020
 *      Author: Lucas
 */

#ifndef BIOME_H_
#define BIOME_H_

#include <iostream>
using namespace std;


class Biome {
protected :
	string nom;
	int taille;

public:
	Biome();
	Biome(string nom, int taille);
	virtual ~Biome();
	Biome(const Biome &other);
	const string& getNom() const;
	void setNom(const string &nom);
	int getTaille() const;
	void setTaille(int taille);
	string exporter();
};

#endif /* BIOME_H_ */
