/*
 * nodo.cpp
 *
 *  Created on: 11 jun. 2018
 *      Author: Martin Mosqueiraa
 */

#include "nodo.h"
#include "Fecha.h"
#include <iostream>


nodo::nodo() {
	valor=0;
	siguiente=NULL;
}

Fecha* nodo::getvalor(){
	return valor;
}

void nodo::setvalor(Fecha* valor){
	this->valor=valor;
}
nodo* nodo::getsiguiente(){
	return siguiente;
}

void nodo::setsiguiente(nodo* siguiente){
	this->siguiente=siguiente;
}



