/*
Name         : Prabhat Kiran
Date         : 14th October 2022
Description  : Insert a given Data into the Hash Table.
Sample Input : 0 → 0 | 1 → 1 | 2 → 2 | 3 → 3 | 4 → -1 and "4"
Sample Output: 0 → 0 | 1 → 1 | 2 → 2 | 3 → 3 | 4 → 4
*/

#include "hash.h"

/* Function to Insert a particular Data in the Hash Table */

int insert_HT (hash_t *arr, int element, int size)
{
	int pos = element % size;	//To get the Key where the Data is to be inserted.

	if (arr [pos].value == -1)	//If the particular 'index' in the Table is empty, insert the given 'element' at that 'index'.
	{
		arr [pos].value = element;
	}
	else	//If the particular 'index' in the Table is not empty, we need to create a Chain (SLL) and perform Insert at Last operation.
	{
		hash_t* temp = &arr [pos];	//Store the particular 'index' column's address in the 'temp' pointer.

		while (temp->link != NULL)	//Traverse till we reach the end of the Chain.
		{
			temp = temp->link;	//Update 'temp' to point to the next Node.
		}

		temp->link = (hash_t*) malloc (sizeof (hash_t));	//Dynamic memory allocation for the new Node to be linked to the Chain.
		if (temp->link == NULL)		//Error Handling.
			return FAILURE;

		temp->link->index = pos;	//Update the new Node 'index' as the particular column 'index'.
		temp->link->value = element;	//Update the new Node 'value' as the given 'element'.
		temp->link->link = NULL;	//Update the new Node 'link' as NULL to signify the end of the Chain.
	}

	return SUCCESS;
}
