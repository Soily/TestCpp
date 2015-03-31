//============================================================================
// Name        : MyClassApp.cpp
// Author      : Patrick Keil
// Version     : 0.01
// Copyright   : Your copyright notice
// Description : BottleApp in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Bottle.h"
using namespace std;

int main() {

	Bottle *MyBottle = new Bottle();

	MyBottle->setVolume(2);
	MyBottle->setKind_Of_Bottle(glass);
	cout << "My Bottle has a volume of " << MyBottle->getVolume() << " litre." << endl;

	switch(MyBottle->getKind_Of_Bottle()){

	case plastic:
		cout << "My Bottle is made of " << "plastic" << endl;
		break;

	case glass:
		cout << "My Bottle is made of " << "glass" << endl;
		break;

	default:
		break;
	}

	return 0;
}
