/*
 * AnimauxTerrestre.h
 *
 *  Created on: 16 déc. 2020
 *      Author: Lucas
 */

#ifndef ANIMAUXTERRESTRE_H_
#define ANIMAUXTERRESTRE_H_

#include "Animaux.h"

class AnimauxTerrestre :public Animaux{
public:
	AnimauxTerrestre();
	virtual ~AnimauxTerrestre();
	AnimauxTerrestre(const AnimauxTerrestre &other);
	string exporter();
};

#endif /* ANIMAUXTERRESTRE_H_ */
