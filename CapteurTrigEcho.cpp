/*
 * CapteurTrigEcho.cpp
 *
 *  Created on: 2 de jun. de 2018
 *      Author: Mario
 */

#include "CapteurTrigEcho.h"

CapteurTrigEcho::CapteurTrigEcho(int triggerPin, int echoPin) : CapteurDigital(echoPin) { //Ce constructeur utilise le constructeur de la classe mère
	// (un capteur digital) et indique que c'est un port de sortie et envoi un 0 logique)
	trigger = new Gpio(triggerPin);
	trigger->dir(DIR_OUT);
	trigger->write(0);
	// TODO Auto-generated constructor stub

}

CapteurTrigEcho::~CapteurTrigEcho() { //Destructeur de la classe
	// TODO Auto-generated destructor stub
}

