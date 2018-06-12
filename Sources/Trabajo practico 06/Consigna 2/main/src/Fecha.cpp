/*
 * Fecha.cpp
 *
 *  Created on: 11 jun. 2018
 *      Author: Martin Mosqueiraa
 */

#include "Fecha.h"

Fecha::Fecha() {
	dia=0;
	mes=0;
	anho=0;

}
Fecha::Fecha(int dia,int mes,int anho){
	this->dia=dia;
	this->mes=mes;
	this->anho=anho;
}

int Fecha::getdia(){
	return dia;
}

void Fecha::setdia(int dia){
	this->dia=dia;
}

int Fecha::getmes(){
	return mes;
}

void Fecha::setmes(int mes){
	this->mes=mes;
}

int Fecha::getanho(){
	return anho;
}

void Fecha::setanho(int anho){
	this->anho=anho;
}
