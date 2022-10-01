/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Insert the First node of the DLL.
Sample Input : head → 20 ↔ 30 ↔ 40 ↔ 50 ← tail and "10"
Cases :
1. List empty, data = 10: head = NULL, tail = NULL. After inserting data into list, head → 10 ← tail.
2. List not empty, data 40: head → 10 ↔ 20 ↔ 30 ← tail. After inserting 40 into list, head → 40 ↔ 10 ↔ 20 ↔ 30 ← tail.
Sample Output: head → 10 ↔ 20 ↔ 30 ↔ 40 ↔ 50 ← tail
*/

#include "dll.h"

int dl_insert_first (Dlist **head, Dlist **tail, int data)
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
	else			//Otherwise, the 'new' shall be updated as the First node of the LL and 'head' shall be updated.
	{
		new->left = NULL;		//Since 'new' is the First node; the 'left' shall point to NULL.
		new->right = *head;		//The 'right' shall point to the node being pointed by 'head'.
		(*head)->left = new;		//The previous First node pointed by 'head' shall point to 'new'.
		*head = new;			//The 'head' shall point to 'new'.
		return SUCCESS;
	}
}
