/*
 * Maitre.cpp
 *
 *  Created on: 13 févr. 2021
 *      Author: Lucas
 */

#include "Maitre.h"

Maitre::Maitre() {


}

Maitre::~Maitre() {

}


int Maitre::getAge() const {
	return age;
}

void Maitre::setAge(int age) {
	this->age = age;
}

int Maitre::getPuissance() const {
	return puissance;
}

void Maitre::setPuissance(int puissance) {
	this->puissance = puissance;
}


Maitre::Maitre(int puissance, int age){
	this->puissance = puissance;
	this->age = age;
}
string Maitre::exporter()
{
	stringstream xml;
	xml << "<puissance>" << this->puissance << "</puissance>" << endl;
	xml << "<age>" << this->age << "</age>" << endl;
	xml << "<maitre>" << xml.str() << "</maitre>" << endl;
	return xml.str();
}


