/*
Name         : Prabhat Kiran
Date         : 15th October 2022
Description  : To search the Key using Binary Search.
Sample Input : 1 2 3 4 5 and "3"
Sample Output: key element 3  is found at 3rd position
*/

#include "main.h"

/* Function for binary search using recursions */

#if 1
data_t binarySearch_recursive (data_t *arr, data_t size, data_t key, data_t first, data_t last)
{
	data_t mid = first + (last - first) / 2;	//Initialize the 'middle' as Middle index for the given Array.

	if (size == 1)			//If the size of the Array reaches '1', it signifies the search has ended and the Key is not present in the Array.
	{
		return DATA_NOT_FOUND;
	}
	else if (arr [mid] == key)	//If the Middle element is equal to the Key, return the middle Index.
	{
		return mid;
	}
	else if (arr [mid] < key)	//If the Key is less than the Middle element, update the 'high' with Index value 1 less than 'mid', 'size' divided by 2 and recursively call the function.
	{
		return (binarySearch_recursive (arr, (size / 2), key, (mid + 1), last));
	}
	else if (arr [mid] > key)	//If the Key is greater than the Middle element, update the 'low' with Index value 1 more than 'mid', 'size' divided by 2 and recursively call the function.
	{
		return (binarySearch_recursive (arr, (size / 2), key, first, (mid - 1)));
	}
}
#endif

#if 0
data_t binarySearch_recursive (data_t *arr, data_t size, data_t key, data_t first, data_t last)
{
	data_t mid = first + (last - first) / 2;	//Initialize the 'middle' as Middle index for the given Array.

	if (first > last)		//If the 'low' and 'high' get the same Index value, the search has ended and the Key is not present in the Array.
	{
		return DATA_NOT_FOUND;
	}
	else if (arr [mid] == key)	//If the Middle element is equal to the Key, return the middle Index.
	{
		return mid;
	}
	else if (arr [mid] < key)	//If the Key is less than the Middle element, update the 'high' with Index value 1 less than 'mid', 'size' divided by 2 and recursively call the function.
	{
		return (binarySearch_recursive (arr, (size / 2), key, (mid + 1), last));
	}
	else if (arr [mid] > key)	//If the Key is greater than the Middle element, update the 'low' with Index value 1 more than 'mid', 'size' divided by 2 and recursively call the function.
	{
		return (binarySearch_recursive (arr, (size / 2), key, first, (mid - 1)));
	}
}
#endif
