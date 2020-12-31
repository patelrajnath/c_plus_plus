/*
 * Costing.h
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#ifndef COSTING_H_
#define COSTING_H_

namespace volume{
class Costing {
public:
	Costing();
	virtual ~Costing();
	double getCost(double, double rate=70);
};
}

#endif /* COSTING_H_ */
