/*
 * QuickSorting.h
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */
#include <memory> // PImpl

#include "Sorting.h"
using namespace std;

#ifndef QUICKSORTING_H_
#define QUICKSORTING_H_

class QuickSorting: public Sorting {
public:
	QuickSorting();
	virtual ~QuickSorting();

	QuickSorting(const QuickSorting& other);
	QuickSorting& operator=(QuickSorting rhs);

	void sort(int*, int);

private:
	// Internal implementation class
	class QuickSortingImpl;

	// Pointer to the internal implementation
	unique_ptr<QuickSortingImpl> qsortImpl;

//	void quick_sort(int*, int, int);
//	int partition(int*, int, int);
};


#endif /* QUICKSORTING_H_ */
