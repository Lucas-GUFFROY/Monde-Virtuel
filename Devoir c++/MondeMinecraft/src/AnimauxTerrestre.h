/*
 * AnimauxTerrestre.h
 *
 *  Created on: 16 d�c. 2020
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
