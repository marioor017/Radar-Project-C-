/*
 * Setuo.cpp
 *
 *  Created on: 4 juin 2018
 *      Author: EliGabriel
 */
#include "Setup.h"

using namespace std;
using namespace mraa;


Setup::Setup() { //Ce constructeur initialise tous les port dont notre système va avoir besoin 
	// TODO Auto-generated constructor stub
	this->ComFTDI = new CommunicationSerial(1,115200);
	this->PushButton = new CapteurDigital(7);
	this->Pot = new CapteurAnalogique(0);
	this->Servo = new ActionneurPWM(6);
	this->Ultrasonic = new HCSR04(4,3);
	this->Servo->enablePWM();
}

Setup::~Setup() { //Destructeur de la classe
	// TODO Auto-generated destructor stub
}

