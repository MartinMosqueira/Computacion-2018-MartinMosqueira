/*
 * nodo.h
 *
 *  Created on: 11 jun. 2018
 *      Author: Martin Mosqueiraa
 */

#ifndef NODO_H_
#define NODO_H_
#include "Fecha.h"

class nodo {
private:
	 Fecha *valor;
	 nodo *siguiente;

public:
	nodo();
	Fecha* getvalor();
	void setvalor(Fecha*);
	nodo* getsiguiente();
	void setsiguiente(nodo*);

};

#endif /* NODO_H_ */
