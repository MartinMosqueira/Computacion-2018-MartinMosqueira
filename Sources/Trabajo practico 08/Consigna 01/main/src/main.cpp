//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Enlace.h"

int main() {
	Enlace en;

	en.add(4.34);
	en.show();
	cout<< endl;

	en.add(51.123);
	en.show();
	cout<< endl;

	en.add(12.3);
	en.show();
	cout<< endl;

	en.add(9.08);
	en.show();
	cout<< endl;

	en.add(70.3);
	en.show();
	cout<< endl;

	en.add(14.21);
	en.show();
	cout<< endl;

	return 0;
}
