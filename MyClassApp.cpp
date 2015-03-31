//============================================================================
// Name        : MyClassApp.cpp
// Author      : Patrick Keil
// Version     : 0.01
// Copyright   : Your copyright notice
// Description : BottleApp in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Bottle.h"
#include "Bottle_test.h"

using namespace std;


#define RunTests 1

int main() {

#if(RunTests)
	TestDefaultValues();
#else
	Bottle *MyBottle = new Bottle();
	MyBottle->setVolume(2);
	MyBottle->setKind_Of_Bottle(glass);

	MyBottle->display_KindOfBottleAndVolume();
#endif
	return 0;
}

