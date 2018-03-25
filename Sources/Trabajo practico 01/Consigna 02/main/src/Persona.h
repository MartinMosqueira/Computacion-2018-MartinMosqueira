/*
 * Persona.h
 *
 *  Created on: 23 mar. 2018
 *      Author: Martin Mosqueiraa
 */

#ifndef PERSONA_H_
#define PERSONA_H_
#include <string>
using namespace std;

class Persona {
private:
	long dni;
	string nombre;
	string apellido;
public:
	Persona();
	long getdni();
	void setdni(long);
	string getnombre();
	void setnombre(string);
	string getapellido();
	void setapellido(string);
	void input();
	void show();

};

#endif /* PERSONA_H_ */
