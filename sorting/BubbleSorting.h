/*
 * BubbleSorting.h
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#ifndef BUBBLESORTING_H_
#define BUBBLESORTING_H_

#include "Sorting.h"

class BubbleSorting: public Sorting {
public:
	BubbleSorting();
	virtual ~BubbleSorting();
	void sort(int*, int);
};

#endif /* BUBBLESORTING_H_ */
