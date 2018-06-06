/*
 * Loop.cpp
 *
 *  Created on: 4 juin 2018
 *      Author: EliGabriel
 */
#include "Loop.h"
using namespace std;
using namespace mraa;

Loop::Loop() : Setup(){
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

void Loop::startDetection(){
	for(;;){
		this->sendData();
	 	usleep(200000);
	 	this->selectionMode();
	 	this->moveServo();
	 	this->updateListeIntrus();
	}
}

void Loop::sendData(){
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

void Loop::selectionMode(){
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
void Loop::moveServo(){
 	this->duty_cycle = 0.2 + 0.35/180*this->i;
 	this->Servo->setDutyCycle(this->period,this->duty_cycle);
}

void Loop::updateListeIntrus(){
	if (this->dist < 10){
		this->positionIntrus.push_back(i);
		cout<< "Position Intrus Sauvegardee"<<endl;
	}
}

