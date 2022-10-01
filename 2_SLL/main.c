/*
Name         : Prabhat Kiran
Date         : 29th September 2022
Description  : Single Linked List operations Implementation.
Implement the functions given below :-
1. insert_after(head, gdata, ndata)
2. insert_before(head, gdata, ndata)
3. delete_element(head, gdata)
4. insert_Nth(head, ndata, n)
*/

#include "sll.h"

int main()
{
	int option, ndata, gdata, ret, n;
	Slist *head = NULL; 			//Initialize the 'head' to NULL.
	
	printf("1.Insert at first\n2.Insert after\n3.Insert before\n4.Insert Nth\n5.Delete element\n6.Print list\n7. Exit\nEnter any option : ");
    
	while(1)
	{
		scanf("%d", &option);
		switch (option)			//Ask the user for the choice of Operation.
		{
			case 1:		/* To insert the element at first node */
				{
					printf("Enter the number you have to insert : ");
					scanf("%d", &ndata);							//Input the Data to be inserted at the first node of LL.

					if (insert_at_first (&head, ndata) == FAILURE)				//Pass by Reference in function call.
					{
						printf("INFO : Insert first failure\n");
					}
				}
				break;
			case 2:		/* To insert the element after the node containing a Given data */
				{
					printf("Enter the value of gdata : ");
					scanf("%d", &gdata);							//Input the Given data to be searched in LL.
					printf("Enter the ndata that you want to insert after %d : ", gdata);
					scanf("%d", &ndata);							//Input the Data to be inserted in the LL.

					if ((ret = sl_insert_after (&head, gdata, ndata)) == DATA_NOT_FOUND) 	//Pass by Reference in function call.
					{
						printf("INFO : %d is not found at the list\n", gdata);
					}
					else if (ret == LIST_EMPTY)
					{
						printf("INFO : List is empty\n");
					}
				}
				break;
			case 3:		/* To insert the element before the node containing a Given data */
				{
					printf("Enter the value of gdata : ");
					scanf("%d", &gdata);							//Input the Given data to be searched in LL.
					printf("Enter the ndata that you want to insert before %d : ", gdata);
					scanf("%d", &ndata);							//Input the Data to be inserted in the LL.
	    	
					if ((ret = sl_insert_before (&head, gdata, ndata)) == DATA_NOT_FOUND) 	//Pass by Reference in function call.
					{
						printf("INFO %d is not found at the list\n", gdata);
					}
					else if (ret == LIST_EMPTY)
					{
						printf("INFO : List is empty\n");
					}
				}
				break;
			case 4:		/* To insert the element at Nth position of the LL */
				{
					printf("Enter the node number : ");
					scanf("%d", &n);							//Input the Given position of the node.
					printf("Enter the number that you want to insert %dth position : ", n);
					scanf("%d", &ndata);							//Input the Data to be inserted in the LL.
		    
					if ((ret = sl_insert_nth (&head, ndata, n)) == POSITION_NOT_FOUND)	//Pass by Reference in function call.
					{
						printf("INFO : %d Position not found\n", n);
					}
					else if (ret == LIST_EMPTY)
					{
						printf("INFO : List is empty\n");
					}
					else
					{
						printf("%d is successfully inserted at the position %d\n", ndata, n);
					}
				}
				break;
			case 5:		/* To delete the Specified element */
				{
					printf("Enter the element you need to delete : ");
					scanf("%d", &ndata);							//Input the Data to be deleted in the LL.

					if ((ret = sl_delete_element (&head, ndata)) == DATA_NOT_FOUND)		//Pass by Reference in function call.
					{
						printf("INFO : Element is not found\n");
					}
					else if (ret == LIST_EMPTY)
					{
						printf("INFO : List is empty\n");
					}
					else
					{
						printf("Element Successfully deleted\n");
					}
				}
				break;
			case 6:		/* To print the complete list */
				{
					print_list (head);		//Pass by Value in function call.
				}
				break;
			case 7:		/* To exit the Operation */
				{
					return SUCCESS;
				}
				break;
			default: printf("Enter proper choice !!\n");	//Default case.
		}
	}

	return SUCCESS;
}
