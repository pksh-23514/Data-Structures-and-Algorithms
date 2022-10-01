/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Insert the Last node of the DLL.
Sample Input : head → 10 ↔ 20 ↔ 30 ↔ 40 ← tail and "50"
Cases :
1. List empty, data = 10: head = NULL, tail = NULL. After inserting data into list, head → 10 ← tail.
2. List not empty, data 40: head → 10 ↔ 20 ↔ 30 ← tail. After inserting 40 into list, head → 10 ↔ 20 ↔ 30 ↔ 40 ← tail.
Sample Output: head → 10 ↔ 20 ↔ 30 ↔ 40 ↔ 50 ← tail
*/

#include "dll.h"

int dl_insert_last (Dlist **head, Dlist **tail, int data)
{
	/* Allocating the memory for new node */
	Dlist *new = malloc(sizeof (Dlist));

	/* If the node is not created, then return failure */
	if (!new)
	{
		return FAILURE;
	}

	new->data = data;
	new->left = NULL;
	new->right = NULL;

	/* If the list is empty, then insert the node as First node */
	if (!*head && !*tail)
	{
		*head = *tail = new;
		return SUCCESS;
	}

	new->left = *tail;
	(*tail)->right = new;
	*tail = new;

	return SUCCESS;
}
