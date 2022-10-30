/*
Name         : Prabhat Kiran
Date         : 14th October 2022
Description  : Delete all the Data in the Hash Table.
Sample Input : 0 → 0 | 1 → 1 | 2 → 2 | 3 → 3 | 4 → 4
Sample Output: 0 → -1 | 1 → -1 | 2 → -1 | 3 → -1 | 4 → -1
*/

#include "hash.h"

/* Function to Delete the entire Hash Table */

int destroy_HT (hash_t *arr, int size)
{
	int flag = 0;	//To check if the Data in the Hash Table is getting Deleted or not.

	for (int i = 0; i < size; i++)		//The loop shall run till all the Keys in the Hash Table are traversed.
	{
		if (arr [i].value != -1)	//If the Key is not empty; update the Data in the Key as '-1'.
		{
			arr [i].value = -1;
			flag = 1;		//To signify the Data is Deleted successfully.
		}

		if (arr [i].link != NULL)	//If the Key has a Chain linked to it; we need to individually Delete the Nodes one at a time.
		{
			hash_t* temp = arr [i].link;

			while (temp != NULL)	//The loop shall run till we reach the end of the Chain.
			{
				arr [i].link = temp->link;	//To store the Address of the Next node.
				free (temp);			//Free the Current node.
				temp = arr [i].link;		//Update the 'temp' to point to the Next node.
			}
			flag = 1;		//To signify the Data is Deleted successfully.
		}
	}

	if (flag == 1)
		return SUCCESS;
	else					//If the Hash Table is empty; Deletion Operation cannot be performed.
		return FAILURE;
}
