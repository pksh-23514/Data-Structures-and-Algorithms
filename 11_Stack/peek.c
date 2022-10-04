/*
Name         : Prabhat Kiran
Date         : 03rd October 2022
Description  : Return the Top-most element on the Stack.
Sample Input : Top -> 4 3 2 1
Cases:
1. Stack empty → Return STACK_EMPTY.
2. Stack not empty → return the top -> data.
Sample Output: 4
*/

#include "stack.h"

/* Function to display the Top element in the Stack */

int Peek(Stack_t *s)
{
	if (isEmpty (s) == SUCCESS)		//If the Stack is Empty, the Peek function cannot be performed.
		return FAILURE;

	return (s->stack [s->top]);		//Otherwise, Peek will return the top-most element on the Stack.
}
