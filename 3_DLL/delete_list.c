/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Delete the complete DLL.
Cases :
List empty → Return LIST_EMPTY (in empty list node can’t be deleted).
List not empty → Delete all nodes one by one from head or tail.
Sample Input : head → 10 ↔ 20 ↔ 30 ← tail
Sample Output: head → NULL ← tail
*/

#include "dll.h"

int dl_delete_list (Dlist **head, Dlist **tail)
{
	if (*head == NULL)			//If the LL is empty, the Delete operation cannot be performed.
		return FAILURE;

	while ((*head)->right != NULL)		//Traverse till the Last node of the LL, deleting nodes one by one on the way.
	{
		*head = (*head)->right;		//Update 'head' to point to Next node.
		free ((*head)->left);		//Free the Previous node.
		(*head)->left = NULL;
	}

	free (*tail);				//Free the Last node.
	*head = *tail = NULL;			//Update the 'head' and 'tail' to NULL.
	return SUCCESS;
}
