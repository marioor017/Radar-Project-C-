/*
 * CapteurAnalogique.h
 *
 *  Created on: 2 de jun. de 2018
 *      Author: Mario
 */

#ifndef CAPTEURANALOGIQUE_H_
#define CAPTEURANALOGIQUE_H_

#include "Capteur.h"
#include <mraa.hpp>
using namespace mraa;

class CapteurAnalogique: public Capteur {
public:
	CapteurAnalogique(int port);
	virtual ~CapteurAnalogique();
	int analogRead();
protected:
	Aio *Analog;
};

#endif /* CAPTEURANALOGIQUE_H_ */
