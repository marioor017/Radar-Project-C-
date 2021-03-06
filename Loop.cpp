/*
 * Loop.cpp
 *
 *  Created on: 4 juin 2018
 *      Author: EliGabriel
 */
#include "Loop.h"
using namespace std;
using namespace mraa;

Loop::Loop() : Setup(){ //cette méthode utilise le constructeur de Setup et initialise les variables
	//qui vont être utiliser dans le cycle for
	// TODO Auto-generated constructor stub
	this->period = 20;
	this->duty_cycle = 0;
	this->dist = 0;
	this->direction = true;
	this->i = 0;
}

Loop::~Loop() {
	// TODO Auto-generated destructor stub
}

void Loop::startDetection(){ //Cette méthode initialise le for infinie du programme
	for(;;){
		this->sendData();
	 	usleep(200000);
	 	this->selectionMode();
	 	this->moveServo();
	 	this->updateListeIntrus();
	}
}

void Loop::sendData(){ //Cette méthode envoie l'information recolté atravers la communication serial
	ostringstream distString;
	ostringstream iString;
 	this->dist = this->Ultrasonic->getDdistance();
 	distString << this->dist;
 	iString << this->i;
 	this->ComFTDI->serialWrite(iString.str());
 	this->ComFTDI->serialWrite(",");
 	this->ComFTDI->serialWrite(distString.str());
 	this->ComFTDI->serialWrite(".");
}

void Loop::selectionMode(){ // Cette méthode permet de changer de mode automatique au mode manuel.
	if (this->PushButton->digitalRead() == 0){
		if (this->direction == true){
			this->i++;
			if(this->i>179)
				this->direction = false;
		}
		else{
			this->i--;
			if(this->i<1)
				this->direction = true;
		}
	 }
	 else{
		this->i = (int)this->Pot->analogRead()*180/1023;
	 }
}
void Loop::moveServo(){ //Cette méthode mets ajours le cycle de travaille de la PWM du servo
 	this->duty_cycle = 0.2 + 0.35/180*this->i;
 	this->Servo->setDutyCycle(this->period,this->duty_cycle);
}

void Loop::updateListeIntrus(){ // Cette méthode garde dans une liste, la position où qqch est détecté
	if (this->dist < 10){
		this->positionIntrus.push_back(i);
		cout<< "Position Intrus Sauvegardee"<<endl;
	}
}

