/*
 * CapteurAnalogique.cpp
 *
 *  Created on: 2 de jun. de 2018
 *      Author: Mario
 */

#include "CapteurAnalogique.h"

CapteurAnalogique::CapteurAnalogique(int port) : Capteur(port){ //Ce constructeur utilise le constructeur de la classe mère et 
	//initialise un port de type analogique au port indiqué
	// TODO Auto-generated constructor stub
	this->Analog = new Aio(port);

}

CapteurAnalogique::~CapteurAnalogique() { //Destructeur de la classe
	// TODO Auto-generated destructor stub
}

int CapteurAnalogique::analogRead(){ //Cette méthode realise une lecture du port analogique de l'objet
	return this->Analog->read();
}
