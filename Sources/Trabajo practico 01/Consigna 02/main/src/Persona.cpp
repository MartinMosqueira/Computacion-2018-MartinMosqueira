/*
 * Persona.cpp
 *
 *  Created on: 23 mar. 2018
 *      Author: Martin Mosqueiraa
 */

#include "Persona.h"
#include <iostream>
using namespace std;

Persona::Persona() {
	// TODO Auto-generated constructor stub

}
    string Persona::getapellido() {
		return apellido;
	}

	void Persona::setapellido(string apellido) {
		this->apellido = apellido;
	}

	long Persona::getdni() {
		return dni;
	}

	void Persona::setdni(long dni) {
		this->dni = dni;
	}

	 string Persona::getnombre() {
		return nombre;
	}

	void Persona::setnombre(string nombre) {
		this->nombre = nombre;
	}

	void Persona::input(){
		cout<<"ingrese su nombre: "<<endl;
		cin>>this->nombre;

		cout<<"ingrese su apellido: "<<endl;
		cin>>this->apellido;

		cout<<"ingrese su DNI: "<<endl;
		cin>>this->dni;
	}
	void Persona::show(){
		cout<<"Nombre: "<<this->nombre<<endl<<"Apellido: "<<this->apellido<<endl<<"DNI: "<<this->dni<<endl;
	}

