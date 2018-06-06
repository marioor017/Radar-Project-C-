/*
 * Loop.h
 *
 *  Created on: 4 juin 2018
 *      Author: EliGabriel
 */

#ifndef LOOP_H_
#define LOOP_H_

#include <iostream>
#include <sstream>
#include <mraa.hpp>
#include <vector>
#include "Setup.h"

class Loop : public Setup{
private:
	int period;
	float duty_cycle;
	double dist;
	bool direction;
	int i;
	vector<int> positionIntrus;
public:
	Loop();
	virtual ~Loop();
	void sendData();
	void selectionMode();
	void moveServo();
	void startDetection();
	void updateListeIntrus();
};
#endif /* LOOP_H_ */
