/*
Name         : Prabhat Kiran
Date         : 28th September 2022
Description  : Print the complete DLL.
Sample Input : Nil
Sample Output: head → 10 ↔ 20 ↔ 30 ↔ 40 ↔ 50 ← tail
*/

#include "dll.h"

void print_list (Dlist *head)
{
	/* Checking if the LL is empty or not */
	if (head == NULL)
	{
		printf("INFO : List is empty\n");
	}
	else
	{
		printf("Head -> ");
		while (head)
		{
			/* Printing each Node data */
			printf("%d <-", head->data);
			
			/* Traversing in the forward direction */
			head = head->right;
			if (head)
				printf("-> ");
		}
		printf(" Tail\n");
	}
}
