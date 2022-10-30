/*
Name         : Prabhat Kiran
Date         : 20th October 2022
Description  : Build the Max-Heap Tree from the given Array.
*/

#include "main.h"

/* Function to Build the Max-Heap Tree */

void build_maxheap (int* heap, int size)
{
	int index = (size / 2) - 1;	//To calculate the number of Parent Nodes in the given Heap.

	while (index >= 0)		//The loop shall run till each of the Parent node is following the Max-Heap rules.
	{
		max_heap (heap, index, size);

		index -= 1;
	}
}
