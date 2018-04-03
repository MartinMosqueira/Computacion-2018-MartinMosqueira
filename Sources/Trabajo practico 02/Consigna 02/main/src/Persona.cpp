/*
 * Persona.cpp
 *
 *  Created on: 26 mar. 2018
 *      Author: Martin Mosqueiraa
 */

#include "Persona.h"
#include "Fecha.h"
#include <iostream>
using namespace std;

Persona::Persona() {
	// TODO Auto-generated constructor stub

}
Persona::Persona(long dn,string nom,string ape,Fecha naci){
	dni=dn;
	nombre=nom;
	apellido=ape;
	nacimiento=naci;
}

long Persona::getdni(){
	return dni;
}

void Persona::setdni(long dni){
	this->dni=dni;
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

Fecha Persona::getnacimiento(){
	return nacimiento;
}

void Persona::setnacimiento(Fecha nacimiento){
	this->nacimiento=nacimiento;
}

void Persona::input(){
cout<<"ingrese su DNI: "<<endl;
cin>>this->dni;
cout<<"ingrese su nombre: "<<endl;
cin>>this->nombre;
cout<<"ingrese su apellido: "<<endl;
cin>>this->apellido;
cout<<"ingrese su fecha de nacimiento"<<endl;
nacimiento.input();
}

void Persona::show(){
	cout<<"DNI: "<<this->dni<<endl;
	cout<<"Nombre: "<<this->nombre<<endl;
	cout<<"Apellido: "<<this->apellido<<endl;
	nacimiento.show();
}
