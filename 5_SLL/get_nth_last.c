/*
Name         : Prabhat Kiran
Date         : 29th September 2022
Description  : Get the Data of the Nth node from the end of the SLL.
Sample Input : 10 -> 20 -> 30 -> 40 -> 50 and "2"
Cases :
1. List empty → Return LIST_EMPTY (in empty list node can’t be deleted).
2. List not empty →
	1. Given ‘n’th position present
	2. Given ‘n’th position not present
Sample Output: 40 (From the last, second node conatins the data 40)
*/

#include "sll.h"

/* Function to get the nth node from the last of a linked list*/

int find_nth_last (Slist *head, int pos, int *data)
{
	if (head == NULL)		//If the LL is empty, the Searching Nth operation cannot be performed.
		return LIST_EMPTY;

	if (pos < 1)			//If the value of specified Position is less than '1', the operation cannot be performed as that is an Invalid node.
		return FAILURE;

	Slist* slow = head;		//To track the Nth node from the end.
	Slist* fast = head;		//To track the end of the LL.

	while (fast != NULL)		//Traverse till the end of the LL.
	{
		if (pos > 0)		//To implement a gap of 'N' nodes between the 'slow' and 'fast' pointers.
		{
			fast = fast->link;	//Update the 'fast' to point to the next node.
			pos--;
		}
		else	//If the gap between 'slow' and 'fast' is 'N'; then start moving both the 'slow' and 'fast' at the same pace.
		{
			fast = fast->link;	//Update the 'fast' to point to the next node.
			slow = slow->link;	//Update the 'slow' to point to the next node.
		}
	}

	if (pos == 0)	//If 'pos' becomes '0'; 'slow' is pointing to the Nth node from the end of LL.
	{
		*data = slow->data;		//Update the 'data' with that node Data.
		return SUCCESS;
	}
	else		//If we reach the end of the LL without 'pos' becoming '0'; the Nth position from the end doesn't exists.
		return FAILURE;
}
