/*
Name         : Prabhat Kiran
Date         : 20th October 2022
Description  : Heapify a Sub-Tree rooted with Node in the Array.
*/

#include "main.h"

/* Function to Check the number is Minimum or Maximum to decide the Position */

void max_heap (int* heap, int i, int size)
{
	int max = i;	//Initialize the Largest element as the Root index.
	int left_c = (2 * i) + 1;	//Initialize the Left Child index.
	int right_c = (2 * i) + 2;	//Initialize the Right Child index.

	if ((left_c < size) && (heap [max] < heap [left_c]))	//If the Left Child is greater than the Largest; update the 'max' as Left Child index. (Left Child index shall be valid).
		max = left_c;

	if ((right_c < size) && (heap [max] < heap [right_c]))	//If the Right Child is greater than the Largest; update the 'max' as Right Child index. (Right Child index shall be valid).
		max = right_c;

	if (max != i)	//If the value of 'max' changes based on the above Conditions; then only Swap the Elements in the Heap.
	{
		swap (&heap [i], &heap [max]);

		max_heap (heap, max, size);	//Recursive call to Heapify the affected Sub-Tree.
	}
}
