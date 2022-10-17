/*
Name         : Prabhat Kiran
Date         : 15th October 2022
Description  : Implement Insertion Sort technique to Sort the given Array.
*/

#include "main.h"

int main()
{
	int i;
	int limit;	//To store the Size of the Array.
	
	/* Scanning the Size of the Array */
	printf("Enter the size of an array\n");
	scanf("%d", &limit);
	
	/* Declaring the array with size */
	data_t arr [limit];
	
	printf("Enter the array elements\n");
	for (i = 0; i < limit; i++)
	{
		/* Scanning the array elements */
		scanf("%d", &arr [i]);
	}
	
	/* Calling the function to bubble sort */
	insertion (arr, limit);
	
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
