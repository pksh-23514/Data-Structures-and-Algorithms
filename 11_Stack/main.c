/*
Name         : Prabhat Kiran
Date         : 03rd October 2022
Description  : Stack basic operations Implementation using Arrays.
Implement the functions given below :-
1. push(stack, data)
2. pop(stack)
3. peek(stack)
4. peep(stack)
*/

#include "stack.h"

int main()
{
	int choice, element, peek, size;
	Stack_t stk;			//Declare the Stack.
	
	printf("Enter the size of the stack: ");
	scanf("%d", &size);		//Ask for the Size of the Stack.
	
	create_stack (&stk, size);	//To initialize the Stack members.
	
	printf("1. Push\n2. Pop\n3. Display Stack\n4. Peek(Element at Top)\n5. Exit\nEnter your choice : ");
	
	while (1)
	{
		scanf("%d", &choice);	//Ask the user for the choice of Operation.
		switch (choice)
		{
			case 1:		/* To Push the element on the Stack */
				{
					printf("Enter the element to be pushed in stack : ");
					scanf("%d", &element);			//Input the Data to be pushed on the Stack.

					if (Push (&stk, element) == FAILURE)	//Pass by Reference in function call.
					{
						printf("INFO : Stack Full\n");
					}
				}
				break;
			case 2:		/* To Pop the top-most Value of the Stack */
				{
					if (Pop (&stk) == FAILURE)		//Pass by Reference in function call.
					{
						printf("INFO : Stack is empty\n");
					}
					else
					{
						printf("INFO : Pop operation is successfull\n");
					}
				}
				break;
			case 3:		/* Printing all the elements of the Stack */
				{
					Peep (stk);	//Pass by Value in function call.
				}
				break;
			case 4:		/* To find the Peek (top-most) element in the stack */
				{
					if ((peek = Peek (&stk)) == FAILURE)	//Pass by Reference in function call.
					{
						printf("INFO : Stack is empty\n");
					}
					else
					{
						printf("INFO : Peek element is %d\n", peek);
					}
				}
				break;
			case 5:		/* To exit the Operation */
				{
					return SUCCESS;
				}
				break;
			default: printf("Invalid Choice.\n");	//Default case.
		}
	}
	
	return 0;
}
