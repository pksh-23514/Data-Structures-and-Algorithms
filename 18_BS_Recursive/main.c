/*
Name         : Prabhat Kiran
Date         : 15th October 2022
Description  : Implement Binary Search using Recursion technique.
*/

#include "main.h"

int main()
{
	/* Declaring the variables */
	data_t option, res, key, size;
	
	/* Reading the Number of elements from the User */
	printf("Enter the size of an array\n");
	scanf("%d", &size);
	
	/* Declaring the Array of size read */
	data_t arr[size];
	
	/* Sorting the elements for Binary Search */
	printf("Enter the elements of an array\n");
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	/* Reading the Key to be searched in the Array */
	printf("Enter the key to search\n");
	scanf("%d", &key);
	
	/* Calling the function to Search the key */
	if ((res = binarySearch_recursive (arr, size, key, 0, size - 1)) == DATA_NOT_FOUND)
	{
		printf("INFO : Key not found\n");
	}
	else
	{
		printf("INFO : Key found at the position %d\n", res);
	}
	
	return 0;
}
