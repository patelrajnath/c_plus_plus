/*
 * Container.cpp
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#include "Container.h"

namespace volume{

Container::Container() {
	// TODO Auto-generated constructor stub

}

Container::~Container() {
	// TODO Auto-generated destructor stub
}

void Container::setWidth(double width){
		this->width = width;
	}

void Container::setHeight(double height){
	this->height = height;
}

void Container::setLength(double length){
	this->length = length;
}


double Container::getVolume(){
	return (this->height*this->length*this->width);
}


Container Container::operator+(Container& a){
	Container c;
	c.height = this->height + a.height;
	c.width = this->width + a.width;
	c.length = this->length + a.length;
	return c;
}

}


