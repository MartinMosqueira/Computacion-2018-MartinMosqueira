//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Persona.h"
#include "Fecha.h"


int main() {
Fecha fe1(15,07,1996);
Persona per1(39798574,"martin","mosqueira",fe1);
cout<<"Nombre: "<<per1.getnombre()<<endl;
cout<<"Apellido: "<<per1.getapellido()<<endl;
cout<<"DNI: "<<per1.getdni()<<endl;
cout<<"Nacimiento: "<<endl<<per1.getnacimiento().getdia()<<" / "<<per1.getnacimiento().getmes()<<" / "<<per1.getnacimiento().getanho()<<endl;

Persona per;
Fecha fe;
per.input();
per.show();

	return 0;
}
