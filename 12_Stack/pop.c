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

int Pop (Stack_t **top)
{
	if (*top == NULL)	//If the Stack is empty, the Pop function cannot be performed.
		return FAILURE;

	Stack_t* del = *top;	//Store the Top node of the Stack in some temporary variable.
	*top = (*top)->link;	//Update the 'top' to point to the Next node in the Stack.
	free (del);		//Free the Top node.
	return SUCCESS;
}
