/*
 * Capteur.h
 *
 *  Created on: 2 de jun. de 2018
 *      Author: Mario
 */

#ifndef CAPTEUR_H_
#define CAPTEUR_H_

class Capteur {
public:
	Capteur(int port);
	virtual ~Capteur();
protected:
	int portConnecte;
};

#endif /* CAPTEUR_H_ */
