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
	/* Creating a new Node */
	Slist *new = malloc (sizeof(Slist));

	/* Check whether the new Node is created or not */
	if (new == NULL)
	{
		return FAILURE;
	}

	/* Update the members of the Node */
	new->data = data;
	new->next = NULL;

	/* Check for empty LL */
	if (*head == NULL)
	{
		/* If LL is empty, then create the first node */
		*head = new;
		return SUCCESS;
	}
	else
	{
		/* If LL is not empty, then store the value i.e the link in the 'temp' variable */
		Slist *temp = *head;

		/* Stroring that new link in the 'head' i.e. inserting the element at first */
		*head = new;

		/* Creating the link to next data */
		new->next = temp;
	}
	
	return SUCCESS;
}
