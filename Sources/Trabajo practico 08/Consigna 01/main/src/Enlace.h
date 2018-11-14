/*
 * Enlace.h
 *
 *  Created on: 13 nov. 2018
 *      Author: Martin Mosqueiraa
 */

#ifndef ENLACE_H_
#define ENLACE_H_
#include "Nodo.h"

class Enlace {
private:
	Nodo* comienzo;
public:
	Enlace();
	Nodo* getcomienzo();
	void setcomienzo(Nodo*);
	void add(double);
	void show();

};

#endif /* ENLACE_H_ */
