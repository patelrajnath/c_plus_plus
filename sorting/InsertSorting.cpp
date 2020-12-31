/*
 * InsertSorting.cpp
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#include "InsertSorting.h"

InsertSorting::InsertSorting() {
	// TODO Auto-generated constructor stub

}

InsertSorting::~InsertSorting() {
	// TODO Auto-generated destructor stub
}

void InsertSorting::sort(int* list, int len){
		cout << "The size of the array is: " << len << endl;

		int i, j, key, insert_at;
		for(i = 0; i < len; i++){
			key = list[i];
			j = i-1;
			while(j >= 0 && list[j] > key){
				list[j+1] = list[j];
				j--;
			}
			insert_at = j + 1;
			list[insert_at] = key;
			printArray(list, len);
		}
	}


