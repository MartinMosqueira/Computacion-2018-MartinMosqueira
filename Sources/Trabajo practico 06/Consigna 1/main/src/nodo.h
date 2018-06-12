/*
 * nodo.h
 *
 *  Created on: 12 jun. 2018
 *      Author: Martin Mosqueiraa
 */

#ifndef NODO_H_
#define NODO_H_

class nodo {
private:
	double dato;
	nodo *siguiente;
public:
	nodo();
	double getdato();
	void setdato(double);
	nodo* getsiguiente();
	void setsiguiente(nodo*);
};

#endif /* NODO_H_ */
