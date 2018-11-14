/*
 * Nodo.cpp
 *
 *  Created on: 13 nov. 2018
 *      Author: Martin Mosqueiraa
 */

#include "Nodo.h"
#include <iostream>

Nodo::Nodo() {
	// TODO Auto-generated constructor stub
	siguiente=NULL;
	valor=0;
}

Nodo* Nodo::getsiguiente(){
	return siguiente;
}
void Nodo::setsiguiente(Nodo* siguiente){
	this->siguiente=siguiente;
}
double Nodo::getvalor(){
	return valor;
}
void Nodo::setvalor(double valor){
	this->valor=valor;
}


