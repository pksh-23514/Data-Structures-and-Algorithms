/*
Name         : Prabhat Kiran
Date         : 03rd October 2022
Description  : Print all the elements on the Stack.
Sample Input : Top -> 4 3 2 1
Cases:
1. Stack empty → STACK_EMPTY.
2. Stack not empty → print the elements in the stack.
Sample Output: 4 3 2 1
*/

#include "stack.h"

/* Function for Print all the data in the Stack */

void Peep (Stack_t s)
{
	/* Checking if the Stack is empty or not */
	if (s.top == -1)
	{
		printf("INFO : Stack is empty\n");
	}
	else
	{
		/* Writing the loop to print the Top values in the Stack */
		printf("Top -> ");
		while (s.top > -1)
		{
			printf("%d ", s.stack[(s.top)--]);
		}
		printf("\n");
	}
}
