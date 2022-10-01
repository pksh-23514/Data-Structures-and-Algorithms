/*
Name         : Prabhat Kiran
Date         : 29th September 2022
Description  : Find the Middle Node of the SLL.
Sample Input : 1. 10 -> 20 -> 30 -> 40 -> 50
	       2. 10 -> 20 -> 40 -> 50
Cases :
1. List empty → Return LIST_EMPTY (in empty list node can’t be deleted).
2. List not empty →
	1. Odd number of Nodes
	2. Even number of Nodes
Sample Output: 1. 30
	       2. 40
*/

#include "sll.h"

/* Function to get the middle of the linked list*/

int find_mid (Slist *head, int *mid)
{
	if (head == NULL)		//If the LL is empty, the Searching Middle operation cannot be performed.
		return LIST_EMPTY;

	Slist* slow = head;		//To track the middle of the LL.
	Slist* fast = head;		//To track the end of the LL.

	while ((fast->link != NULL) && (fast->link->link != NULL))	//As per the possibiliy of odd or even number of nodes, these 2 cases can arise for loop termination.
	{
		slow = slow->link;		//Update the 'slow' to point to the next node.
		fast = fast->link->link;	//Update the 'fast' to point to the next to next node. 'fast' will move at twice the pace of 'slow'.
	}

	if (fast->link == NULL)			//If the number of nodes is odd, the node pointed by 'slow' is the middle of the LL.
	{
		*mid = slow->data;
	}
	else					//If the number of nodes is even, the node after the node pointed by 'slow' is the middle of the LL.
	{
		*mid = slow->link->data;
	}
	
	return SUCCESS;
}
