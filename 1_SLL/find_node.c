/*
Name         : Prabhat Kiran
Date         : 28th September 2022
Description  : Find the Index of the SLL which contains the specified Data.
Sample Input : head → 10 → 20 → 30 → 40 → 50 → NULL and "20"
Cases:
1. List empty → Return LIST_EMPTY (in empty list can’t search data).
2. List not empty.
      1. Traverse through the list to search the data.
      2. If data found return DATA_FOUND.
3. Else return DATA_NOT_FOUND.
Sample Output: "2"nd Node
*/

#include "sll.h"

int find_node (Slist *head, data_t data)
{
	if (head == NULL)		//If the LL is empty, the Search operation cannot be performed.
		return FAILURE;

	int count = 1;
	while ((head != NULL) && (head->data != data))		//Traverse the LL till you reach the Node containing the specified 'data'.
	{
		head = head->link;		//Update the 'head' to the next node.
		count++;			//Update the 'count' to find that node Index.
	}

	if (head == NULL)			//If the specified 'value' is not found in LL, the loop will terminate with 'head' becoming NULL.
		return FAILURE;
	else					//Return the specified node Index.
		return count;
}
