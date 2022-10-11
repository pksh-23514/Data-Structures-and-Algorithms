/*
Name         : Prabhat Kiran
Date         : 10th October 2022
Description  : Convert the Infix Expression to Postfix Expression.
Sample Input : 2 * 3 – 3 + 8 / 4 / (1 + 1)
Sample Output: 2 3 * 3 – 8 4 / 1 1 + / +
*/

#include "main.h"

int Infix_Postfix_conversion (char *Infix_exp, char *Postfix_exp, Stack_t *stk)
{
	char ch;			//To store each character of the Infix expression.
	int pos_i = 0, pos_p = 0;	//To track the index of the Infix and Postfix array element position.
   	int count = 0;			//To count the number of brackets present in the Infix expression.

	while ((ch = Infix_exp [pos_i]) != '\0')	//Scan the given Infix expression and check if the Brackets are balanced or not.
	{
		if (ch == '(')
			count += 1;		//Increment 'count' if there is an Open bracket.
		else if (ch == ')')
			count -= 1;		//Decrement 'count' if there is a Close bracket.

		pos_i += 1;
	}
	if (count != 0)			//If the Brackets are not Balanced in the given Infix expression, the function shall terminate.
		return -1;		//Return '-1' (FAILURE) to signify the function termination in main().

	pos_i = 0;
	while ((ch = Infix_exp [pos_i]) != '\0')	//The loop to traverse the Infix expression.
	{
		if ((ch >= '0') && (ch <= '9'))		//If the character is a Digit; append it to the Postfix expression.
		{
			Postfix_exp [pos_p++] = ch;
		}
		else if ((ch == '+') || (ch == '-') || (ch == '*') || (ch == '/') || (ch == '%') || (ch == '^'))	//If the character is an Operator.
		{
			while (priority (ch) <= priority (peek (stk)))	//Run the loop till the precedence of the Operators on Stack is higher than the precedence of the Operator in Infix expression.
			{
				Postfix_exp [pos_p++] = peek (stk);	//Append the Operator on the Stack to the Postfix expression.
				pop (stk);
			}

			push (stk, (int) ch);	//If the precedence of the Operator from Infix expression is higher than the Operators on the Stack, push it on the Stack.
		}
		else if (ch == '(')		//If an Open bracket is encountered, push it on the Stack.
		{
			push (stk, (int) ch);
		}
		else if (ch == ')')		//If a Closed bracket is encountered, append all the characters from the Stack until the Open bracket is reached.
		{
			while (peek (stk) != '(')
			{
				Postfix_exp [pos_p++] = peek (stk);	//To append the Postfix expression with the Top-most element on the Stack.
				pop (stk);				//To remove the appended element from the Stack.
			}

			pop (stk);	//To remove the '(' character from the Stack.
		}

		pos_i += 1;		//Update the Infix expression index by '1'.
	}

	if ((ch = Infix_exp [pos_i]) == '\0')	//If the Infix expression has ended, empty the Stack.
	{
		while (peek (stk) != -1)	//Until the stack becomes empty, append all the characters to the Postfix expression.
		{
			Postfix_exp [pos_p++] = peek (stk);
			pop (stk);
		}

		Postfix_exp [pos_p] = '\0';	//Terminate the Postfix expression with '\0' to convert it to a string.
	}

	return 1;	//Return SUCCESS.
}
