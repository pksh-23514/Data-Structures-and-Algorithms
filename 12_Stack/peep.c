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

int Peep (Stack_t *top)
{
	/* Checking if the Stack is empty or not */
	if (top == NULL)
	{
		printf("INFO : Stack is empty\n");
		return FAILURE;
	}

	/* Storing the value of 'top' in 'temp' for traversing */
	Stack_t *temp = top;
	while (temp)
	{
		/* Printing the values from Stack one by one */
		printf("%d -> ", temp->data);

		/* Traversing to next node */
		temp = temp->link;
	}

	printf("NULL\n");
	return SUCCESS;
}
