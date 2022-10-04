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

int Push (Stack_t **top, data_t data)
{
	Stack_t* new = (Stack_t*) malloc (sizeof (Stack_t));	//Dynamic allocation of memory for the particular Node on the Stack.
	if (new == NULL)					//If the memory is not allocated, the Insertion operation cannot be performed.
		return FAILURE;

	new->data = data;	//Update the node Data on the Stack with the given 'data'.
	new->link = *top;	//Update the node Link on the Stack with the 'top'.
	*top = new;		//Update the 'top' with the 'new' node created.

	return SUCCESS;
}
