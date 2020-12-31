/*
 * Triangle.cpp
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#include "Triangle.h"

namespace area {

Triangle::Triangle(double length, double width):
	ShapeSurface(length, width){
		this->length = length;
		this->width = width;
	}

Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}

double Triangle::getArea(void){
	return (this->length * this->width) / 2;
}

} /* namespace area */
