/*
Name         : Prabhat Kiran
Date         : 30th September 2022
Description  : Double Linked List operations Implementation.
Implement the functions given below :-
1. dll_insert_after(head, tail, gdata, ndata)
2. dll_insert_before(head, gdata, ndata)
3. dll_delete_element(head, tail, gdata)
*/

#include "dll.h"

int main()
{
	int option, data, gdata, ret;
	Dlist *head = NULL; 	//Initialize the 'head' to NULL.
	Dlist *tail = NULL; 	//Initialize the 'tail' to NULL.
	
	printf("1. Insert last\n2. Insert before\n3. Insert after\n4. Delete element\n5. Print list\n6. Exit\nEnter your choice : ");
	
	while(1)
	{
		scanf("%d", &option);	//Ask the user for the choice of Operation.
		
		switch (option)
		{
			case 1:		/* To insert the element at last node */
				{
					printf("Enter the data you have to insert : ");
					scanf("%d", &data);								//Input the Data to be inserted at the last node of LL.
					
					if (dl_insert_last (&head, &tail, data) == -1)					//Pass by Reference in function call.
					{
						printf("INFO : Insert last Failure\n");
					}
				}
				break;
			case 2:		/* To insert the element before the node containing a Given data */
				{
					printf("Enter the gdata : ");
					scanf("%d", &gdata);								//Input the Given data to be searched in LL.
					printf("Enter the number you have insert before %d : ", gdata);
					
					scanf("%d", &data);								//Input the Data to be inserted in the LL.
					
					if ((ret = dl_insert_before (&head, &tail, gdata, data)) == LIST_EMPTY)		//Pass by Reference in function call.
					{
						printf( "INFO : List Empty\n" );
					}
					else if (ret == DATA_NOT_FOUND)
					{
						printf( "INFO : Data not found\n" );
					}
					else
					{
						printf( "INFO : Insert before Successfull\n" );
					}
				}
				break;
			case 3:		/* To insert the element after the node containing a Given data */
				{
					printf("Enter the gdata : ");
					scanf("%d", &gdata);								//Input the Given data to be searched in LL.
					printf("Enter the number you have to insert after %d : ", gdata);
					
					scanf("%d", &data);								//Input the Data to be inserted in the LL.
					
					if ((ret = dl_insert_after (&head, &tail, gdata, data)) == LIST_EMPTY)		//Pass by Reference in function call.
					{
						printf( "INFO : List Empty\n" );
					}
					else if (ret == DATA_NOT_FOUND)
					{
						printf( "INFO : Data not found\n" );
					}
					else
					{
						printf( "INFO : Insert after Successfull\n" );
					}
				}
				break;
			case 4:		/* To delete the Specified element */
				{
					printf("Enter the element you have to delete : ");
					scanf("%d", &data); 								//Input the Data to be deleted in the LL.
					
					if ((ret = dl_delete_element (&head, &tail, data)) == LIST_EMPTY)		//Pass by Reference in function call.
					{
						printf( "INFO : List Empty\n" );
					}
					else if (ret == DATA_NOT_FOUND)
					{
						printf( "INFO : Data not found\n" );
					}
					else
					{
						printf( "INFO : Delete element Successfull\n" );
					}
				}
				break;
			case 5:		/* To print the complete list */
				{
					print_list (head);		//Pass by Value in function call.
				}
				break;
			case 6:		/* To exit the Operation */
				{
					return SUCCESS;
				}
				break;
			default: printf("Enter proper choice !!\n");	//Default case.
		}
	}
	
	return SUCCESS;
}
