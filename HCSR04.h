/*
 * HCSR04.h
 *
 *  Created on: 1 de jun. de 2018
 *      Author: Mario
 */
#include "capteurTrigEcho.h"

#ifndef HCSR04_H_
#define HCSR04_H_

class HCSR04: public CapteurTrigEcho{
public:
	HCSR04(int triggerPin, int echoPin);
	virtual ~HCSR04();
	int getDdistance();
protected:
	int distance;
	float pulseTime;
};

#endif /* HCSR04_H_ */
