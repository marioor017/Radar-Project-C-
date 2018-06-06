/*
 * Setuo.h
 *
 *  Created on: 4 juin 2018
 *      Author: EliGabriel
 */

#ifndef SETUP_H_
#define SETUP_H_

#include <iostream>
#include <sstream>
#include <mraa.hpp>

#include "HCSR04.h"
#include "CommunicationSerial.h"
#include "CapteurDigital.h"
#include "CapteurAnalogique.h"
#include "ActionneurPWM.h"

class Setup {
protected:
	CommunicationSerial* ComFTDI;
	CapteurDigital* PushButton;
	CapteurAnalogique* Pot;
	ActionneurPWM* Servo;
	HCSR04 *Ultrasonic;

public:
	Setup();
	virtual ~Setup();
};

#endif /* SETUP_H_ */
