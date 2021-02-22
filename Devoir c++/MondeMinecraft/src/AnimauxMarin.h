/*
 * AnimauxMarin.h
 *
 *  Created on: 16 déc. 2020
 *      Author: Lucas
 */

#ifndef ANIMAUXMARIN_H_
#define ANIMAUXMARIN_H_

#include "Animaux.h"

class AnimauxMarin :public Animaux{
public:
	AnimauxMarin();
	virtual ~AnimauxMarin();
	AnimauxMarin(const AnimauxMarin &other);
	string exporter();
};

#endif /* ANIMAUXMARIN_H_ */
