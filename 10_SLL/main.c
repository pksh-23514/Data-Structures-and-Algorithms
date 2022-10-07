/*
Name         : Prabhat Kiran
Date         : 05th October 2022
Description  : WAF to merge two linked list into one.
Note: Don’t swap the data present in the nodes, swap the nodes itself.
*/

#include "sll.h"

int main()
{
	Slist *head1 = NULL;		//Initialize the 'head1' to NULL.
	Slist *head2 = NULL;		//Initialize the 'head2' to NULL.
	int choice, data, temp = 0;
	
	printf("1. Insert at  List 1\n2. Insert at list 2\n3. Print list\n4. Sorted merge\n5. Exit\nEnter your choice: ");
	
	while (1)
	{
		scanf("%d", &choice);	//Ask the user for the choice of Operation.

		switch (choice)
		{
			case 1:		/* To insert the element at last node of the 1st SLL */
				{
					printf("Enter the data to be inserted at list 1 : ");
					scanf("%d", &data);						//Input the Data to be inserted at the last node of LL.
					
					if (insert_at_last (&head1, data) == FAILURE)			//Pass by Reference in function call.
						printf("INFO: Failed to Inserting the new data at last..try again\n");
				}
				break;
			case 2:		/* To insert the element at last node of the 2nd SLL */
				{
					printf("Enter the data to be inserted at list 2 : ");
					scanf("%d", &data);						//Input the Data to be inserted at the last node of LL.
					
					if (insert_at_last (&head2, data) == FAILURE)			//Pass by Reference in function call.
						printf("INFO: Failed to Inserting the new data at last..try again\n");
				}
				break;
			case 3:		/* To print the complete list (individual or merged) */
				{
					if (temp == 0)
					{
						printf("\nList 1 -> ");
						print_list (head1); 		//To print the list_1.
						printf("\n\nList 2 -> ");
						print_list (head2); 		//To print the list_2.
				
					}
					else
						print_list (head1);		//To print the merged LL.
				}
				break;
			case 4:		/* To sort the merged LL */
				{
					if (sorted_merge (&head1, &head2) == SUCCESS)			//Pass by Reference in function call.
					{
						temp = 1;	//Flag to check if the print_list() will print the individual lists or merged list.
						printf("INFO : Sorted merge Successfull\n");
					}
					else
						printf("INFO : Both list are Empty\n");
				}
				break;
			case 5:		/* To exit the Operation */
				{
					return SUCCESS;
				}
				break;
			default: printf("\nEnter the proper choice\n");		//Default case.
		}
	}
	
	return 0;
}
