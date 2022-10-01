/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Delete a particular Node having the specified Data.
Sample Input : head → 10 ↔ 20 ↔ 30 ↔ 40 ↔ 50 ← tail and "50"
Cases :
1. List empty → Return LIST_EMPTY (in empty list node can’t be deleted).
2. List not empty →
	1. Given data present
	2. Given data not present
Sample Output: head → 10 ↔ 20 ↔ 30 ↔ 40 ← tail
*/

#include "dll.h"

int dl_delete_element (Dlist **head, Dlist **tail, int data)
{
	if (*head == NULL)		//If the LL is empty, the Delete operation cannot be performed.
		return LIST_EMPTY;

	if ((*head)->data == data)	//If the data of first node of LL matches with the specified 'data', we can delete it and update the 'head' as NULL.
	{
		*head = (*head)->right;	//Update the 'head' to the second node of the LL.
		free ((*head)->left);	//Free the first node.
		(*head)->left = NULL;
		return SUCCESS;
	}
	
	if ((*tail)->data == data)	//If the data of last node of LL matches with the specified 'data', we can delete it and update the 'tail' as NULL.
	{
		*tail = (*tail)->left;	//Update the 'tail' to the second last node of the LL.
		free ((*tail)->right);	//Free the last node.
		(*tail)->right = NULL;
		return SUCCESS;
	}

	Dlist* temp = (*head)->right;
	while ((temp != NULL) && (temp->data != data))	//Traverse till the end of the LL (starting from the second node of the LL).
	{
		temp = temp->right;			//Update the 'temp' to next node.
	}

	if (temp == NULL)				//If the 'data' is not found in the LL, return not found.
	{
		return DATA_NOT_FOUND;
	}
	else						//If the specified 'data' matches with the node data, update the links.
	{
		(temp->left)->right = temp->right;	//Update the node before the target node to point to the node after the target node.
		(temp->right)->left = temp->left;	//Update the node after the target node to point to the node before the target node.
		free (temp);				//Free the target node.
		return SUCCESS;
	}
}
