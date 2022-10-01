/*
Name         : Prabhat Kiran
Date         : 29th September 2022
Description  : Insert the specified Data at Nth position of the SLL.
Sample Input : head → 10 → 20 → 30 → 40 → 50, "3" and "23"
Cases :
1. List empty → Return LIST_EMPTY (in empty list node can’t be deleted).
2. List not empty →
	1. Given ‘n’th position present
	2. Given ‘n’th position not present
Sample Output: head → 10 → 20 → 23 → 30 →40 → 50
*/

#include "sll.h"

int sl_insert_nth (Slist **head, data_t data, data_t n)
{
	if ((*head == NULL) && (n != 1))	//If the LL is empty, the Insert operation cannot be performed.
		return LIST_EMPTY;

	if (n < 1)				//If the position specified is less than '1', the poistion is not present in the LL.
		return POSITION_NOT_FOUND;

	Slist* new = (Slist*) malloc (sizeof (Slist));		//Dynamic memory allocation to create the Node.
	if (new == NULL)					//If the memory is not allocated, the Insertion operation cannot be performed.
		return FAILURE;

	new->data = data;		//Update the new Node data with the specified 'data'.
	if (n == 1)			//If the specified position is '1', the new Node shall be inserted at the begin of the LL.
	{
		new->next = *head;	//Update the new Node pointer to the node pointed by 'head'.
		*head = new;		//Update the 'head' to point to the new Node.
		return SUCCESS;
	}

	Slist* temp = *head;		//To keep track of the Current node.
	Slist* prev = NULL;		//To keep track of the Previous node.
	int count = 1;			//The LL is indexed starting with '1'.

	while ((temp != NULL) && (count < n))	//Traverse the LL till you reach the Nth node or the end of LL.
	{
		prev = temp;			//Update the previous node as you traverse.
		temp = temp->next;		//Update the 'temp' to point to the next node.
		count++;			//Update the 'count' value as you traverse.
	}

	if ((temp == NULL) && (count != n))	//If we reach the end of LL and 'count' doesn't match the value of 'n'; that implies the position has not been found.
	{
		free (new);			//Free the memory allocated for the New node.
		return POSITION_NOT_FOUND;
	}
	else
	{
		prev->next = new;		//Update the previous node to point to the New node.
		new->next = temp;		//Update the New node pointer to point to the previous Nth node.
		return SUCCESS;
	}
}
