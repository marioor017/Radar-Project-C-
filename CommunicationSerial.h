/*
 * CommunicationSerial.h
 *
 *  Created on: 2 de jun. de 2018
 *      Author: Mario
 */

#ifndef COMMUNICATIONSERIAL_H_
#define COMMUNICATIONSERIAL_H_

#include <mraa.hpp>
#include <iostream>
using namespace std;
using namespace mraa;
class CommunicationSerial {
public:
	CommunicationSerial(int uartPort, int baudRate);
	virtual ~CommunicationSerial();
	void serialWrite(string msg);
private:
	Uart* uart;
};

#endif /* COMMUNICATIONSERIAL_H_ */
