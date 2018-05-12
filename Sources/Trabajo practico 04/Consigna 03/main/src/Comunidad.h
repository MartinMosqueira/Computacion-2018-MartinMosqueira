/*
 * Comunidad.h
 *
 *  Created on: 13 abr. 2018
 *      Author: Martin Mosqueiraa
 */

#ifndef COMUNIDAD_H_
#define COMUNIDAD_H_
#include "Persona.h"

class Comunidad {
private:
	Persona* personas;
	int size;
public:
	Comunidad();
	void setpersonas(Persona* personas,int);
	Persona* getpersonas();
	void input(int);
	void show(int);
};

#endif /* COMUNIDAD_H_ */
