/*
Name         : Prabhat Kiran
Date         : 10th October 2022
Description  : Convert Infix to Postfix and Evaluate Postfix expression.
*/

#include "main.h"

int main()
{
	char Infix_exp[50], Postfix_exp[50];	//To store the Infix and Postfix strings.
	int choice, result;
	Stack_t stk;				//To store the characters from the Infix expression / Postfix expression on the Stack.
	stk.top = -1;				//Initialize the 'top' as '-1' to signify the Stack is empty.

	printf("Enter the Infix expression : ");	//Read the Infix expression.
	scanf("%49[^\n]", Infix_exp);

	int ret = Infix_Postfix_conversion (Infix_exp, Postfix_exp, &stk);
	if (ret == -1)					//Error Handling.
	{
		printf ("Invalid expression!\n");
	}
	else
	{
		printf("PostFix expression : %s\n", Postfix_exp);

		stk.top = -1;			//Again clear the Stack for the Evaluation of the converted Postfix expression.

		result = Postfix_Eval (Postfix_exp, &stk);
		printf("Result : %d\n", result);
	}
	return 0;
}
