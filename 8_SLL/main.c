/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Single Linked List operations Implementation.
Implement the functions given below :-
1. sl_reverse_iterative(head) 
2. sl_reverse_recursive(head)
*/

#include "sll.h"

int main()
{
	int option, data;
	Slist *head = NULL; 		//Initialize the 'head' to NULL.
	
	printf("1. Insert the element\n2. Print list\n3. Reverse Iterative\n4. Reverse Recusive\n5. Exit\nEnter your choice : ");
	
	while(1)
	{
		scanf("%d", &option);	//Ask the user for the choice of Operation.
		
		switch (option)
		{
			case 1:		/* To insert the element at Last node */
				{
					printf("Enter the number that you want to insert at last: ");
					scanf("%d", &data);							//Input the Data to be inserted at the last node of LL.
					
					if (insert_at_last (&head, data) == FAILURE) 				//Pass by Reference in function call.
					{
						printf("INFO : Insert at last failure\n");
					}
				}
				break;
			case 2:		/* To print the complete list */
				{
					print_list (head);							//Pass by Value in function call.
				}
				break;
			case 3:		/* To Reverse the complete list using Iteration */
				{
					if (reverse_iter (&head) == LIST_EMPTY)					//Pass by Reference in function call.
					{
						printf("INFO : List is empty\n");
					}
					else
					{
						printf("INFO : Reverse iterative successfull\n");
					}
				}
				break;
			case 4:		/* To Reverse the complete list using Iteration */
				{
					/*Another way to implement: if (reverse_rec (&head, NULL) == LIST_EMPTY)*/

					if (reverse_rec (&head) == LIST_EMPTY)					//Pass by Reference in function call.
					{
						printf("INFO : List is empty\n");
					}
					else
					{
						printf("INFO : Reverse recursive successfull\n");
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
