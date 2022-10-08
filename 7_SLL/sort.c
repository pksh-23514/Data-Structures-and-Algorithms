/*
Name         : Prabhat Kiran
Date         : 06th October 2022
Description  : Sort the given SLL in Ascending order.
Sample Input : 50 → 40 → 30 → 20 → 10
Cases:
1. List empty → Return LIST_EMPTY (in empty list node can’t be sorted).
2. List not empty → Sort the given SLL.
Sample Output: 10 → 20 → 30 → 40 → 50
*/

#include "sll.h"

int sl_sort (Slist **head)
{
	if (*head == NULL)		//If the LL is empty, then the Sorting operation cannot be performed.
		return LIST_EMPTY;
	
	int flag;			//To break the loop performing the Sorting operation based on the 'flag' value.

	/* Bubble Sort Algorithm implemented */
	while (1)			//The outer loop will run till the swapping of Nodes is taking place.
	{
		Slist* ptr = *head;	//Initialize the 'ptr' to NULL.
		Slist* prev;		//To point to the Previous node before the node to be swapped.
		flag =1;		//Update the 'flag' to 1 as default.

		while (ptr->link != NULL)	//The loop will run till the Last node is reached.
		{
			if ((ptr == *head) && (ptr->data > ptr->link->data))		//If the First node needs to be swapped, the Head will also get updated.
			{
				*head = ptr->link;		//'head' will point to the Next node.
				ptr->link = ptr->link->link;	//The Current node will point to the node after the Next node.
				(*head)->link = ptr;		//The Next node will point to the Current node.
				prev = *head;			//The Previous node will now point to the node pointed by 'head'.
				flag = 0;			//If the Swapping happens, the 'flag' shall be updated to '0'.
			}
			else if ((ptr != *head) && (ptr->data > ptr->link->data))	//If a node other than the First node needs to be swapped, below links will be updated.
			{
				prev->link = ptr->link;		//The Previous node will link to the Next node.
				ptr->link = ptr->link->link;	//The Current node will link to the node after the Next node.
				prev->link->link = ptr;		//The Next node will link to the Current node.
				prev = prev->link;		//The Previous node will be updated to the Next node.
				flag = 0;			//If the Swapping happens, the 'flag' shall be updated to '0'.
			}
			else	//Otherwise, just update the Previous and Current node to point to one node ahead.
			{
				prev = ptr;			//Update the 'prev' to point to the Current node.
				ptr = ptr->link;		//Update the 'ptr' to point to the Next node.
			}
		}
		/* At the end of each iteration of the inner loop, the largest element reaches the correct position. */
		
		if (flag==1)	//If no swapping happens, that implies the list is in a Sorted order and the operation can be terminated.
			break;
	}

	return SUCCESS;
}
