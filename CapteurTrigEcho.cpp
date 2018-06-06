/*
 * CapteurTrigEcho.cpp
 *
 *  Created on: 2 de jun. de 2018
 *      Author: Mario
 */

#include "CapteurTrigEcho.h"

CapteurTrigEcho::CapteurTrigEcho(int triggerPin, int echoPin) : CapteurDigital(echoPin) {
	trigger = new Gpio(triggerPin);
	trigger->dir(DIR_OUT);
	trigger->write(0);
	// TODO Auto-generated constructor stub

}

CapteurTrigEcho::~CapteurTrigEcho() {
	// TODO Auto-generated destructor stub
}

