//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Fecha.h"

int main() {
	Fecha de1;
cout<<de1.getdia()<<" / "<<de1.getmes()<<" / "<<de1.getanho()<<endl;

Fecha fe(2,2,1980);
cout<<fe.getdia()<<" / "<<fe.getmes()<<" / "<<fe.getanho()<<endl;

Fecha de2;
de2.input();
de2.show();
Fecha::sumadia(de2.getdia(),de2.getmes(),de2.getanho());
Fecha::compararfecha(de2.getdia(),de2.getmes(),de2.getanho());
}
