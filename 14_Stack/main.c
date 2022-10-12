/*
Name         : Prabhat Kiran
Date         : 10th October 2022
Description  : Convert Infix to Postfix and Evaluate Postfix expression.
*/

#include "main.h"

void strrev (char *string)	//Function to Reverse the String.
{
	char temp;
	int len = strlen (string);
	for (int i = 0; i < (len / 2); i++)
	{
		temp = string [i];
		string [i] = string [len - i - 1];
		string [len - i - 1] = temp;
	}
}

int main()
{
	char Infix_exp[50], Prefix_exp[50];		//To store the Infix and Prefix strings.
	int choice, result;
	Stack_t stk;			//To store the characters from the Infix expression / Postfix expression on the Stack.
	stk.top = -1;		//Initialize the 'top' as '-1' to signify the Stack is empty.

	printf("Enter the Infix expression : ");	////Read the Infix expression.
	scanf("%49[^\n]", Infix_exp);

	strrev (Infix_exp);	//Reverse the Initial Infix expression.

	int ret = Infix_Prefix_conversion (Infix_exp, Prefix_exp, &stk);
	if (ret == -1)								//Error Handling.
	{
		printf ("Invalid expression!\n");
	}
	else
	{
		strrev (Prefix_exp);	//Reverse the Final Prefix expression.
		
		printf("PreFix expression : %s\n", Prefix_exp);
		
		stk.top = -1;	//Again clear the Stack for the Evaluation of the converted Postfix expression.
		
		strrev (Prefix_exp);	//Reverse the Final Prefix expression.
		result = Prefix_Eval(Prefix_exp, &stk);
		printf("Result : %d\n", result);
	}

	return 0;
}
