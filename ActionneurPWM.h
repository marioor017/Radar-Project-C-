/*
 * ActionneurPWM.h
 *
 *  Created on: 2 de jun. de 2018
 *      Author: Mario
 */

#ifndef ACTIONNEURPWM_H_
#define ACTIONNEURPWM_H_

#include "Actionneur.h"
#include <mraa.hpp>
using namespace mraa;

class ActionneurPWM: public Actionneur {
public:
	ActionneurPWM(int port);
	virtual ~ActionneurPWM();
	void enablePWM();
	void setDutyCycle(int period, float duty_cycle);
protected:
	Pwm* pwm_pin;
};

#endif /* ACTIONNEURPWM_H_ */
