/*
 * Costing.cpp
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#include "Costing.h"

namespace volume{

Costing::Costing() {
	// TODO Auto-generated constructor stub

}

Costing::~Costing() {
	// TODO Auto-generated destructor stub
}

double Costing::getCost(double area, double rate){
	return area * rate;
}

}
