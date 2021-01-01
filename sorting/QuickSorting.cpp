/*
 * QuickSorting.cpp
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#include "QuickSorting.h"

#include <iostream>
using namespace std;

struct QuickSorting::QuickSortingImpl: public Sorting {

	QuickSortingImpl(){
		// Constructor init
	}

	// Dummy Impl to inherit the Sorting class
	void sort(int*, int){}

	int partition(int* list, int low, int high){
		int i = low - 1;
		int pivot = list[high];
		// cout << pivot << endl;
		for(int j = low; j < high; j++){
			if(list[j] < pivot){
				i++;
				if(i != j)
					swap_elem(&list[j], &list[i]);
			}
		}
		if(i+1 != high)
			swap_elem(&list[i+1], &list[high]); // copy the pivot element at the correct position
		return i+1; // return the pivot position
	}

	void quick_sort(int* list, int low, int high){
		if (low < high){
			// printArray(list, high+1);
			int pi = partition(list, low, high);
			// printArray(list, high+1);
			// cout << "The pivot position: " << pi << endl;
			// cout << "The Low position: " << low << endl;
			// cout << "The High position: " << high << endl;
			quick_sort(list, low, pi-1);
			quick_sort(list, pi+1, high);
		}
	}
};

QuickSorting::QuickSorting()
	: qsortImpl(new QuickSortingImpl()){
}

// Assignment operator and Copy constructor

QuickSorting::QuickSorting(const QuickSorting& other)
    : qsortImpl(new QuickSortingImpl(*other.qsortImpl))
{
}

QuickSorting& QuickSorting::operator=(QuickSorting rhs)
{
    swap(qsortImpl, rhs.qsortImpl);
    return *this;
}


QuickSorting::~QuickSorting()=default;

// Public Implementations
void QuickSorting::sort(int* list, int len){
	qsortImpl->quick_sort(list, 0, len-1);
}
