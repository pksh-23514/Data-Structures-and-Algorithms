/*
Name         : Prabhat Kiran
Date         : 28th September 2022
Description  : Delete the First node of the SLL.
Sample Input : head → 10 → 20 → 30 → 40 → 50 → NULL
Cases :
1. List empty → Return LIST_EMPTY (in empty list node can’t be deleted).
2. List not empty → Update the head with next node address, delete the first node.
Sample Output: head → 20 → 30 → 40 → 50 → NULL
*/

#include "sll.h"

int sl_delete_first (Slist **head)
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
		*head = temp->link;		//Update the 'head' to the second node of the LL.
		free (temp);			//Free the first node.
	}

	return SUCCESS;
}
