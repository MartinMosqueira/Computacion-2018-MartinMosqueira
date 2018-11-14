/*
 * Nodo.h
 *
 *  Created on: 13 nov. 2018
 *      Author: Martin Mosqueiraa
 */

#ifndef NODO_H_
#define NODO_H_

class Nodo {
private:
	double valor;
	Nodo* siguiente;
public:
	Nodo();
	Nodo* getsiguiente();
	void setsiguiente(Nodo* siguiente);
	double getvalor();
	void setvalor(double valor);
};

#endif /* NODO_H_ */
