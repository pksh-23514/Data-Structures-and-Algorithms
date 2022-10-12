/*
Name         : Prabhat Kiran
Date         : 10th October 2022
Description  : Basic Operations of Stack and other functions required for the Infix to Prefix Conversion.
*/

#include "main.h"

int priority (char opr)			//To set the various Operator's Precedence in the Infix expression.
{
	int ret = 0;			//Default value of the Operator. Covers the '(' and ')' operators.
	switch (opr)
	{
		case '+':
		case '-':
			ret = 1;	//Addition and Subtraction Operation have Precedence as '1'.
			break;
		case '*':
		case '/':
		case '%':
			ret = 2;	//Multiplication, Division and Modulus Operation have Precedence as '2'.
			break;
		case '^':
			ret = 3;	//Exponential Operation has Precedence as '3'.
			break;
	}

	return ret;
}

void push (Stack_t *stk, int data)	//Push Operation on the Stack.
{
	++(stk->top);
	stk->stack [stk->top] = data;
}

void pop (Stack_t *stk)			//Pop Operation on the Stack.
{
	if (stk->top != -1)
		--(stk->top);
}

int peek (Stack_t *stk)			//Peek Operation on the Stack.
{
	if (stk->top != -1)
	{
		return (stk->stack [stk->top]);
	}

	return -1;	//Return '-1' if the Stack is empty.
}
