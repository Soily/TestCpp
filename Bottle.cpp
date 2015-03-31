/*
 * Bottle.cpp
 *
 *  Created on: 26.03.2015
 *      Author: soily
 */

#include "Bottle.h"
#include <iostream>

namespace std {

Bottle::Bottle() {
	// TODO Auto-generated constructor stub
	this->Volume = 1;
	this->KindOfBottle = glass;
}

int Bottle::getVolume(){
	return this->Volume;
}

void Bottle::setVolume(int Volume){
	this->Volume = Volume;
}

Kind_Of_Bottle Bottle::getKind_Of_Bottle(){
	return this->KindOfBottle;
}

void Bottle::setKind_Of_Bottle(Kind_Of_Bottle KindOfBottle){
	this->KindOfBottle = KindOfBottle;
}

void Bottle::display_KindOfBottleAndVolume(void){

	cout << "My Bottle has a volume of " << this->getVolume() << " litre." << endl;

	switch(this->getKind_Of_Bottle()){

		case plastic:
			cout << "My Bottle is made of " << "plastic" << endl;
			break;

		case glass:
			cout << "My Bottle is made of " << "glass" << endl;
			break;

		default:
			break;
		}
}

Bottle::~Bottle() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
