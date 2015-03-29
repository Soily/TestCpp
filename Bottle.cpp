/*
 * Bottle.cpp
 *
 *  Created on: 26.03.2015
 *      Author: soily
 */

#include "Bottle.h"

namespace std {

Bottle::Bottle() {
	// TODO Auto-generated constructor stub
	this->Volume = 0;
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

void Bottle::setKind_Of_Bottle(Kind_Of_Bottle){
	this->KindOfBottle = KindOfBottle;
}

Bottle::~Bottle() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
