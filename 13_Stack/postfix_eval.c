/*
Name         : Prabhat Kiran
Date         : 10th October 2022
Description  : Evaluate the Postfix Expression.
Sample Input : 2 3 * 3 – 8 4 / 1 1 + / +
Sample Output: 4
*/

#include "main.h"

int power (int exp, int pow)	//The Power function to implement the Exponential Operation
{
	int res = 1;
	for (int i = 1; i <= pow; i++)
		res = res * exp;
	return res;
}

int Postfix_Eval (char *Postfix_exp, Stack_t *stk)
{
	char ch;	//To store each character of the Postfix expression.
	int pos = 0;	//To track the index of the Postfix array element position.

	while ((ch = Postfix_exp [pos]) != '\0')	//The loop to traverse the Postfix expression.
	{
		if ((ch >= '0') && (ch <= '9'))		//If the character is a Digit; push it on the Stack after converting it into an integer from ASCII value.
		{
			push (stk, ((int) ch - 48));
		}
		else if ((ch == '+') || (ch == '-') || (ch == '*') || (ch == '/') || (ch == '%') || (ch == '^'))	//If the character is an Operator.
		{
			int op2 = peek (stk);	//Pop the Topmost value as the Second Operand for the Operation.
			pop (stk);
			int op1 = peek (stk);	//Pop the Topmost value as the First Operand for the Operation.
			pop (stk);
			if ((op1 != -1) && (op2 != -1))		//If the Operands are valid; perform the particular Operation.
			{
				switch (ch)
				{
					case '+':	/* Addition Operation */
						{
							push (stk, (op1 + op2));	//Push the Result on the Stack.
						}
						break;
					case '-':	/* Subtraction Operation */
						{
							push (stk, (op1 - op2));	//Push the Result on the Stack.
						}
						break;
					case '*':	/* Multiplication Operation */
						{
							push (stk, (op1 * op2));	//Push the Result on the Stack.
						}
						break;
					case '/':	/* Division Operation */
						{
							if (op2 != 0)	//If the Second Operand is a non-zero value.
							{
								push (stk, (op1 / op2));	//Push the Result on the Stack.
							}
						}
						break;
					case '%':	/* Modulus Operation */
						{
							push (stk, (op1 % op2));	//Push the Result on the Stack.
						}
						break;
					case '^':	/* Exponential Operation */
						{
							push (stk, power (op1, op2));	//Push the Result on the Stack.
						}
						break;
				}
			}
		}
		
		pos += 1;	//Update the Postfix expression index by '1'.
	}
	
	if ((ch = Postfix_exp [pos]) == '\0')	//If the end of the Postfix expression is reached, return the Topmost value on the Stack as the Final Result.
	{
		return (peek (stk));
	}
}
