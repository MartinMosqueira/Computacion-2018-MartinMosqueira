/*
 * Comunidad.cpp
 *
 *  Created on: 13 abr. 2018
 *      Author: Martin Mosqueiraa
 */

#include "Comunidad.h"
#include "Persona.h"
#include <iostream>
using namespace std;

Comunidad::Comunidad() {
for(int x=0;x<size;x++){
		personas=new Persona[x];
}
}



void Comunidad::setpersonas(Persona*personas, int size){
	for(int x=0;x<size;x++){
	this->personas[x]=personas[x];
	}
}

Persona*Comunidad:: getpersonas(){
	return personas;
}


void Comunidad::input(int size){
	for(int x=0;x<size;x++){
this->personas[x].input();
	}
}
void Comunidad::show(int size){
for(int x=0;x<size;x++){
	this->personas[x].show();
}
}
