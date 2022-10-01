/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Single Linked List operations Implementation.
Implement the functions given below :-
1. insert_sorted(head, ndata)
2. find_loop(head)
*/

#include "sll.h"

int main()
{
	int option, data, ret;
	Slist *head = NULL; 	//Initialize the 'head' to NULL.

	printf("1. Insert sorted\n2. Find loop\n3. Create loop\n4. Print list\n5. Exit\nEnter Your choice : ");

	while (1)
	{
		scanf("%d", &option);	//Ask the user for the choice of Operation.
		
		switch (option)
		{
			case 1:		/* To insert elements in the LL in a Sorted manner */
				{
					printf("Enter the data to be inserted : ");
					scanf("%d", &data);					//Input the Data to be inserted at the last node of LL.
					
					if (insert_sorted (&head, data) == -1)			//Pass by Reference in function call.
					{
						printf("INFO : Insert sorted failure\n");
					}
				}
				break;
			case 2:		/* To detect the Loop in LL */
				{
					if ((ret = find_loop (head)) == LOOP_NOT_FOUND)		//Pass by Value in function call.
					{
						printf("INFO : Loop is not found\n");
					}
					else if (ret == LIST_EMPTY)
					{
						printf("INFO : List is empty\n");
					}
					else
					{
						printf("INFO : Loop found\n");
					}
				}
				break;
			case 3:		/* To create a Loop in the given LL */
				{
					printf("Enter a data to create the loop : ");
					scanf("%d", &data);					//Input the Data to be inserted at the last node of LL.
					
					if ((ret = create_loop (&head, data)) == LIST_EMPTY) 	//Pass by Reference in function call.
					{
						printf("INFO : List is empty\n");
					}
					else if (ret == DATA_NOT_FOUND)
					{
						printf("INFO : %d not found at the list\n", data);
					}
					else
					{
						printf("INFO : Loop created successfully\n");
					}
				}
				break;
			case 4:		/* To print the complete list */
				{
					print_list (head);		//Pass by Value in function call.
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
