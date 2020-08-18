#ifndef LISTSORTEDARRAY
#define LISTSORTEDARRAY
#include "ElementType.h"
#include "ListSorted.h"
/*-- ListSortedArray.h ---------------------------------------------------------------
  This header file defines the data type ListSortedArray for processing lists.
  This class inherits from the abstract base class List
  Basic operations are:
	 Constructor
	 empty:    Check if list is empty
	 insert:   Insert an item
	 erase:    Remove an item
	 display:  Output the list
-------------------------------------------------------------------------*/
const int CAPACITY = 10;
typedef ElementType ElementTypeArray[CAPACITY];

class ListSortedArray : public ListSorted
{
public:
	ListSortedArray();

	bool empty();

	void display();

	void insert(ElementType e);

	int search(ElementType e);

	void erase(ElementType e);

private:
	ElementTypeArray list = { 0 };
	int numElements;
};
#endif
