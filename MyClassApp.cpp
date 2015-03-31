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

	MyBottle->display_KindOfBottleAndVolume();

	return 0;
}

