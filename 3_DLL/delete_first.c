/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Delete the First node of the DLL.
Sample Input : head → 40 ↔ 10 ↔ 20 ↔ 30 ← tail
Cases :
1. List empty → Return LIST_EMPTY (in empty list node can’t be deleted).
2. List not empty → Update the head with next node address, delete the first node.
Sample Output: head → 10 ↔ 20 ↔ 30 ← tail
*/

#include "dll.h"

int dl_delete_first (Dlist **head, Dlist **tail)
{
	if (*head == NULL)		//If the LL is empty, the Delete operation cannot be performed.
		return FAILURE;

	if (((*head)->left == NULL) && ((*head)->right == NULL))	//If the LL has only one node, we can delete it and update the 'head' & 'tail' as NULL.
	{
		free (*head);			//Free the first node.
		*head = *tail = NULL;	
		return SUCCESS;
	}
	else
	{
		*head = (*head)->right;		//Update the 'head' to the second node of the LL.
		free ((*head)->left);		//Free the first node.
		(*head)->left = NULL;		//Update the 'left' pointed of the second node to NULL.
		return SUCCESS;
	}
}
