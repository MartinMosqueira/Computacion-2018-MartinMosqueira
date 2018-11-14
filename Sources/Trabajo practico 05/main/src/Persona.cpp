/*
 * Persona.cpp
 *
 *  Created on: 8 may. 2018
 *      Author: Martin Mosqueiraa
 */

#include "Persona.h"
#include "Fecha.h"
#include "fstream"
 using namespace std;
#include <iostream>

Persona::Persona() {
    nacimiento=new Fecha;

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
int Persona::getlegajo(){
	return legajo;
}
void Persona::setlegajo(int legajo){
	this->legajo=legajo;
}
Fecha*Persona::getnacimiento(){
	return nacimiento;
}
void Persona::setnacimiento(Fecha*nacimento){
	this->nacimiento=nacimiento;
}

void Persona::input(){
ofstream archivo;
archivo.open("archivo.txt");
cout<<"ingrese el legajo: "<<endl;
cin>>this->legajo;
archivo<<legajo<<endl;
cout<<"ingrese el dni: "<<endl;
cin>>this->dni;
archivo<<dni<<endl;
cout<<"ingrese el nombre"<<endl;
cin>>this->nombre;
archivo<<nombre<<endl;
cout<<"ingrese el apellido: "<<endl;
cin>>this->apellido;
archivo<<apellido<<endl<<endl;
nacimiento->input();

}

void Persona::aniadir(){

	ofstream archivo_;
	archivo_.open("archivo.txt",ios::app);

	if(archivo_.fail()){
		cout<<"no se pudo abrir el archivo...";
		exit(1);
	}
cout<<"Legajo: "<<endl;
cin>>this->legajo;
archivo_<<legajo<<endl;
cout<<"Dni: "<<endl;
cin>>this->dni;
archivo_<<dni<<endl;
cout<<"Nombre: "<<endl;
cin>>this->nombre;
archivo_<<nombre<<endl;
cout<<"Apellido: "<<endl;
cin>>this->apellido;
archivo_<<apellido<<endl;
nacimiento->input();
	archivo_.close();

}

void Persona::mostrar(){
	string texto;
	ifstream archivo;
	archivo.open("archivo.txt",ios::in);

	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo...";
		exit(1);
	}

	while(!archivo.eof()){//mientras no sea el final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	system("pause");
	archivo.close();
}

void Persona::eliminar(){

	ifstream salida;
	salida.open("archivo.txt",ios::in);
	ofstream entrada;
	entrada.open("temporal.txt",ios::out);

	if(salida.fail()){
			cout<<"No se pudo abrir el archivo...";
			exit(1);
		}
	else{
		int Legajo;
		cout<<"Ingrese el legajo que desea eliminar: ";
		cin>>Legajo;
		salida>>legajo;
		while(!salida.eof()){
			salida>>dni>>nombre>>apellido;
			if(Legajo==legajo){
				cout<<"El alumno se a eliminado"<<endl;
				system("pause");
			}else{

				entrada<<legajo<<" "<<dni<<" "<<nombre<<" "<<apellido<<endl;
			}
			salida>>legajo;
		}
		entrada.close();
		salida.close();
		remove("archivo.txt");
		rename("temporal.txt","archivo.txt");
	}
}
