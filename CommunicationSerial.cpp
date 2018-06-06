/*
 * CommunicationSerial.cpp
 *
 *  Created on: 2 de jun. de 2018
 *      Author: Mario
 */

#include "CommunicationSerial.h"

CommunicationSerial::CommunicationSerial(int uartPort, int baudRate) {
	uart = new mraa::Uart(uartPort); //Define the uart port to be used
 	uart->setBaudRate(baudRate); // Define the baudRate of the port
 	uart->setMode(8, mraa::UART_PARITY_NONE, 1); //Set the uart mode
 	uart->setFlowcontrol(false, false); // Set Flow control
	// TODO Auto-generated constructor stub

}

CommunicationSerial::~CommunicationSerial() {
	// TODO Auto-generated destructor stub
}
void CommunicationSerial::serialWrite(string msg){
	uart->writeStr(msg);
}

