/*
 * HCSR04.cpp
 *
 *  Created on: 1 de jun. de 2018
 *      Author: Mario
 */

#include "HCSR04.h"
#include <mraa.hpp>
#include <time.h>
#include <iostream>
using namespace std;
using namespace mraa;
HCSR04::HCSR04(int triggerPin, int echoPin) : CapteurTrigEcho(triggerPin,echoPin) {
	this->distance = 0;
	this->pulseTime = 0;

	// TODO Auto-generated constructor stub
}

HCSR04::~HCSR04() {
	// TODO Auto-generated destructor stub
}
int HCSR04::getDdistance(){ // algo pour calculer la distance du capteur
	int interrupt = 0; // variable pour sortir du loop en cas de blocage
    clock_t t1,t2;
    this->trigger->write(0);
    usleep(2);
    this->trigger->write(1);
    usleep(10);
    this->trigger->write(0);
    while (this->digitalRead() == 0){
			t2=clock();
			//cout<<"t2" << endl;
			interrupt++;
			if (interrupt > 100)
				break;
		}
    interrupt = 0;
    while(this->digitalRead() == 1){
            t1=clock();
            //cout<<"t1" << endl;
            interrupt++;
			if (interrupt > 100)
				break;
    	}
	this->pulseTime = (long)(t1)-(long)(t2);
    this->distance= (int)((this->pulseTime/2/29.1));
    if (distance > 60) // Saturateurs pour les distances
    	distance = 60;
    else if (distance <5)
    	distance = 5;
    return this->distance;
}
