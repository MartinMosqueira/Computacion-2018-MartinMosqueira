/*
 * Complejos.cpp
 *
 *  Created on: 19 mar. 2018
 *      Author: Martin Mosqueiraa
 */


#include <iostream>
using namespace std;
#include "Complejos.h"
Complejos::Complejos(){
	this->real=0;
	this->imaginario=0;
}

int Complejos::getreal(){
	return this->real;
}

void Complejos::setreal(int real){
	this->real=real;
}

int Complejos::getimaginario(){
	return this->imaginario;
}
void Complejos::setimaginario(int imaginario){
	this->imaginario=imaginario;
}
void Complejos::input(){
	cout<<"ingrese el numero real"<<endl;
	cin>>this->real;
	cout<<"ingrese la paste imaginaria"<<endl;
	cin>>this->imaginario;
}
void Complejos::show(){
	cout<<"N complejo : "<<this->real<<"+"<<this->imaginario<<"i"<<endl;
}


