/*
Name         : Prabhat Kiran
Date         : 15th October 2022
Description  : To search the Key using Binary Search.
Sample Input : 1 2 3 4 5 and "3"
Sample Output: key element 3  is found at 3rd position
*/

#include "main.h"

/* Function for binary search using iterations */

data_t binarySearch_iterative (data_t *arr, data_t size, data_t key)
{
	data_t low = 0, high = size - 1, mid;	//Initialize the lower, higher and middle limits for the given Array.

	/* We divide the array through the middle and compare the Middle element of the Sorted array with the Key. If it is equal, we return that position.
	   If the Key is less than the Middle element, we search in the Left Half of the Sorted array. Otherwise, we search in the Right Half of the Sorted array.
	*/
	while (low <= high)			//The loop shall run till we get the Key or the 'low' and 'high' get the same Index value.
	{
		mid = low + (high - low) / 2;	//Find the middle Index of the Array.

		if (arr [mid] == key)		//If the Middle element is equal to the Key, return the middle Index.
		{
			return mid;
		}
		else if (arr [mid] > key)	//If the Key is less than the Middle element, update the 'high' with Index value 1 less than 'mid'.
		{
			high = mid - 1;
		}
		else				//If the Key is greater than the Middle element, update the 'low' with Index value 1 more than 'mid'.
		{
			low = mid + 1;
		}
	}

	return DATA_NOT_FOUND;			//If the loop terminates, then the Key is not present in the Array.
}
