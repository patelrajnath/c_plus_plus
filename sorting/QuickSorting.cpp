/*
 * QuickSorting.cpp
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#include "QuickSorting.h"

QuickSorting::QuickSorting() {
	// TODO Auto-generated constructor stub

}

QuickSorting::~QuickSorting() {
	// TODO Auto-generated destructor stub
}

int QuickSorting::partition(int* list, int low, int high){
		int i = low - 1;
		int pivot = list[high];
		// cout << pivot << endl;
		for(int j = low; j < high; j++){
			if(list[j] < pivot){
				i++;
				if(i != j)
					swap(&list[j], &list[i]);
			}
		}
		if(i+1 != high)
			swap(&list[i+1], &list[high]); // copy the pivot element at the correct position
		return i+1; // return the pivot position
	}


void QuickSorting::sort(int* list, int low, int high){
	if (low < high){
		// printArray(list, high+1);
		int pi = partition(list, low, high);
		// printArray(list, high+1);
		// cout << "The pivot position: " << pi << endl;
		// cout << "The Low position: " << low << endl;
		// cout << "The High position: " << high << endl;
		sort(list, low, pi-1);
		sort(list, pi+1, high);
	}
}

