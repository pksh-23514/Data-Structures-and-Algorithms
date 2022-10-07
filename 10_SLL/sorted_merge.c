/*
Name         : Prabhat Kiran
Date         : 05th October 2022
Description  : Merge the SLL and Sort the combined SLL.
Sample Input : List–1: 30 → 10 → 50 & List–2: 20 → 5 → 35
Cases:
1. If second list is EMPTY, no need to append it.
2. If first list is EMPTY, update head1 to the head2.
3. If both list are EMPTY, return LISTS_EMPTY.
4. Finally sort the list.
Sample Output: 5 → 10 → 20 → 30 → 35 → 50
*/

#include "sll.h"

/* sort() will Sort nodes of the LL in ascending order */

int sorted_merge (Slist **head1, Slist **head2)
{
	if ((*head1 != NULL) && (*head2 == NULL))		//If the second list is EMPTY, no need to append it to the first list.
		return (sort (head1));
	else if ((*head1 == NULL) && (*head2 != NULL))		//If the first list is EMPTY, update 'head1' to the 'head2'.
	{
		*head1 = *head2;
		return (sort (head1));
	}
	else if ((*head1 == NULL) && (*head2 == NULL))		//If both the lists are EMPTY, return LIST_EMPTY.
		return LIST_EMPTY;
	else							//If both the lists are not empty, merge them and sort the combined LL.
	{
		Slist* temp = *head1;
		while (temp->link != NULL)	//Traverse till the last node of the first list.
			temp = temp->link;	//Update the 'temp' to point to the Next node.

		temp->link = *head2;		//Link the last node of the first list to the first node of the second list.
		return (sort (head1));
	}
}
