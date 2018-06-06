/*
 * Actionneur.h
 *
 *  Created on: 2 de jun. de 2018
 *      Author: Mario
 */

#ifndef ACTIONNEUR_H_
#define ACTIONNEUR_H_

class Actionneur {
public:
	Actionneur(int port);
	virtual ~Actionneur();
protected:
	int portConnecte;
};

#endif /* ACTIONNEUR_H_ */
