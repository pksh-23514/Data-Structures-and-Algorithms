/*
Name         : Prabhat Kiran
Date         : 29th September 2022
Description  : Delete a particular Node having the specified Data.
Sample Input : head → 10 → 20 → 30 → 40 → 50 and "40"
Cases :
1. List empty → Return LIST_EMPTY (in empty list node can’t be deleted).
2. List not empty →
	1. Given data present
	2. Given data not present
Sample Output: head → 10 → 20 → 30 → 50
*/

#include "sll.h"

int sl_delete_element (Slist **head, data_t data)
{
	if (*head == NULL)				//If the LL is empty, the Delete operation cannot be performed.
		return LIST_EMPTY;

	Slist* temp = *head;
	if ((*head)->data == data)			//If the data of first node of LL matches with the specified 'data', we can delete it and update the 'head' as NULL.
	{
		*head = temp->next;			//Update the 'head' to the second node of the LL.
		free (temp);				//Free the first node.
		return SUCCESS;
	}

	while (temp->next != NULL)			//Traverse till the end of the LL.
	{
		if (temp->next->data == data)		//If the specified 'data' matches with the node data, update the links.
		{
			Slist* del = temp->next;	//Update the 'del' with the matched node.
			temp->next = del->next;		//Update the link of the previous node with the node after the matched node.
			free (del);			//Free the matched node.
			return SUCCESS;
		}
		else
		{
			temp = temp->next;		//Otherwise, update the 'temp' to next node.
		}
	}

	return DATA_NOT_FOUND;
}
