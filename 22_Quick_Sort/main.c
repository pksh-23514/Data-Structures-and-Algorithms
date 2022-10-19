/*
Name         : Prabhat Kiran
Date         : 15th October 2022
Description  : Implement Quick Sort technique to Sort the given Array.
*/

#include "main.h"

int main()
{
	int i; 
	int limit;	//To store the Size of the Array.
	
	/* Scanning the Size of the Array */
	printf("Enter the size of an array\n");
	scanf("%d", &limit);
	
	/* Declaring the Array with Size */
	int arr [limit];
	
	/* Reading the Array elements */
	printf("Enter the array elements\n");
	for (i = 0; i < limit; i++)
	{
		/* Scanning each Array element */
		scanf("%d", &arr [i]);
	}
	
	/* Calling the function to perform Quick Sort on the Array */
	quick_sort (arr, 0, limit - 1);		//'0' is the Lower index and 'limit'-1' is the Higher index of the given Array.
	
	/* Printing the Sorted Array */
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
		printf("%d ", arr [i]);
	}
	
	return 0;
}
