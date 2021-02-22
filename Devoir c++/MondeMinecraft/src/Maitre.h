/*
 * Maitre.h
 *
 *  Created on: 13 févr. 2021
 *      Author: Lucas
 */

#ifndef MAITRE_H_
#define MAITRE_H_
#include <iostream>
#include <sstream>
using namespace std;


class Maitre {
protected:
	int puissance;
	int age;

public:
	Maitre();
	Maitre(int puissance, int age);
	virtual ~Maitre();
	int getAge() const;
	void setAge(int age);
	int getPuissance() const;
	void setPuissance(int puissance);
	string exporter();
};

#endif /* MAITRE_H_ */
