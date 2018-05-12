/*
 * Persona.cpp
 *
 *  Created on: 13 abr. 2018
 *      Author: Martin Mosqueiraa
 */

#include "Persona.h"
#include <string>
#include <iostream>
using namespace std;

Persona::Persona(){

}
Persona::Persona(string nombre, string apellido, int edad  ) {
this->nombre=nombre;
this->apellido=apellido;
this->edad=edad;

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

void Persona::input(){
	cout<<"Nombre: ";
	cin>>this->nombre;
	cout<<"Apellido: ";
	cin>>this->apellido;
	cout<<"Edad: ";
	cin>>this->edad;
}
void Persona::show(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Apellido: "<<apellido<<endl;
	cout<<"Edad: "<<edad<<endl;
}
