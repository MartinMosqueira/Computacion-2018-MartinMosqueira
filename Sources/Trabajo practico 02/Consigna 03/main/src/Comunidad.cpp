/*
 * Comunidad.cpp
 *
 *  Created on: 7 abr. 2018
 *      Author: Martin Mosqueiraa
 */

#include "Comunidad.h"
#include "Persona.h"
#include <iostream>
using namespace std;

Comunidad::Comunidad() {
	// TODO Auto-generated constructor stub
	for(int x=0;x<10;x++){
		personas[x]=new Persona;
		 this->personas[x]->setnombre("");
		 this->personas[x]->setapellido("");
		 this->personas[x]->setedad(0);

	 }
}
void Comunidad::setpersonas(Persona* personas){
	for(int x=0;x<10;x++){
		this->personas[x]=&(personas[x]);
	}
}

Persona** Comunidad::getpersonas(){
	return personas;
}

void Comunidad::input(){

	for(int x=0;x<10;x++){
		string nombre;
		string apellido;
		int edad;
		cout<<"ingrese el nombre: "<<endl;
		cin>>nombre;
		this->personas[x]->setnombre(nombre);
		cout<<"ingrese el apellido: "<<endl;
		cin>>apellido;
		this->personas[x]->setapellido(apellido);
		cout<<"ingrese la edad: "<<endl;
		cin>>edad;
		this->personas[x]->setedad(edad);

	}
}
void Comunidad::show(){

for(int x=0;x<10;x++){

	cout<<"Nombre: "<<this->personas[x]->getnombre()<<endl;
	cout<<"Apellido: "<<this->personas[x]->getapellido()<<endl;
	cout<<"Edad: "<<this->personas[x]->getedad()<<endl;

}
}
