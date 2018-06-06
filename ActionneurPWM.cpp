/*
 * ActionneurPWM.cpp
 *
 *  Created on: 2 de jun. de 2018
 *      Author: Mario
 */

#include "ActionneurPWM.h"

ActionneurPWM::ActionneurPWM(int port) : Actionneur(port) { //C'est le constructeur de la classe actionneur PWM qui utilise
	//le constructeur de sa classe mère et qui crée un port de sortie de type PWM
	// TODO Auto-generated constructor stub
	this->pwm_pin = new Pwm(port);

}

ActionneurPWM::~ActionneurPWM() { //C'est le destructeur de la classe
	// TODO Auto-generated destructor stub
}

void ActionneurPWM::enablePWM(){ //une méthode de la clase qui habilite le port PWM de l'objet
	this->pwm_pin->enable(true);
}

void ActionneurPWM::setDutyCycle(int period,float duty_cycle){ //C'est une méthode de la clase qui initialise la periode et 
	//le cycle de travaille de l'actionneur PWM
	this->pwm_pin->pulsewidth_ms(period);
	this->pwm_pin->write(duty_cycle);
}
