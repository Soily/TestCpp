/*
 * Bottle_test.cpp
 *
 *  Created on: 26.03.2015
 *      Author: soily
 */

#include "Bottle_test.h"
#include "Bottle.h"

using namespace std;

void TestDefaultValues(void){
	Bottle *MyTestBottle = new Bottle();
	/* Default values */
	/* Expected Volume = 1 Litre
	 * Expected KoB = glass
	 */
	MyTestBottle->display_KindOfBottleAndVolume();
}

