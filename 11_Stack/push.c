/*
Name         : Prabhat Kiran
Date         : 03rd October 2022
Description  : Push the Top-most element on the Stack.
Sample Input : Top -> 3 2 1 and "4"
Cases:
1. Stack full → Return STACK_FULL.
2. Stack not full → Push the given data into stack.
Sample Output: Top -> 4 3 2 1
*/

#include "stack.h"

/* Fuction for Inserting the element on the Stack */

int Push (Stack_t *s, int element)
{
	if (isFull (s) == SUCCESS)		//If the Stack is Full, the Push function cannot be performed.
		return FAILURE;
	else	//Otherwise, increase the Stack pointer by '1' and insert the 'element' as the top-most element on the Stack.
	{
		s->top = s->top + 1;
		s->stack [s->top] = element;
		return SUCCESS;
	}
}
