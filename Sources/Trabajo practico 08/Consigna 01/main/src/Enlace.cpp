/*
 * Enlace.cpp
 *
 *  Created on: 13 nov. 2018
 *      Author: Martin Mosqueiraa
 */

#include "Enlace.h"
#include <iostream>
#include "Nodo.h"
using namespace std;

Enlace::Enlace() {
	// TODO Auto-generated constructor stub
	comienzo=NULL;

}
Nodo* Enlace::getcomienzo(){
	return comienzo;
}
void Enlace::setcomienzo(Nodo* comienzo){
	this->comienzo=comienzo;
}

void Enlace::add(double valor){
	Nodo* newNodo=new Nodo();
		newNodo->setvalor(valor);

		//si la list� esta vac�a
		if(comienzo==NULL){
			comienzo = newNodo;
			return;
		}
		 //si el elemento nuevo es menor al primero
		     if(comienzo->getvalor() > valor){
		    	 newNodo->setsiguiente(comienzo);
		    	 comienzo=newNodo;
		    	 return;
		     }
		  //buscar posicion para el nuevo valor
	    	Nodo* anterior,*buscar;
		  	buscar=anterior=comienzo;
	    	while(buscar!=NULL && buscar->getvalor() <= valor){
	     		anterior=buscar;
		   		buscar=buscar->getsiguiente();
		     	}
	    	//si el while sale por NULL
	    		if(buscar==NULL){
	    			anterior->setsiguiente(newNodo);
	    			return;
	    		}
	    	//si sale por mayor valor
	    		newNodo->setsiguiente(anterior->getsiguiente());
	    		anterior->setsiguiente(newNodo);

}

void Enlace::show(){
	Nodo* mostrar=comienzo;
	while(mostrar != NULL){
		cout<<"Direccion: "<<mostrar<<"-Valor: "<<mostrar->getvalor()<<"-Siguiente: "<<mostrar->getsiguiente()<<endl;
		mostrar=mostrar->getsiguiente();
	}
}







