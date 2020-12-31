/*
 * Sorting.h
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#include <iostream>
using namespace std;

#ifndef SORTING_H_
#define SORTING_H_

class Sorting {
public:
	Sorting();
	virtual ~Sorting();

	void printArray(int* arr, int len){
		for(int i=0; i< len; i++)
			cout << arr[i] << " ";
		cout << endl;
		}

	void swap(int* a, int* b){
			int temp = *a;
			*a = *b;
			*b = temp;
			cout << "Swapped " << *a << " and " << *b << endl;
		}

	virtual void sort(int*, int) = 0;
	virtual void sort(int*, int, int) = 0;
};

#endif /* SORTING_H_ */
