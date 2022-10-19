/*
Name         : Prabhat Kiran
Date         : 15th October 2022
Description  : Place the Pivot element at it's correct position in the Array; all smaller elements to the Left and greater elements to the Right of the Pivot in the Array.
Sample Input : {7, 4, 3, 1, 9}, {0} and {3}
Sample Output: {1, 4, 3, 7, 9}
*/

#include "main.h"

/* Function to Partition the Array */

void swap (int* num1, int* num2)	//Helper function to Swap the 2 given elements.
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int partition (int *arr, int first, int last)
{
	int pivot = arr [first];	//Update the Pivot element as the Lower index of the Array received in the function arguments.

	/* Mark 2 indices to start from the Opposite ends of the Array and moving towards each other. */
	int i = first - 1;
	int j = last + 1;

	while (1)			//The loop shall run till the Lower index becomes equal or crosses the Higher index.
	{
		do			//To find a value on the Left side of the Pivot and having a value greater than the Pivot element.
		{
			i += 1;
		} while (arr [i] < pivot);

		do			//To find a value on the Right side of the Pivot and having a value smaller than the Pivot element.
		{
			j -= 1;
		} while (arr [j] > pivot);
		
		if (i >= j)		//Return the 'j' value to the Calling function as the Partition Index on crossover.
			return j;

		swap (&arr [i], &arr [j]);	//Otherwise, Swap the Array elements of the position 'i' and 'j'found from the loops, to position them correctly in the Array.
	}
}
