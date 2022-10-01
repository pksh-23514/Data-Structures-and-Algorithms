/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Detect if there is a Loop in the given SLL.
Sample Input : head → 10 → 20 → 23 → 30 →40 → 50 → 20 (Node-2)
1. List empty → Return LIST_EMPTY (in empty list Loop can’t be created).
2. List not empty →
	1. Loop present
	2. Loop not present
Sample Output: Loop detected.
*/

#include "sll.h"

/* Function for finding the Loop in the SLL */

int find_loop (Slist *head)
{
	if (head == NULL)		//If the LL is empty, no Loop can be present in LL.
		return LIST_EMPTY;

	Slist* slow = head;		//The pointer that traverses at a slow pace.
	Slist* fast = head;		//The pointer that traverses at a fast pace.

	while ((fast->link != NULL) && (fast->link->link != NULL))	//The 2 conditions arise considering Odd/Even number of Nodes in the LL.
	{
		slow = slow->link;		//Update the 'slow' to move by 1 Node at a time.
		fast = fast->link->link;	//Update the 'fast' to move by 2 Nodes at a time.

		if ((slow == fast) || (slow == fast->link))		//If the 'slow' and 'fast' meet at the same Node, a Loop is detected in the LL.
		{
			return SUCCESS;
		}
	}

	if ((fast->link == NULL) || (fast->link->link == NULL))		//If no Loop is found, then the LL is terminated by NULL.
		return LOOP_NOT_FOUND;
}
