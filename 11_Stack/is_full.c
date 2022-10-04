/*
Name         : Prabhat Kiran
Date         : 03rd October 2022
Description  : Check if the Stack is Full or not.
Sample Input : Nil
Sample Output: Nil
*/

#include "stack.h"

/* Fuction for Checking if the Stack is Full */

int isFull (Stack_t* s)
{
	if (s->top == (s->capacity - 1))	//If the Stack is Full, Stack pointer will have a value of 'capacity - 1'.
		return SUCCESS;			//If Stack is Full.
	else
		return FAILURE;			//If Stack has the capacity to hold more elements.
}
