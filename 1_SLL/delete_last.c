/*
Name         : Prabhat Kiran
Date         : 28th September 2022
Description  : Delete the Last node of the SLL.
Sample Input : head → 10 → 20 → 30 → 40 → 50 → NULL
Cases :
1. List empty → Return LIST_EMPTY (in empty list node can’t be deleted).
2. List not empty → Traverse to the last node, update the previous node address and delete the last node.
Sample Output: head → 10 → 20 → 30 → 40 → NULL
*/

#include "sll.h"

int sl_delete_last (Slist **head)
{
	if (*head == NULL)			//If the LL is empty, the Delete operation cannot be performed.
		return FAILURE;

	if ((*head)->link == NULL)		//If the LL has only one node, we can delete it and update the 'head' as NULL.
	{
		free (*head);			//Free the first node.
		*head = NULL;
	}
	else
	{
		Slist* temp = *head;
		while (temp->link->link != NULL)	//Traverse till the second Last node of the LL.
		{
			temp = temp->link;		//Update the Node pointer.
		}

		free (temp->link);			//Free the last node.
		temp->link = NULL;			//Update the 2nd last node pointer to NULL.
	}

	return SUCCESS;
}
