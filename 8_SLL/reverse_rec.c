/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Reverse the given SLL using Recursive method.
Sample Input : 50 → 40 → 30 → 20 → 10
Cases :
1. List Empty
2. List Non-Empty
Sample Output: 10 → 20 → 30 → 40 → 50
*/

/* Function to reverse the given SLL using Recursion */

#if 1
#include "sll.h"

int reverse_rec (Slist** head)
{
	if (*head == NULL)				//If the LL is empty, the Reversing operation cannot be performed.
		return LIST_EMPTY;
	else if ((*head)->link == NULL)			//If the 'head' reaches the end of the LL, start reversing the links of the nodes of the LL.
		return 1;
	else						//Otherwise, the 'reverse_rec' is called recursively till we reach the end of the LL.
	{
		Slist* temp = *head;			//Store the Current node position in 'temp'.
		*head = (*head)->link;			//Update the 'head' to point to the Next node.
		int ret = reverse_rec (head);		//Recursive call to 'reverse_rec' with the updated 'head'.
		temp->link->link = temp;		//After 'reverse_rec' returns '1'; the Next node link shall point to the Current node.
		temp->link = NULL;			//Update the Current node link to NULL (useful in terminating the new LL by making the First node link to NULL).
		return ret;
	}
}
#endif

#if 0
#include "sll.h"

int reverse_rec (Slist** head, Slist* prev)
{
	if (*head == NULL)				//If the LL is empty, the Reversing operation cannot be performed.
		return LIST_EMPTY;
	else if ((*head)->link == NULL)			//If the 'head' reaches the end of the LL, start reversing the links of the nodes of the LL.
	{
		(*head)->link = prev;			//Update the Last node link to point to the Previous node received in the function argument.
		return 1;
	}
	else						//Otherwise, the 'reverse_rec' is called recursively till we reach the end of the LL.
	{
		Slist* temp = *head;			//Store the Current node position in 'temp'.
		*head = (*head)->link;			//Update the 'head' to point to the Next node.
		int ret = reverse_rec (head, temp);	//Recursive call to 'reverse_rec' with the updated 'head' and 'temp' as Previous node.
		temp->link = prev;			//Update the Current node link to the Previous node received in the function argument.
		return ret;
	}
}
#endif
