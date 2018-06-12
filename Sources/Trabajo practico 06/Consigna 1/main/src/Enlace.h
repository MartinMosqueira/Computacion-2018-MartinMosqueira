/*
 * Enlace.h
 *
 *  Created on: 12 jun. 2018
 *      Author: Martin Mosqueiraa
 */

#ifndef ENLACE_H_
#define ENLACE_H_
#include "nodo.h"

class Enlace {
private:
	nodo* superior;

public:
	Enlace();
	nodo* getsuperior();
	void setsuperior(nodo*);
	void push(double);
	double pop();
	void show();
};

#endif /* ENLACE_H_ */
