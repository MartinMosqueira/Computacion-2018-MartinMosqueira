/*
 * Comunidad.h
 *
 *  Created on: 7 abr. 2018
 *      Author: Martin Mosqueiraa
 */

#ifndef COMUNIDAD_H_
#define COMUNIDAD_H_
#include "Persona.h"

class Comunidad {
private:
	Persona *personas[10];
public:
	Comunidad();
	void setpersonas(Persona*);
	Persona** getpersonas();
	void input();
	void show();
};

#endif /* COMUNIDAD_H_ */
