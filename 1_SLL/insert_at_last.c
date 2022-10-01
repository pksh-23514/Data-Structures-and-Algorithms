/*
Name         : Prabhat Kiran
Date         : 28th September 2022
Description  : Insert the Last node of the SLL.
Sample Input : head → 10 → 20 → 30 → 40 → NULL and "50"
Cases:
1. List empty → Return LIST_EMPTY (in empty list node can’t be deleted).
2. List not empty → Update the head with next node address, delete the first node.
Sample Output: head → 10 → 20 → 30 → 40 → 50 → NULL
*/

#include "sll.h"

int insert_at_last (Slist **head, data_t data)
{
	Slist* new = (Slist*) malloc (sizeof (Slist));		//Dynamic memory allocation to create the Node.
	if (new == NULL)		//If the memory is not allocated, the Insertion operation cannot be performed.
		return FAILURE;

	new->data = data;		//Update the new Node data with the specified 'data'.
	new->link = NULL;		//Update the new Node pointer with NULL as it will be the last Node of LL.

	if (*head == NULL)		//If the LL is empty, the new Node will be the First node of the LL.
	{
		*head = new;		//Update the 'head' to point to the new Node.
	}
	else
	{
		Slist* temp = *head;
		while (temp->link != NULL)	//Traverse to insert the new Node at the end of LL.
		{
			temp = temp->link;
		}
		temp->link = new;		//Update the Last node pointer to point to the new Node.
	}

	return SUCCESS;
}
