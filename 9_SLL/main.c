/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Single Linked List operations Implementation.
Implement the functions given below :-
1. remove_duplicates(head)
*/

#include "sll.h"

int main()
{
	int option, data;
	Slist *head = NULL; 		//Initialize the 'head' to NULL.
	
	printf("\n1. To insert the last element\n2. To print the list\n3. To remove the duplicates\n4. Exit\nEnter your option : ");
	
	while(1)
	{
		scanf("%d", &option);	//Ask the user for the choice of Operation.
		
		switch (option)
		{
			case 1:		/* To insert the element at last node */
				{
					printf("Enter the number that you want to insert at last: ");
					scanf("%d", &data);						//Input the Data to be inserted at the last node of LL.
					
					if (insert_at_last (&head, data) == FAILURE) 			//Pass by Reference in function call.
					{
						printf("INFO : insert last failure\n");
					}
				}
				break;
			case 2:		/* To print the complete list */
				{
					print_list (head);						//Pass by Value in function call.
				}
				break;
			case 3:		/* To remove the Duplicate nodes from the LL */
				{
					if (remove_duplicates (&head) == FAILURE)			//Pass by Reference in function call.
					{
						printf("INFO : List is empty\n");
					}
					else
					{
						printf("INFO : Duplicates are removed Successfully\n");
					}
				}
				break;
			case 4:		/* To exit the Operation */
				{
					return SUCCESS;
				}
				break;
			default: printf("Enter proper choice !!\n");	//Default case.
		}
	}

	return SUCCESS;
}
