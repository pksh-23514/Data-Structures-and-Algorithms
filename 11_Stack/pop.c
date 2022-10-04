/*
Name         : Prabhat Kiran
Date         : 03rd October 2022
Description  : Pop the Top-most element on the Stack.
Sample Input : Top -> 4 3 2 1
Cases:
1. Stack empty → Return STACK_EMPTY.
2. Stack not empty → Pop (delete) the top of the data from the stack.
Sample Output: Top -> 3 2 1
*/

#include "stack.h"

/* Function for Poping the element from the Stack */

int Pop (Stack_t *s)
{
	if (isEmpty (s) == SUCCESS)		//If the Stack is Empty, the Pop function cannot be performed.
		return FAILURE;
	else	//Otherwise, remove the top-most element on the Stack and decrease the Stack pointer by '1'.
	{
		s->top = s->top - 1;
		return SUCCESS;
	}
}
