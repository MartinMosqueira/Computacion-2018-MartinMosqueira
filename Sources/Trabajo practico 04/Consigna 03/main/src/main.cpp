//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Comunidad.h"
#include "Persona.h"

int main() {

int size;
Comunidad com;
cout<<"ingrese la cantidad de personas: "<<endl;
cin>>size;
com.input(size);
com.show(size);
}
