/*
Name         : Prabhat Kiran
Date         : 28th September 2022
Description  : Single Linked List operations Implementation.
Implement the functions given below :-
1. sl_find_mid(head, mid)
2. sl_get_Nth_last(head, n, data)
*/

#include "sll.h"

int main()
{
	char check_char;
	int option, data, pos, key;
	Slist *head = NULL; 		//Initialize the 'head' to NULL.
	
	printf("1. Insert at last\n2. Find Mid\n3. Find Nth last\n4. Print list \n5. Exit\nEnter the Option : ");
	
	while (1)
	{
		scanf("%d", &option);	//Ask the user for the choice of Operation.
		
		switch (option)
		{
			case 1:		/* To insert the element at Last node */
				{
					printf("Enter the number that you want to insert at last: ");
					scanf("%d", &data);						//Input the Data to be inserted at the last node of LL.
					
					if (insert_at_last (&head, data) == FAILURE) 			//Pass by Reference in function call.
						printf("INFO : Insert last failed\n");
				}
				break;
			case 2:		/* To find the Middle node of the LL */
				{
					int mid;
					
					if ((find_mid (head, &mid)) == LIST_EMPTY)			//Pass by Value in function call.
					{
						printf("INFO : List is empty\n");
					}
					else
					{
						printf("Middle element is %d\n", mid);
					}
				}
				break;
			case 3:		/* To find the Nth node from the end of LL */
				{
					printf("Enter the Number to find the last : ");
					scanf("%d", &pos);						//Input the Position of the Node to be found from the last of LL.

					if ((key = find_nth_last (head, pos, &data)) == FAILURE)	//Pass by Value in function call.
					{
						printf("INFO : Position not found\n");
					}
					else if (key == LIST_EMPTY)
					{
						printf("INFO : List is empty");
					}
					else
					{
						printf("%dth last is %d\n", pos, data);
					}
					
				}
				break;
			case 4:		/* To print the complete list */
				{
					print_list (head);	//Pass by Value in function call.
				}
				break;
			case 5:		/* To exit the Operation */
				{
					return SUCCESS;
				}
				break;
			default: printf("Invalid Option\n");	//Default case.
		}
	}
	
	return SUCCESS;
}
