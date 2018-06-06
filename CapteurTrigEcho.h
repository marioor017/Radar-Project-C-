/*
 * CapteurTrigEcho.h
 *
 *  Created on: 2 de jun. de 2018
 *      Author: Mario
 */

#ifndef CAPTEURTRIGECHO_H_
#define CAPTEURTRIGECHO_H_

#include "CapteurDigital.h"

class CapteurTrigEcho: public CapteurDigital {
public:
	CapteurTrigEcho(int triggerPin, int echoPin);
	virtual ~CapteurTrigEcho();
protected:
	Gpio *trigger;
};

#endif /* CAPTEURTRIGECHO_H_ */
