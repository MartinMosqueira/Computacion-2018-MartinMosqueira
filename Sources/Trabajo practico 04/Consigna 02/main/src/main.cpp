//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Fecha.h"
#include "Persona.h"

int main() {
	Fecha fe1(15,07,96);
	Persona per1(39798574,"martin","mosqueira",&fe1);
	cout<<"Nombre: "<<per1.getnombre()<<endl;
	cout<<"Apellido: "<<per1.getapellido()<<endl;
	cout<<"DNI: "<<per1.getdni()<<endl;
	cout<<"Fecha de nacimiento: "<<endl;
	cout<<per1.getnacimiento()->getdia()<<"  / "<<per1.getnacimiento()->getmes()<<" / "<<per1.getnacimiento()->getanho()<<endl;

Fecha fe;
Persona per;
per.input();
per.show();

}
