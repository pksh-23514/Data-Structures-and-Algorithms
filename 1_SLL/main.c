/*
Name         : Prabhat Kiran
Date         : 28th September 2022
Description  : Single Linked List basic operations Implementation.
Implement the functions given below :-
1. insert_at_first(head, data)
2. insert_at_last(head, data)
3. delete_first(head)
4. delete_last(head)
5. delete_list(head)
6. find_node(head, data)
*/

#include "sll.h"

int main()
{
	int option, data, key;
	Slist *head = NULL;		//Initialize the 'head' to NULL.

	printf("1. Insert last\n2. Insert first\n3. Delete Last\n4. Delete first\n5. Delete list\n6. Find node\n7. Print list\n8. Exit\nEnter your choice : ");

	while (1)
	{
		scanf("%d", &option);	//Ask the user for the choice of Operation.
		switch (option)
		{
			case 1:		/* To insert the element at last node */
				{
					printf("Enter the number that you want to insert at last: ");
					scanf("%d", &data);							//Input the Data to be inserted at the last node of LL.
					
					if (insert_at_last (&head, data) == FAILURE) 		//Pass by Reference in function call.
					{
						printf("INFO : Insertion Failure\n");
					}
				}
				break;
			case 2:		/* To insert the element at first node */
				{
					printf("Enter the element you have to insert at the first : ");
					scanf("%d", &data);							//Input the Data to be inserted at the first node of LL.
					
					if (insert_at_first (&head, data) == FAILURE)		//Pass by Reference in function call.
					{
						printf("INFO : Insertion Failure\n");
					}
				}
				break;
			case 3:		/* To delete the element at last node */
				{
					if (sl_delete_last (&head) == FAILURE)			//Pass by Reference in function call.
					{
						printf("INFO : Delete last Failure\nList is empty\n");
					}
					else	//If the function call is successful, print a confirmation message.
					{
						printf("INFO : Delete last successfull\n");
					}
				}
				break;
			case 4:		/* To delete the element at first node */
				{
					if (sl_delete_first (&head) == FAILURE)			//Pass by Reference in function call.
					{
						printf("INFO : Delete first Failure\n List is empty\n");
					}
					else	//If the function call is successful, print a confirmation message.
					{
						printf("INFO : Delete first successfull\n");
					}
				}
				break;
			case 5:		/* To delete the complete list */
				{
					if (sl_delete_list (&head) == FAILURE)			//Pass by Reference in function call.
					{
						printf("INFO : Delete list Failure\nList is empty\n");
					}
					else	//If the function call is successful, print a confirmation message.
					{
						printf("INFO : Delete list Successfull\n");
					}
				}
				break;
			case 6:		/* To find an element in the given list */
				{
					printf("Enter the key to find : ");
					scanf("%d", &key);
					int count;
					
					if ((count = find_node (head, key)) == FAILURE)		//Pass by Value in function call.
					{
						printf("INFO : Failure\nList is empty or Key not found\n");
					}
					else	//If the function call is successful, print a confirmation message.
					{
						printf("%d found in the list at the position %d\n", key, count);
					}
				}	
				break;
			case 7:		/* To print the complete list */
				{
					print_list (head);					//Pass by Value in function call.
				}
				break;
			case 8:		/* To exit the Operation */
				{
					return SUCCESS;
				}
			default: printf("Enter proper choice !!\n");	//Default case.
		}
	}
}
