/*
 * InsertSorting.h
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#ifndef INSERTSORTING_H_
#define INSERTSORTING_H_

#include "Sorting.h"

class InsertSorting: public Sorting {
public:
	InsertSorting();
	virtual ~InsertSorting();
	void sort(int*, int);
};

#endif /* INSERTSORTING_H_ */
