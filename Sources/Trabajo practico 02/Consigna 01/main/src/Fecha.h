/*
 * Fecha.h
 *
 *  Created on: 25 mar. 2018
 *      Author: Martin Mosqueiraa
 */

#ifndef FECHA_H_
#define FECHA_H_

class Fecha {
private:
	int dia;
	int mes;
	int anho;

public:
	Fecha(int,int,int);
	Fecha();
	int getdia();
	void setdia(int);
	int getmes();
	void setmes(int);
	int getanho();
	void setanho(int);
	void input();
	void show();
	static void sumadia(int,int,int);
	static void compararfecha(int,int,int);
};

#endif /* FECHA_H_ */
