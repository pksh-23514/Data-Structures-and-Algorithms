/*
Name         : Prabhat Kiran
Date         : 03rd October 2022
Description  : Create the Stack of specified size.
Sample Input : Nil
Sample Output: Nil
*/

#include "stack.h"

/* Fuction for Creating the Stack */

int create_stack (Stack_t *s, int size)
{
	s->capacity = size;	//To initialize the Holding capacity of the Stack.
	s->top = -1;		//To initialize the Stack pointer 'top' as '-1' indicating the Stack is empty.

	s->stack = (int*) malloc (s->capacity * sizeof (int));		//Dynamic allocation of memory for storing elements on Stack.
	if (s->stack == NULL)				//If the memory is not allocated, the Creation operation cannot be performed.
		return FAILURE;

	return SUCCESS;
}
