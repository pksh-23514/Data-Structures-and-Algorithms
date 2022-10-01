/*
Name         : Prabhat Kiran
Date         : 28th September 2022
Description  : Delete the complete SLL.
Sample Input : head → 10 → 20 → 30 → 40 → 50 → NULL
Cases :
1. List empty → Return LIST_EMPTY (in empty list node can’t be deleted).
2. List not empty → Delete all nodes one by one.
Sample Output: head → NULL
*/

#include "sll.h"

int sl_delete_list(Slist **head)
{
	if (*head == NULL)		//If the LL is empty, the Delete operation cannot be performed.
		return FAILURE;
	
	Slist* temp = *head;
	while (temp != NULL)		//Traverse till the end of the LL, deleting nodes one by one on the way.
	{
		*head = temp->link;	//Update the 'head' to the node after the one getting deleted.
		free (temp);		//Free the current node.
		temp = *head;		//Update the 'temp' to the next node.
	}

	return SUCCESS;
}
