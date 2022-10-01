/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Insert the specified Data after the Node containing a particular given Data.
Sample Input : head → 10 ↔ 20 ↔ 30 ↔ 40 ← tail, "40" and "50"
Cases :
1. List empty → Return LIST_EMPTY (in empty list node can’t be deleted).
2. List not empty →
	1. Given data present
	2. Given data not present
Sample Output: head → 10 ↔ 20 ↔ 30 ↔ 40 ↔ 50 ← tail
*/

#include "dll.h"

int dl_insert_after (Dlist **head, Dlist **tail, int gdata, int ndata)
{
	if (*head == NULL)		//If the LL is empty, the Insert operation cannot be performed.
		return LIST_EMPTY;

	Dlist* new = (Dlist*) malloc (sizeof (Dlist));	//Dynamic memory allocation to create the Node.
	if (new == NULL)				//If the memory is not allocated, the Insertion operation cannot be performed.
		return FAILURE;

	if ((*tail)->data == gdata)		//If the 'tail' node data matches with the 'gdata', update the New node as the Last node.
	{
		new->data = ndata;
		new->right = NULL;		//Since the New node is the Last node, 'right' shall point to NULL.
		new->left = *tail;		//Since the New node is the Last node, 'left' shall point to the node pointed by 'tail'.
		(*tail)->right = new;		//The node pointed by 'tail' shall point to 'new'.
		*tail = new;			//The 'tail' shall point to 'new'.
		return SUCCESS;
	}

	Dlist* temp = *head;
	while (temp != NULL)			//Traverse till we reach the end of LL.
	{
		if (temp->data == gdata)	//If the 'gdata' matches with the 'temp' node data; we insert the New node after that node.
		{
			new->data = ndata;		
			new->left = temp;		//Update the 'left' of New node to point to the Matched node.
			new->right = temp->right;	//Update the 'right' of New node to point to the Next node after the Matched node.
			(temp->right)->left = new;	//Update the 'left' of the Next node to point to 'new'.
			temp->right = new;		//Update the 'right' of the Matched node to point to 'new'.
			return SUCCESS;
		}
		else
		{
			temp = temp->right;		//Update the 'temp' to point to the next node.
		}
	}

	if (temp == NULL)		//If we reach the end of LL, that implies the data has not been found.
	{
		free (new);		//Free the memory allocated to 'new'.
		return DATA_NOT_FOUND;
	}
}
