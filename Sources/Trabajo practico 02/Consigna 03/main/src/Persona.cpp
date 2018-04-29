/*
 * Persona.cpp
 *
 *  Created on: 7 abr. 2018
 *      Author: Martin Mosqueiraa
 */

#include "Persona.h"
#include <string>
using namespace std;
#include <iostream>

Persona::Persona() {
this->edad=0;
this->nombre="";
this->apellido="";
}

Persona::Persona(string nom, string ape, int ed){
	nombre=nom;
	apellido=ape;
	edad=ed;
}
string Persona::getnombre(){
	return nombre;
}
void Persona::setnombre(string nombre){
	this->nombre=nombre;
}
string Persona::getapellido(){
	return apellido;
}
void Persona::setapellido(string apellido){
	this->apellido=apellido;
}
int Persona::getedad(){
	return edad;
}
void Persona::setedad(int edad){
	this->edad=edad;
}

