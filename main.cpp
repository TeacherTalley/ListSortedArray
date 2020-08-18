/* --ListSortedArray.cpp-------------------------------------------------------
This file is the main driver for the ListSortedArray
-----------------------------------------------------------------------------*/

#include "ListSortedArray.h"
#include <iostream>
using namespace std;

int main()
{

	// Examples using ListSorted
	ListSorted* myList = new ListSortedArray();
	myList->erase(10);
	myList->insert(55);
	myList->insert(15);
	myList->insert(75);
	cout << "After inserts" << endl;
	myList->display();

	myList->erase(15);
	cout << "After erase 15" << endl;
	myList->display();
	myList->erase(75);
	cout << "After erase 75" << endl;
	myList->display();
	myList->erase(55);
	cout << "After erase 55" << endl;
	myList->display();

	myList->erase(100);
	delete myList;
}
