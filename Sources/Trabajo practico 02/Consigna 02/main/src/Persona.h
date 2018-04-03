/*
 * Persona.h
 *
 *  Created on: 26 mar. 2018
 *      Author: Martin Mosqueiraa
 */

#ifndef PERSONA_H_
#define PERSONA_H_
#include <string>
#include "Fecha.h"
using namespace std;

class Persona {
private:
	long dni;
	string nombre;
	string apellido;
	Fecha nacimiento;

public:
	Persona();
	Persona(long,string,string,Fecha);
	long getdni();
	void setdni(long);
	string getnombre();
	void setnombre(string);
	string getapellido();
	void setapellido(string);
	Fecha getnacimiento();
	void setnacimiento(Fecha nacimiento);
	void input();
	void show();
};

#endif /* PERSONA_H_ */
