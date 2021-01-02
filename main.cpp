/*
 * maincpp.cpp
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#include <iostream>
#include "sorting/QuickSorting.h"
#include "sorting/BubbleSorting.h"
#include "sorting/SelectionSorting.h"
#include "sorting/InsertSorting.h"
#include "area/Rectangle.h"
#include "area/Triangle.h"
#include "volume/Container.h"
#include "templates/Stack.h"
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>


using namespace std;

int main(int argc, char **argv) {

	// Example of polymorphism
	using namespace area;
	ShapeSurface *shape;
	Rectangle rect = Rectangle(2, 3);
	Triangle tri = Triangle(12, 3);

	shape = &rect;
	double surface_area = shape->getArea();
	cout << "The Area of Rectangle is: " << surface_area << endl;

	shape = &tri;
	surface_area = shape->getArea();
	cout << "The Area of Triangle is: " << surface_area << endl;

	// Example operator Overloading
	using namespace volume;
	Container box1;
	box1.setHeight(2);
	box1.setLength(2);
	box1.setWidth(2);

	Container box2;
	box2.setHeight(2);
	box2.setLength(2);
	box2.setWidth(2);

	Container box3 = box1 + box2;
	double rate = 70;
	double area = box1.getVolume();

	cout << "Cost/unit volume: " << rate << endl;
	cout << "The volume of container is: " << area << endl;
	cout << "The cost of the container: " << box1.getCost(area, rate) << endl;

	area = box3.getVolume();

	cout << "The volume of container is: " << area << endl;
	cout << "The cost of the container: " << box3.getCost(area, rate) << endl;

	// Example class management
	int list[] = {10, 80, 30, 90, 40, 50, 70};
	int len = sizeof(list)/sizeof(list[0]);
	// cout << *(&list + 1) - list;
	QuickSorting qsort = QuickSorting();
	BubbleSorting bsort = BubbleSorting();
	InsertSorting isort = InsertSorting();
	SelectionSorting ssort = SelectionSorting();

	Sorting *sorting;
	sorting = &qsort;
//	 sorting = &bsort;
	// sorting = &isort;
	// sorting = &ssort;

	 sorting->sort(list, len);
//	sorting->sort(list, 0, len-1);

	cout << "The sorted list:" << endl;
	sorting->printArray(list, len);

	// Template based Stack implementation
	try{
		Stack<int> intStack;
		Stack<string> strStack;

		intStack.push(7);
		cout << "The top elem: " << intStack.top() << endl;
//		intStack.pop();
//		cout << "The top elem: " << intStack.top() << endl;

		strStack.push("hello");
		cout << "The top elem: " << strStack.top() << endl;
		strStack.pop();
		cout << "The top elem: " << strStack.top() << endl;

	}catch (exception const& ex) {
		cerr << "Exception: " << ex.what() << endl;
		      return -1;
	}

}



