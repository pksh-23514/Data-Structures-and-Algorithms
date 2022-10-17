/*
Name         : Prabhat Kiran
Date         : 15th October 2022
Description  : Bubble Sort Operation to sort the given Array.
Sample Input : 5 4 3 2 1
Sample Output: 1 2 3 4 5
*/

#include "main.h"

data_t bubble (data_t *arr, data_t size)
{
	data_t temp, flag;	//The 'flag' will be used to check if the Swapping is happened or not in a particular iteration.
	
	for (int i = 0; i < size; i++)		//To traverse all the elements in the Array.
	{
		flag = 0;	//Initially, 'flag' shall be '0'.

		for (int j = 0; j < (size - i - 1); j++)	//To compare the adjacent elements of the Array and Swap if required.
		{
			if (arr [j] > arr [j + 1])		//If the current element is greater than the next element, Swap them.
			{
				temp = arr [j];
				arr [j] = arr [j + 1];
				arr [j + 1] = temp;
				flag = 1;			//To signify that Swapping has happened.
			}
		}

		if (flag == 0)	//If the Swapping doesn't take place in any of the iteration, the Array is Sorted and the loop shall break.
			break;
	}

	return 1;
}
