/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Double Linked List basic operations Implementation.
Implement the functions given below :-
1. dll_insert_first(head, tail, data)
2. dll_insert_last(head, tail, data)
3. dll_delete_first(head, tail)
4. dll_delete_last(head, tail)
5. dll_delete_list(head, tail)

*/

#include "dll.h"

int main()
{
	int option, data;
	Dlist *head = NULL; 		//Initialize the 'head' to NULL.
	Dlist *tail = NULL; 		//Initialize the 'tail' to NULL.
	
	printf("\n1. Dll Insert last\n2. Dll Insert first\n3. Dll delete Last\n4. Dll delete first\n5. Dll delete list\n6. Print list\n7. Exit\nEnter your option: ");

	while (1)
	{
		scanf("%d", &option);	//Ask the user for the choice of Operation.
		
		switch (option)
		{
			case 1:		/* To insert the element at last node */
				{
					printf("Enter the number that you want to insert at last: ");
					scanf("%d", &data);						//Input the Data to be inserted at the last node of LL.
					
					if (dl_insert_last (&head, &tail, data) == FAILURE)		//Pass by Reference in function call.
					{
						printf("INFO : Insertion Failure\n");
					}
				}
				break;
			case 2:		/* To insert the element at first node */
				{
					printf("Enter the element you have to insert at the first : ");
					scanf("%d", &data);						//Input the Data to be inserted at the first node of LL.
					
					if (dl_insert_first (&head, &tail, data) == FAILURE)		//Pass by Reference in function call.
					{
						printf("INFO : Insertion Failure\n");
					}
				}
				break;
			case 3:		/* To delete the element at last node */
				{
					if (dl_delete_last (&head, &tail) == FAILURE)			//Pass by Reference in function call.
					{
						printf("INFO : Delete last Failure, List is empty\n");
					}
					else
					{
						printf("INFO : Delete last Successfull\n");
					}
				}
				break;
			case 4:		/* To delete the element at first node */
				{
					if (dl_delete_first (&head, &tail) == FAILURE)			//Pass by Reference in function call.
					{
						printf("INFO : Delete first Failure, List is empty\n");
					}
					else
					{
						printf("INFO : Delete first Successfull\n");
					}
				}
				break;
			case 5:		/* To delete the complete list */
				{
					if (dl_delete_list (&head, &tail) == FAILURE)			//Pass by Reference in function call.
					{
						printf("INFO : Delete list Failure, List is empty\n");
					}
					else
					{
						printf("INFO : Delete list Successfull\n");
					}
				}
				break;
			case 6:		/* To print the complete list */
				{
					print_list (head);			//Pass by Value in function call.
				}
				break;
			case 7:		/* To exit the Operation */
				{
					return SUCCESS;
				}
				break;
			default: printf("Enter proper choice !!\n");		//Default case.
		}
	}

	return SUCCESS;
}
