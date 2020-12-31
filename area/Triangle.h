/*
 * Triangle.h
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#include "ShapeSurface.h"

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

namespace area {

class Triangle: public ShapeSurface {
public:
	Triangle(double, double);
	virtual ~Triangle();
	double getArea(void);
};

} /* namespace area */

#endif /* TRIANGLE_H_ */
