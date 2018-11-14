/*
 * Fecha.h
 *
 *  Created on: 8 may. 2018
 *      Author: Martin Mosqueiraa
 */

#ifndef FECHA_H_
#define FECHA_H_

#include <iostream>

using namespace std;

class Fecha {
private:
	int dia;
	int mes;
	int anho;
public:
	Fecha();
	Fecha(int,int,int);
	int getdia();
	void setdia(int);
	int getmes();
	void setmes(int);
	int getanho();
	void setanho(int);
	void input();
	void show();
	string toString();
};

#endif /* FECHA_H_ */
