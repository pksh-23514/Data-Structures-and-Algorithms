/*
Name         : Prabhat Kiran
Date         : 15th October 2022
Description  : Perform the Quick Sort Operation.
Sample Input : {9, 3, 4, 1, 7}, {0} and {4}
Sample Output: {1, 3, 4, 7, 9}
*/

#include "main.h"

int quick_sort (int *arr, int first, int last)
{
	if (first >= last)	//If at any given point of Recursive call, the 'first' index points at a position same as or greater than the 'last' index; the function shall start returning.
		return 1;
	else			//Otherwise, keep dividing the Array by creating a Partition and recursively calling the Quick sort function to sort the Left & Right sub-Array.
	{
		int pi = partition (arr, first, last);	//To collect the Partition Index returned by the Partition function call.

		quick_sort (arr, first, pi);		//To sort the Left sub-Array.

		quick_sort (arr, (pi + 1), last);	//To sort the Right sub-Array.
	}
}
