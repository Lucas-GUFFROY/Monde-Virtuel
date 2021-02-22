//============================================================================
// Name        : MondeMinecraft.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


#include "Animaux.h"
#include "AnimauxTerrestre.h"
#include "AnimauxMarin.h"


int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!


	Animaux mouton;
	cout << "Mouton : " << mouton.exporter() << endl;

	Animaux vache("Margueritte");
	cout << "Margueritte ; " << vache.exporter() << endl;


	Animaux * animaux;
	animaux = new Animaux("Flipper");
	cout <<"Flipper : " << animaux->exporter() << endl;


	AnimauxMarin dauphin;
	cout << "Dauphin : " <<dauphin.exporter() << endl;

	Animaux* poisson;
	poisson = new AnimauxMarin();
	cout << "Poisson : " <<poisson->exporter() << endl;

	Animaux* cheval;
	cheval = new AnimauxTerrestre();
	cout << "Cheval : " << cheval->exporter() << endl;

	return 0;
}
