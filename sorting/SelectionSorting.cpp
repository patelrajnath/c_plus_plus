/*
 * SelectionSorting.cpp
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#include "SelectionSorting.h"

SelectionSorting::SelectionSorting() {
	// TODO Auto-generated constructor stub

}

SelectionSorting::~SelectionSorting() {
	// TODO Auto-generated destructor stub
}

void SelectionSorting::sort(int* list, int len){
	cout << "The size of the array is: " << len << endl;
	int min_id;
	for(int i = 0; i < len; i++){
		min_id = i;

		// Find the smallest element in sub-array list[i+1:len]
		for(int j = i + 1; j < len; j++)
			if(list[j] < list[min_id])
				min_id = j;

		// append the smallest element at the end of the sorted array
		swap(&list[min_id], &list[i]);
	}
}

