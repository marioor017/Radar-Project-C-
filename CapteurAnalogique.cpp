/*
 * CapteurAnalogique.cpp
 *
 *  Created on: 2 de jun. de 2018
 *      Author: Mario
 */

#include "CapteurAnalogique.h"

CapteurAnalogique::CapteurAnalogique(int port) : Capteur(port){
	// TODO Auto-generated constructor stub
	this->Analog = new Aio(port);

}

CapteurAnalogique::~CapteurAnalogique() {
	// TODO Auto-generated destructor stub
}

int CapteurAnalogique::analogRead(){
	return this->Analog->read();
}
