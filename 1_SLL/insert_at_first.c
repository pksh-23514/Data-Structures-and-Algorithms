/*
Name         : Prabhat Kiran
Date         : 28th September 2022
Description  : Insert the First node of the SLL.
Sample Input : head → 20 → 30 → 40 → 50 → NULL and "10"
Cases:
1. List empty, data = 10: head = NULL , After inserting data into list, list contains 10 → NULL.
2. List not empty, data 10: 20 → 30 → 40 → NULL, After inserting 10 into list 10 → 20 → 30 → 40 → NULL.
Sample Output: head → 10 → 20 → 30 → 40 → 50 → NULL
*/

#include "sll.h"

int insert_at_first (Slist **head, data_t data)
{
	Slist* new = (Slist*) malloc (sizeof (Slist));		//Dynamic memory allocation to create the Node.
	if (new == NULL)		//If the memory is not allocated, the Insertion operation cannot be performed.
		return FAILURE;

	new->data = data;		//Update the new Node data with the specified 'data'.
	new->link = *head;		//Update the new Node pointer with the node pointed by 'head'.
	*head = new;			//Update the 'head' to point to the new Node.

	return SUCCESS;
}
