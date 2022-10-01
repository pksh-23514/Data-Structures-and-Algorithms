/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Delete the Last node of the DLL.
Sample Input : head → 10 ↔ 20 ↔ 30 ↔ 40 ↔ 50 ← tail
Cases :
List empty → Return LIST_EMPTY (in empty list node can’t be deleted).
List not empty → Update the previous node address in tail pointer, and update link of previous node and delete the last node.
Sample Output: head → 10 ↔ 20 ↔ 30 ↔ 40 ← tail
*/

#include "dll.h"

int dl_delete_last (Dlist **head, Dlist **tail)
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
		*tail = (*tail)->left;		//Update the 'tail' to the second last node of the LL.
		free ((*tail)->right);		//Free the last node.
		(*tail)->right = NULL;		//Update the 'right' of the second last node to NULL.
		return SUCCESS;
	}
}
