/*
 * Fecha.h
 *
 *  Created on: 11 jun. 2018
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

};

#endif /* FECHA_H_ */
