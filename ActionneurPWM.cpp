/*
 * ActionneurPWM.cpp
 *
 *  Created on: 2 de jun. de 2018
 *      Author: Mario
 */

#include "ActionneurPWM.h"

ActionneurPWM::ActionneurPWM(int port) : Actionneur(port) {
	// TODO Auto-generated constructor stub
	this->pwm_pin = new Pwm(port);

}

ActionneurPWM::~ActionneurPWM() {
	// TODO Auto-generated destructor stub
}

void ActionneurPWM::enablePWM(){
	this->pwm_pin->enable(true);
}

void ActionneurPWM::setDutyCycle(int period,float duty_cycle){
	this->pwm_pin->pulsewidth_ms(period);
	this->pwm_pin->write(duty_cycle);
}
