/*
Name         : Prabhat Kiran
Date         : 14th October 2022
Description  : Perform the Merge Sort Operation.
Sample Input : {9, 3, 4, 1, 7} and 5
Sample Output: {1, 3, 4, 7, 9}
*/

#include "main.h"

int merge_sort (int *array, int narray)
{
	if (narray == 1)		//If we reach the stage where our split Array has only 1 element, the recursive function call shall start returning.
		return SUCCESS;

	int mid = narray / 2;		//Find the middle position of the split Array received.

	int* arrL = (int*) malloc (mid * sizeof (int));			//Dynamic memory allocation for the Left Sub-array.
	if (arrL == NULL)						//Error Handling.
		return FAILURE;

	for (int i = 0; i < mid; i++)		//Copy the first Half of the Array received in the Left Sub-array.
	{
		arrL [i] = array [i];
	}

	int* arrR = (int*) malloc ((narray - mid) * sizeof (int));	//Dynamic memory allocation for the Right Sub-array.
	if (arrR == NULL)						//Error Handling.
		return FAILURE;

	for (int i = mid; i < narray; i++)	//Copy the seconf Half of the Array received in the Right Sub-array.
	{
		arrR [i - mid] = array [i];	//'arrR' shall start the index from '0'. So; (i - mid) is taken as the index.
	}

	merge_sort (arrL, mid);					//Recursive function call for the Left Sub-Array.

	merge_sort (arrR, (narray - mid));			//Recursive function call for the Right Sub-array.

	merge (array, narray, arrL, mid, arrR, (narray - mid));	//When both the recursive function calls return; combine the Sub-arrays by merging them in a sorted fashion to form the Main array.

	free (arrL);	//Free the Left Sub-Array.
	free (arrR);	//Free the Right Sub-Array.

	return SUCCESS;
}
