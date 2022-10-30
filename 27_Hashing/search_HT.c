/*
Name         : Prabhat Kiran
Date         : 14th October 2022
Description  : Search a given Data in the Hash Table.
Sample Input : 0 → 0 | 1 → 1 | 2 → 2 | 3 → 3 | 4 → 4 and "4"
Sample Output: 4
*/

#include "hash.h"

/* Function to Search a particular Data in the Hash Table */

int search_HT (hash_t *arr, int data, int size)
{
	int pos = data % size;		//To get the Key where the Data is to be inserted.

	if (arr [pos].value == data)	//If the Data is found in the 'pos' directly; return the Key.
	{
		return pos;
	}
	else	//Otherwise, we need to search for the Data in the Chain of data having the same Key.
	{
		hash_t* temp = arr [pos].link;
		
		while (temp != NULL)	//The loop shall run till we reach the end of the Chain.
		{
			if (temp->value == data)	//If the Data is found, return the Key.
			{
				return pos;
			}
			else
				temp = temp->link;	//Update the 'temp' to point to the Next node.
		}
	}

	return DATA_NOT_FOUND;
}
