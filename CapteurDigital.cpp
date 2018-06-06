/*
 * CapteurDigital.cpp
 *
 *  Created on: 2 de jun. de 2018
 *      Author: Mario
 */

#include "CapteurDigital.h"

CapteurDigital::CapteurDigital(int port) : Capteur(port) {
	// TODO Auto-generated constructor stub
	this->digital = new Gpio(port);
	this->digital->dir(DIR_IN);
}

CapteurDigital::~CapteurDigital() {
	// TODO Auto-generated destructor stub
}

int CapteurDigital::digitalRead(){
	return this->digital->read();
}
