/*
 * Fecha.cpp
 *
 *  Created on: 13 abr. 2018
 *      Author: Martin Mosqueiraa
 */

#include "Fecha.h"
#include <iostream>
using namespace std;

Fecha::Fecha() {
	// TODO Auto-generated constructor stub

}
Fecha::Fecha(int di,int me,int an){
	dia=di;
	mes=me;
	anho=an;
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
	cout<<"ingrese su fecha de nacimiento: "<<endl;
	cout<<"dia: "<<endl;
	cin>>dia;
	cout<<"mes: "<<endl;
	cin>>mes;
	cout<<"año: "<<endl;
	cin>>anho;

}
void Fecha::show(){
	cout<<"Fecha de nacimiento: "<<endl;
	cout<<dia<<" / "<<mes<<" / "<<anho<<endl;
}
