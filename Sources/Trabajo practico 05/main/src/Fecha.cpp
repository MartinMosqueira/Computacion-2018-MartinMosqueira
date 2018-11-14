/*
 * Fecha.cpp
 *
 *  Created on: 8 may. 2018
 *      Author: Martin Mosqueiraa
 */

#include "Fecha.h"
#include "Persona.h"
#include <iostream>
#include <string>
#include <sstream>
#include "fstream"
using namespace std;

Fecha::Fecha() {
	// TODO Auto-generated constructor stub

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
void Fecha::input(){

cout<<"Fecha de nacimiento: "<<endl;
cout<<"Dia: "<<endl;
cin>>this->dia;
cout<<"Mes: "<<endl;
cin>>this->mes;
cout<<"Anho: "<<endl;
cin>>this->anho;
}

string Fecha::toString() {
	stringstream ss;

	ss << dia << "/" << mes << "/" << anho;

	return ss.str();
}
