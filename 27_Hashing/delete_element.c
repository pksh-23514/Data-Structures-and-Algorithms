/*
Name         : Prabhat Kiran
Date         : 14th October 2022
Description  : Delete a given Data from the Hash Table.
Sample Input : 0 → 0 | 1 → 1 | 2 → 2 | 3 → 3 | 4 → 4 and "4"
Sample Output: 0 → 0 | 1 → 1 | 2 → 2 | 3 → 3 | 4 → -1
*/

#include "hash.h"

/* Function to Delete a particular Data from the Hash Table */

int delete_element (hash_t *arr, int data, int size)
{
	int pos = data % size;	//To get the Key where the Data is present.

	if (arr [pos].value == data)		//If the Data is found in the 'pos' directly, we need to check if it has a link to the Chain of data having the same Key.
	{
		if (arr [pos].link == NULL)	//If the link is NULL; no Chain present and the 'pos' can be directly made empty.
		{
			arr [pos]. value = -1;
		}
		else	//If the Chain is present, the immediate (first) Node data and link shall be updated to the 'pos' of the Hash Table.
		{
			hash_t* temp = arr [pos].link;	//To delete the immediate Node in the Chain after updating it's values.
			arr [pos].value = temp->value;	//Value of the Node copied in the 'pos'.
			arr [pos].link = temp->link;	//Link to the Next node copied in the 'pos'.
			free (temp);			//The immediate Node in the Chain is removed without affecting the other Nodes in the Chain.
		}

		return SUCCESS;
	}
	else	//If the Data is not present in the 'pos' directly; we need to search for the Data in the Chain of data having the same Key.
	{
		hash_t* temp = arr [pos].link;	//To store the Current Node.
		hash_t* prev = &arr [pos];	//To store the Previous Node.

		while (temp != NULL)	//The loop shall run till we reach the end of the Chain.
		{
			if (temp->value == data)	//If the Data of the Current node matches with the given Data; create the link from the Previous node to the Next node and delete the Current node.
			{
				prev->link = temp->link;
				free (temp);
				return SUCCESS;
			}
			else	//Otherwise, update the 'prev' to Current node and 'temp' to point to the Next node.
			{
				prev = temp;
				temp = temp->link;
			}
		}

		return DATA_NOT_FOUND;	//If the loop terminates normally; the Data is not present in the Hash Table and hence the Delete operation cannot be performed.
	}
}
