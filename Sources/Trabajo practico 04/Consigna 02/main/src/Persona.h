/*
 * Persona.h
 *
 *  Created on: 13 abr. 2018
 *      Author: Martin Mosqueiraa
 */

#ifndef PERSONA_H_
#define PERSONA_H_
#include <string>
using namespace std;
#include "Fecha.h"

class Persona {
private:
	long dni;
	string nombre;
	string apellido;
	Fecha* nacimiento;
public:
	Persona();
	Persona(long,string,string,Fecha*);
	long getdni();
	void setdni(long);
	string getnombre();
	void setnombre(string);
	string getapellido();
	void setapellido(string);
	void setnacimiento(Fecha*);
	Fecha* getnacimiento();
	void input();
	void show();

};

#endif /* PERSONA_H_ */
