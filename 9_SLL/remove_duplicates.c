/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Remove the Duplicate nodes from the SLL (Unsorted).
Sample Input : 5 → 3 → 4 → 5 → 2 → 1 → 4 → 5 → 3
Cases:
1. List empty → Return LIST_EMPTY (in empty list nodes can’t be deleted).
2. List not empty → Remove the Duplicates and print the remaining nodes in the same order.
Sample Output: 5 → 3 → 4 → 2 → 1
*/

#include "sll.h"

/* Remove duplicate datas from LL */

int remove_duplicates (Slist **head)
{
	if (*head == NULL)		//If the LL is empty, the Removal operation cannot be performed.
		return FAILURE;

	Slist* temp1 = *head;
	Slist* del;			//To store the Duplicate node to be deleted.

	while (temp1 != NULL)	//Traverse till the end of LL.
	{
		Slist* temp2 = temp1;		//Update the searching pointer with the Current node being checked.
		while (temp2->link != NULL)	//Traverse from the Current node till the end of LL.
		{
			if ((temp2->link->data == temp1->data) && (temp1 != temp2->link))	//If the Current node data matches with the node being checked, remove the Duplicate.
			{
				del = temp2->link;		//Update the 'del' with the node to be removed.
				temp2->link = del->link;	//Update the node being checked with the node after the node to be deleted.
				free (del);			//Free the Duplicate node.
			}
			else
			{
				temp2 = temp2->link;		//Update the 'temp2' to point to the Next node.
			}
		}
		temp1 = temp1->link;				//Update the 'temp1' to point to the Next node.
	}

	return SUCCESS;
}
