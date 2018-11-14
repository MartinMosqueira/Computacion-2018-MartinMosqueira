/*
 * Persona.h
 *
 *  Created on: 8 may. 2018
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
	string apellido;
	string nombre;
	int legajo;
	Fecha*nacimiento;
public:
	Persona();
	long getdni();
	void setdni(long);
	string getapellido();
	void setapellido(string);
	string getnombre();
	void setnombre(string);
	int getlegajo();
	void setlegajo(int);
	Fecha*getnacimiento();
	void setnacimiento(Fecha*);
	void input();
	void aniadir();
	void mostrar();
	void eliminar();
};

#endif /* PERSONA_H_ */
