/*
 * CapteurDigital.cpp
 *
 *  Created on: 2 de jun. de 2018
 *      Author: Mario
 */

#include "CapteurDigital.h"

CapteurDigital::CapteurDigital(int port) : Capteur(port) {//Ce constructeur utilise le constructeur de la classe mère et 
//initialise un port de type digitale au port indiqué
	// TODO Auto-generated constructor stub
	this->digital = new Gpio(port);
	this->digital->dir(DIR_IN);
}

CapteurDigital::~CapteurDigital() { //Destructeur de la classe
	// TODO Auto-generated destructor stub
}

int CapteurDigital::digitalRead(){ //Cette méthode realise une lecture du port digitale de l'objet
	return this->digital->read();
}
