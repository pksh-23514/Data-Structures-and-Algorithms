/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Reverse the given SLL using Iterative method.
Sample Input : 50 → 40 → 30 → 20 → 10
Cases :
1. List Empty
2. List Non-Empty
Sample Output: 10 → 20 → 30 → 40 → 50
*/

#include "sll.h"

/* Function to reverse the given SLL using Iteration */

int reverse_iter(Slist **head)
{
	if (*head == NULL)		//If the LL is empty, the Reversing operation cannot be performed.
		return LIST_EMPTY;

	if ((*head)->link == NULL)	//If the LL has only one node, the Reversing operation will yield the same LL.
		return SUCCESS;

	Slist* temp = *head;		//To track the Current node.
	Slist* prev = NULL;		//To track the Previous node.
	Slist* next;			//To track the Next node.

	while (temp != NULL)		//Traverse till the end of the LL.
	{
		next = temp->link;	//Update the 'next' to point to the node after the Current node.
		temp->link = prev;	//Link the Current node to the Previous node.
		prev = temp;		//Update the 'previous' to point to the Current node.
		temp = next;		//Update the 'temp' to point to the Next node.
	}

	*head = prev;			//After reversing the whole LL, update the 'head' to point to the Last node of the LL.
	return SUCCESS;
}
