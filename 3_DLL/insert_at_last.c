/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Insert the Last node of the DLL.
Sample Input : head → 10 ↔ 20 ↔ 30 ↔ 40 ← tail and "50"
Cases :
1. List empty, data = 10: head = NULL, tail = NULL. After inserting data into list, head → 10 ← tail.
2. List not empty, data 40: head → 10 ↔ 20 ↔ 30 ← tail. After inserting 40 into list, head → 10 ↔ 20 ↔ 30 ↔ 40 ← tail.
Sample Output: head → 10 ↔ 20 ↔ 30 ↔ 40 ↔ 50 ← tail
*/

#include "dll.h"

int dl_insert_last (Dlist **head, Dlist **tail, int data)
{
	Dlist* new = (Dlist*) malloc (sizeof (Dlist));	//Dynamic memory allocation to create the Node.
	if (new == NULL)				//If the memory is not allocated, the Insertion operation cannot be performed.
		return FAILURE;

	new->data = data;

	if (*head == NULL)	//If the LL is empty, update the LL with 'new' as th only Node.
	{
		new->left = NULL;	//Since 'new' is the only node; the 'left' shall point to NULL.
		new->right = NULL;	//Since 'new' is the only node; the 'right' shall point to NULL.
		*head = *tail = new;	//Since 'new' is the only node; both 'head' and 'tail' shall point to 'new'.
		return SUCCESS;
	}
	else			//Otherwise, the 'new' shall be updated as the Last node of the LL and 'tail' shall be updated.
	{
		new->right = NULL;		//Since 'new' is the Last node; the 'right' shall point to NULL.
		new->left = *tail;		//The 'left' shall point to the node being pointed by 'tail'.
		(*tail)->right = new;		//The previous Last node pointed by 'tail' shall point to 'new'.
		*tail = new;			//The 'tail' shall point to 'new'.
		return SUCCESS;
	}
}
