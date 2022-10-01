/*
Name         : Prabhat Kiran
Date         : 29th September 2022
Description  : Insert the specified Data before the Node containing a particular given Data.
Sample Input : head → 10 → 20 → 30 → 40 → 50, "40" and "45"
Cases :
1. List empty → Return LIST_EMPTY (in empty list node can’t be deleted).
2. List not empty →
	1. Given data present
	2. Given data not present
Sample Output: head → 10 → 20 → 30 → 45 → 40 → 50
*/

#include "sll.h"

int sl_insert_before (Slist **head, data_t g_data, data_t ndata)
{
	if (*head == NULL)		//If the LL is empty, the Insert operation cannot be performed.
		return LIST_EMPTY;

	Slist* new = (Slist*) malloc (sizeof (Slist));		//Dynamic memory allocation to create the Node.
	if (new == NULL)					//If the memory is not allocated, the Insertion operation cannot be performed.
		return FAILURE;
	
	new->data = ndata;		//Update the new Node data with the specified 'data'.

	if ((*head)->data == g_data)	//If the given 'g_data' matches with the First node data.
	{
		new->next = (*head);	//Update the new Node pointer to the node pointed by 'head'.
		(*head) = new;			//Update the 'head' to point to the new Node.
		return SUCCESS;
	}

	Slist* temp = *head;
	while ((temp->next != NULL) && (temp->next->data != g_data))	//Traverse the LL till we reach the node whose data matches with the given 'g_data'.
	{
		temp = temp->next;		//Update the 'temp' to point to the next node.
	}

	if (temp->next == NULL)			//If we reach the end of LL, that implies the data has not been found.
	{
		free (new);			//Free the memory allocated for the New node.
		return DATA_NOT_FOUND;
	}
	else
	{
		new->next = temp->next;		//Update the new Node pointer with the node after the matched node.
		temp->next = new;		//Update the matched node with the new Node.
		return SUCCESS;
	}
}
