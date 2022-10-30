/*
Name         : Prabhat Kiran
Date         : 20th October 2022
Description  : Implement Heap Sort technique to Sort the given Array.
*/

#include "main.h"

int main()
{
	int i, limit;	//To store the Size of the Array.
	
	/* Scanning the Size of the Array */
	printf("Enter the size of an array\n");
	scanf("%d", &limit);
	
	/* Declaring the Array with Size */
	int heap [limit];
	
	/*Reading the Array elements */
	printf("Enter the array elements\n");
	for (i = 0; i < limit; i++)
	{
		/* Scanning each Array element */
		scanf("%d", &heap [i]);
	}
	
	/* Calling the function to perform Heap Sort on the Array */
	heap_sort (heap, limit);
	
	/* Printing the Sorted Array */
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
		printf("%d ", heap [i]);
	}
	
	return 0;
}
