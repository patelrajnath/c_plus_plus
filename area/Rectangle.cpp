/*
 * Rectangle.cpp
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#include "Rectangle.h"

namespace area {

Rectangle::Rectangle(double length, double width):
	ShapeSurface(length, width) {
		this->length = length;
		this->width = width;
	}

Rectangle::~Rectangle() {
	// TODO Auto-generated destructor stub
}

double Rectangle::getArea(){
	return (this->length * this->width);
}


} /* namespace area */
