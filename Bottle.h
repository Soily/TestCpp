/*
 * Bottle.h
 *
 *  Created on: 26.03.2015
 *      Author: soily
 */

#ifndef BOTTLE_H_
#define BOTTLE_H_

namespace std {

enum Kind_Of_Bottle {
	plastic,
	glass
};

class Bottle {
public:
	Bottle();

	/* Volume Setter/Getter */
	int getVolume();
	void setVolume(int Volume);

	/* Kind Setter/Getter */
	Kind_Of_Bottle getKind_Of_Bottle();
	void setKind_Of_Bottle(Kind_Of_Bottle KindOfBottle);

	/* Destructor */
	virtual ~Bottle();
private:
	int Volume;
	Kind_Of_Bottle KindOfBottle;
};

} /* namespace std */

#endif /* BOTTLE_H_ */
