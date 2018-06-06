/*
 * CapteurDigital.h
 *
 *  Created on: 2 de jun. de 2018
 *      Author: Mario
 */

#ifndef CAPTEURDIGITAL_H_
#define CAPTEURDIGITAL_H_

#include "Capteur.h"
#include <mraa.hpp>
using namespace mraa;

class CapteurDigital: public Capteur {
public:
	CapteurDigital(int port);
	virtual ~CapteurDigital();
	int digitalRead();
protected:
	Gpio *digital;

};

#endif /* CAPTEURDIGITAL_H_ */
