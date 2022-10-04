/*
Name         : Prabhat Kiran
Date         : 03rd October 2022
Description  : Stack basic operations Implementation using Linked List.
Implement the functions given below :-
1. push(stack, data)
2. pop(stack)
3. peek(stack)
4. peep(stack)
*/

#include "stack.h"

int main()
{
	int option, data, peek;
	Stack_t *top = NULL;		//Initialize the Top of the Stack as 'NULL'.
	
	printf("1. Push\n2. Pop\n3. Display Stack\n4. Peek(Element at Top)\n5. Exit\nEnter choice: ");
	
	while (1)
	{
		scanf("%d", &option);	//Ask the user for the choice of Operation.
		
		switch (option)
		{
			case 1:		/* To Push the element on the Stack */
				{
					printf("Enter the element you have to insert at the first : ");
					scanf("%d", &data);				//Input the Data to be pushed on the Stack.
					
					if ((Push (&top, data)) == FAILURE)		//Pass by Reference in function call.
					{
						printf("INFO : Push operation Failure\n");
					}
				}
				break;
			case 2:		/* To Pop the top-most Value of the Stack */
				{
					if ((Pop (&top)) == FAILURE)			//Pass by Reference in function call.
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
					Peep (top);		//Pass by Value in function call.
				}
				break;
			case 4:		/* To find the Peek (top-most) element in the stack */
				{
					if ((peek = Peek (&top)) == FAILURE)		//Pass by Reference in function call.
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
			default: printf("Enter proper choice !!\n");	//Default case.
		}
	}
	
	return SUCCESS;
}
