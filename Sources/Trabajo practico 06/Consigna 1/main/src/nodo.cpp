/*
 * nodo.cpp
 *
 *  Created on: 12 jun. 2018
 *      Author: Martin Mosqueiraa
 */

#include "nodo.h"
#include <iostream>

nodo::nodo() {
	dato=0;
 siguiente=NULL;
}

double nodo::getdato(){
	return dato;
}

void nodo::setdato(double dato){
	this->dato=dato;
}

nodo* nodo::getsiguiente(){
	return siguiente;
}

void nodo::setsiguiente(nodo*siguiente){
	this->siguiente=siguiente;
}


