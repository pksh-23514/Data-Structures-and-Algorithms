/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Insert the specified Data before the Node containing a particular given Data.
Sample Input : head → 10 ↔ 20 ↔ 30 ↔ 50 ← tail, "50" and "40"
Cases :
1. List empty → Return LIST_EMPTY (in empty list node can’t be deleted).
2. List not empty →
	1. Given data present
	2. Given data not present
Sample Output: head → 10 ↔ 20 ↔ 30 ↔ 40 ↔ 50 ← tail
*/

#include "dll.h"

int dl_insert_before (Dlist **head, Dlist **tail, int gdata, int ndata)
{
	if (*head == NULL)			//If the LL is empty, the Insert operation cannot be performed.
		return LIST_EMPTY;

	Dlist* new = (Dlist*) malloc (sizeof (Dlist));	//Dynamic memory allocation to create the Node.
	if (new == NULL)				//If the memory is not allocated, the Insertion operation cannot be performed.
		return FAILURE;

	if ((*head)->data == gdata)		//If the 'head' node data matches with the 'gdata', update the New node as the First node.
	{
		new->data = ndata;
		new->right = *head;		//Since the New node is the First node, 'right' shall point to the node pointed by 'head'.
		new->left = NULL;		//Since the New node is the First node, 'left' shall point to NULL.
		(*head)->left = new;		//The node pointed by 'head' shall point to 'new'.
		*head = new;			//The 'head' shall point to 'new'.
		return SUCCESS;
	}

	Dlist* temp = *head;
	while (temp->right != NULL)		//Traverse till we reach the Last node of the LL.
	{
		if (temp->right->data == gdata)		//If the 'gdata' matches with the 'temp->right' node data; we insert the New node before that node.
		{
			new->data = ndata;
			new->right = temp->right;	//Update the 'right' of New node to point to the Matched node.
			new->left = temp;		//Update the 'left' of New node to point to the node before the Matched node.
			(temp->right)->left = new;	//Update the 'left' of the Matched node to point to 'new'.
			temp->right = new;		//Update the 'right' of the node before the Matched node to point to 'new'.
			return SUCCESS;
		}
		else
			temp = temp->right;		//Update the 'temp' to point to the next node.
	}

	if (temp->right == NULL)	//If we reach the end of LL, that implies the data has not been found.
	{
		free (new);		//Free the memory allocated to 'new'.
		return DATA_NOT_FOUND;
	}
}
