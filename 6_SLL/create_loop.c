/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Create a Loop from the given SLL.
Sample Input : head → 10 → 20 → 30 → 40 → 50 → NULL and "20"
1. List empty → Return LIST_EMPTY (in empty list Loop can’t be created).
2. List not empty →
	1. Given data present
	2. Given data not present
Sample Output: head → 10 → 20 → 23 → 30 →40 → 50 → 20 (Node-2).
*/

#include "sll.h"

/* Function to create the loop */

int create_loop (Slist **head, data_t data)
{
	if (*head == NULL)						//If the LL is empty, the Creation of Loop is not possible.
		return LIST_EMPTY;

	if (((*head)->link == NULL) && ((*head)->data == data))		//If the LL has only one node, link the node to itself to create the Loop.
	{
		(*head)->link = *head;
	}

	Slist* temp = *head;	//To track the nodes of the LL.
	Slist* target = NULL;	//To track the node to which the Last node needs to be connected.

	while (temp->link != NULL)		//Traverse till we reach the Last node of LL.
	{
		if (temp->link->data == data)	//If the Node data matches with the 'data', store it in the 'target'.
		{
			target = temp->link;
		}
		temp = temp->link;		//Update the 'temp' to point to the next node.
	}

	if (target == NULL)			//If 'target' remains unchanged, the 'data' is not present in the LL.
		return DATA_NOT_FOUND;
	else
	{
		temp->link = target;		//Otherwise, link the Last node of the LL to the 'target'.
		return SUCCESS;
	}
}
