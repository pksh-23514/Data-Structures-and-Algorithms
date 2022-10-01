/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Insert the elements in the SLL in a Sorted fashion.
Sample Input : head → 10 → 20 → 30 → 40 → 50 and "45"
Cases:
1. List empty, data = 10: head = NULL , After inserting data into list, list contains 10 → NULL.
2. List not empty, data 45: head → 10 → 20 → 30 → 40 → 50, After inserting 45 into list head → 10 → 20 → 30 → 40 → 45 → 50.
Sample Output: head → 10 → 20 → 30 → 40 → 45 → 50
*/

#include "sll.h"

/* Function to Insert the number in a Sorted SLL */

int insert_sorted (Slist **head, data_t data)
{
	Slist* new = (Slist*) malloc (sizeof (Slist));	//Dynamic memory allocation to create the Node.
	if (new == NULL)				//If the memory is not allocated, the Insertion operation cannot be performed.
		return FAILURE;

	new->data = data;

	if ((*head == NULL) || ((*head)->data > data))	//If the LL is empty or if the First node Data is greater than the given 'data', the New node shall be inserted as the First node.
	{
		new->link = *head;	//Update the 'link' of New node to point to the node pointed by 'head'.
		*head = new;		//Update the 'head' to point to 'new'.
		return SUCCESS;
	}

	Slist* temp = *head;
	while ((temp->link != NULL) && (temp->link->data < data))	//Traverse the LL till we reach the node whose data is greater than the given 'data'.
	{
		temp = temp->link;	//Update the 'temp' to point to the next node.
	}

	new->link = temp->link;		//Update the 'link' of New node to point to the node after the Matched node.
	temp->link = new;		//Update the 'link' of the Matched node to point to the New node.
	return SUCCESS;
}
