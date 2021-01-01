/*
 * BubbleSorting.cpp
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#include "BubbleSorting.h"

BubbleSorting::BubbleSorting() {
	// TODO Auto-generated constructor stub

}

BubbleSorting::~BubbleSorting() {
	// TODO Auto-generated destructor stub
}

void BubbleSorting::sort(int* list, int len){
	cout << "The size of the array is: " << len << endl;
	for(int i = 0; i < len; i++){
		bool no_swap = true;
		for(int j = 0; j < len - 1; j++){
			if(list[j] > list[j+1]){
				swap_elem(&list[j], &list[j+1]);
				no_swap = false;
			}
		}
		if(no_swap){
			cout << "Pass completed: " << i + 1 << endl;
			break;
		}
	}
}

