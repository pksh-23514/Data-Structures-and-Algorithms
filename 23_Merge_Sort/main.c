/*
Name         : Prabhat Kiran
Date         : 14th October 2022
Description  : WAP to Sort the given Array using Merge Sort Algorithm.
*/

#include "main.h"

int main()
{
	int i, limit;
	
	/* Scanning the Size of the Array */
	printf("Enter the size of an array\n");
	scanf("%d", &limit);
	
	/* Declaring the Array with the read Size */
	int arr [limit];
	
	printf("Enter the array elements\n");
	for (i = 0; i < limit; i++)
	{
		/* Scanning the Array elements one by one */
		scanf("%d", &arr [i]);
	}

	/* Calling the function to perform Merge Sort Operation */
	merge_sort (arr, limit);
	
	/* Printing the Sorted Array */
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
		printf("%d ", arr[i]);
	}
	printf ("\n");
	
	return 0;
}
