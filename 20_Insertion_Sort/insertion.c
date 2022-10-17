/*
Name         : Prabhat Kiran
Date         : 15th October 2022
Description  : Insertion Sort Operation to sort the given Array.
Sample Input : 5 4 3 2 1
Sample Output: 1 2 3 4 5
*/

#include "main.h"

data_t insertion (data_t *arr, data_t size)
{
	data_t key;

	for (int i = 1; i < size; i++)	//The Key selection starts with the second element of the Array and goes till the end of the Array.
	{
		key = arr [i];		//Update the 'key' as the second element of the Array.
		int j;
		for (j = (i - 1); ((j >=0) && (arr [j] > key)); j--)	//Shift elements that are on the Left of the 'key' and greater than it; to the Right by '1' position.
		{
			arr [j + 1] = arr [j];				//Shifting the elements to the Right by copying them to the next Index.
		}
		
		arr [j + 1] = key;	//The Index where the loop terminates; an empty slot is created at that Index and the 'key' is stored here.
	}

	return 1;
}
