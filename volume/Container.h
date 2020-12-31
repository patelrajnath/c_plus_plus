/*
 * Container.h
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#ifndef CONTAINER_H_
#define CONTAINER_H_

#include "Costing.h"
#include "ShapeBox.h"

namespace volume{
class Container: public Costing, public ShapeBox {
public:
	Container();
	virtual ~Container();

	// Setter
	void setWidth(double);
	void setHeight(double);
	void setLength(double);

	// Getters
	double getVolume(void);

	// Overloading + operator
	Container operator+(Container&);
};

}
#endif /* CONTAINER_H_ */
