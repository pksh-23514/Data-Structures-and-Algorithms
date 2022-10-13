/*
Name         : Prabhat Kiran
Date         : 14th October 2022
Description  : Merge the Split arrays in a Sorted manner to form the Merged array.
Sample Input : {9, 3}, 2, {9}, 1, {3}, 1
Sample Output: {3, 9}
*/

#include "main.h"

void merge (int *array, int narray, int *left, int nleft, int *right, int nright)
{
	int i = 0;	//To store the current position of the Left Sub-array.
	int j = 0;	//To store the current position of the Right Sub-array.
	int k = 0;	//To store the current position of the Main array.

	while ((i < nleft) && (j < nright))	//The loop shall run till either 'i' or 'j' reaches the end of their respective arrays.
	{
		if (left [i] < right [j])	//If the element in the Left Sub-array is smaller than the element in the Right Sub-array; store it in the Main array.
		{
			array [k++] = left [i++];
		}
		else	//If the element in the Right Sub-array is smaller than the element in the Left Sub-array; store it in the Main array.
		{
			array [k++] = right [j++];
		}
	}

	while (i < nleft)	//Copy the remaining elements in the Left Sub-Array to the Main array.
	{
		array [k++] = left [i++];
	}

	while (j < nright)	//Copy the remaining elements in the Right Sub-Array to the Main array.
	{
		array [k++] = right [j++];
	}
}
