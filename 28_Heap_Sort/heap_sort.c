/*
Name         : Prabhat Kiran
Date         : 20th October 2022
Description  : Heap Sort Operation to sort the given Array.
Sample Input : 5 4 3 2 1
Sample Output: 1 2 3 4 5
*/

#include "main.h"

/* Function to sort the array using heap sort */

int heap_sort (int *heap, int size)
{
	build_maxheap (heap, size);	//To get the Initial Max Heap Data Structure for performing the Sorting Operation.

	int limit = size - 1;

	while (limit >= 0)		//The loop shall run till all the Elements in the Heap are arranged in a Sorted order.
	{
		swap (&heap [0], &heap [limit]);	//To swap the Root Node Index data with the Last Index data in the Heap.

		/* The max_heap() will take a Heap with only the Root Node in violation of the Heap rules */
		max_heap (heap, 0, limit);	//To get the next Maximum element in the Heap at the Root Node Index (i.e. Index '0').

		limit -= 1;
	}

	return 0;
}

/* Function to Swap the 2 Elements */

void swap (int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
