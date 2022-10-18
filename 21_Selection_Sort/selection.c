/*
Name         : Prabhat Kiran
Date         : 15th October 2022
Description  : Selection Sort Operation to sort the given Array.
Sample Input : 5 4 3 2 1
Sample Output: 1 2 3 4 5
*/

#include "main.h"

data_t selection (data_t *arr, data_t size )
{
	data_t min;		//To store the index of the Minimum element found in the Array.
	data_t temp;		//To Swap the 2 Array values.

	for (int i = 0; i < size; i++)	//The loop shall run till the end of the Array.
	{
		min = i;	//Assume the 'min' is the 'i'th index in the Array.

		for (int j = (i + 1); j < size; j++)	//Start comparing all the values from index 'i+1' till the end of the Array to find the Minimum value for that particular iteration.
		{
			if (arr [j] < arr [min])
				min = j;
		}

		if (min != i)	//If there is any value less than the initially assumed Minimum value, swap them as per their Index.
		{
			temp = arr [i];
			arr [i] = arr [min];
			arr [min] = temp;
		}
	}

	return 1;
}
