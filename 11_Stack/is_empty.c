/*
Name         : Prabhat Kiran
Date         : 03rd October 2022
Description  : Check if the Stack is Empty or not.
Sample Input : Nil
Sample Output: Nil
*/

#include "stack.h"

/* Fuction for Checking if the Stack is Empty */

int isEmpty (Stack_t* s)
{
	if (s->top == - 1)		//If the Stack is empty, Stack pointer will have a value of '-1'.
		return SUCCESS;		//If Stack is empty.
	else
		return FAILURE;		//If Stack has some elements.
}
