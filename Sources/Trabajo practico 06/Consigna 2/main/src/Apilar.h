/*
 * Apilar.h
 *
 *  Created on: 11 jun. 2018
 *      Author: Martin Mosqueiraa
 */

#ifndef APILAR_H_
#define APILAR_H_
#include "nodo.h"

class Apilar {
private:
	nodo *superior;
public:
	Apilar();
	nodo* getsuperior();
	void setsuperior(nodo*);
	void push(Fecha*);
	Fecha* pop();
	void show();
};

#endif /* APILAR_H_ */
