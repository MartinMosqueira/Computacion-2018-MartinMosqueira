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

en.push(31);
en.show();
cout<<endl;

en.push(7);
en.show();
cout<<endl;

en.push(15);
en.show();
cout<<endl;


cout<<"Pop: "<<en.pop()<<endl;
cout<<"Pop: "<<en.pop()<<endl;
cout<<"Pop: "<<en.pop()<<endl;
cout<<"Pop: "<<en.pop()<<endl;

	return 0;
}
