/*
 * Fecha.h
 *
 *  Created on: 26 mar. 2018
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
};

#endif /* FECHA_H_ */
