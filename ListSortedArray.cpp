/* --ListSortedArray.cpp-------------------------------------------------------
This file is the implementation for the ListSortedArray class
-----------------------------------------------------------------------------*/
#include "ListSortedArray.h"
#include <iostream>
using namespace std;

/* Helper function to perform binary search on a array */
int binarySearch(ElementType arr[], int low, int high, ElementType key)
{
	if (high < low)
		return -1;
	int mid = (low + high) / 2;
	if (key == arr[mid])
		return mid;
	if (key > arr[mid])
		return binarySearch(arr, (mid + 1), high, key);
	return binarySearch(arr, low, (mid - 1), key);
}

/* Constructor */
ListSortedArray::ListSortedArray() 
{
	numElements = 0;
}

/* Determine if list is empty */
/* Big O = ??  */
bool ListSortedArray::empty() 
{
	if (numElements == 0) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}

/* Display the list to stdout */
/* Big O = ?? */
void ListSortedArray::display() 
{
	for (int i = 0; i < numElements; i++) 
	{
		cout << list[i] << ",";
	}
	cout << endl;
}

/* Insert an element in the array in order */
/* Big O = ?? */
void ListSortedArray::insert(ElementType e) 
{
	if (numElements == CAPACITY) 
	{
		cerr << "Unable to insert more element" << endl;
		return;
	}
	if (numElements == 0) 
	{
		list[0] = e;
		numElements++;
	}
	else 
	{
		int i;
		for (i = numElements - 1; (i >=0 && list[i] > e); i--) 
		{
			list[i + 1] = list[i];
		}
		list[i + 1] = e;
		numElements++;
	}
}

/* Search for an item in the list */
int ListSortedArray::search(ElementType e) 
{
	if (numElements == 0) 
	{
		cerr << "Empty list! Unable to search";
		return -1;
	}
	else 
	{
		return(binarySearch(list, 0, numElements, e));
	}
}

/* Erase an item in the list */
/* Big O = ?? */
void ListSortedArray::erase(ElementType e) 
{
	if (numElements == 0) 
	{
		cerr << "Empty list, unable to erase" << endl;
	}
	else 
	{
		int pos = search(e);
		if (pos == -1) {
			cerr << "Cannot find item in list" << endl;
		}
		else 
		{
			int i;
			for (i = pos; i < numElements; i++) 
			{
				list[i] = list[i + 1];
			}
			numElements--;
		}
	}
}

