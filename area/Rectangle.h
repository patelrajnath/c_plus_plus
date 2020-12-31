/*
 * Rectangle.h
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#include "ShapeSurface.h"

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

namespace area {

class Rectangle: public ShapeSurface {
public:
	Rectangle(double, double);
	virtual ~Rectangle();
	double getArea();
};

} /* namespace area */

#endif /* RECTANGLE_H_ */
