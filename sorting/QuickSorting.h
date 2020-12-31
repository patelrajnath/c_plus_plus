/*
 * QuickSorting.h
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */
#include "Sorting.h"
#ifndef QUICKSORTING_H_
#define QUICKSORTING_H_

class QuickSorting: public Sorting {
public:
	QuickSorting();
	virtual ~QuickSorting();

	void sort(int*, int){}
	void sort(int*, int, int);
	int partition(int*, int, int);
};


#endif /* QUICKSORTING_H_ */
