/*
 * SelectionSorting.h
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#ifndef SELECTIONSORTING_H_
#define SELECTIONSORTING_H_

#include "Sorting.h"

class SelectionSorting: public Sorting {
public:
	SelectionSorting();
	virtual ~SelectionSorting();
	void sort(int*, int);
	void sort(int*, int, int){}
};

#endif /* SELECTIONSORTING_H_ */
