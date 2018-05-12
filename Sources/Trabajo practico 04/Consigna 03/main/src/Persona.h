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

class Persona {
private:
	string nombre;
	string apellido;
    int edad;
public:
	Persona();
	Persona(string,string,int);
	string getnombre();
	void setnombre(string);
	string getapellido();
	void setapellido(string);
	int getedad();
	void setedad(int);
	void input();
	void show();
};

#endif /* PERSONA_H_ */
