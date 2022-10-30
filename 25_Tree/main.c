/*
Name         : Prabhat Kiran
Date         : 25th October 2022
Description  : Implementation of Deletion of a Node from Binary Search Tree.
*/

#include "tree.h"

int status;	//To track if the Node is Deleted successfully or not.

int main()
{
	/* Intializing the Root with NULL */
	Tree_t *root = NULL;
	int result;
	/* Declaring the Variables */
	int option, data;

	printf("1. insert BST\n2. in order Traversal\n3.BST Delete\n4.Exit\n");
	printf("Enter the option: ");
	while (1)
	{
		scanf("%d", &option);	//Ask the user for the Choice.

		switch (option)
		{
			case 1:		/* Insert a Data in the BST */
				{
					/* Reading the data from the user */
					printf("Enter the data to insert into the BST : ");
					scanf("%d", &data);		//Input the Data to be Inserted in the BST.
					
					/* Calling the function to insert the element */
					if ((result = insert_into_BST (&root, data)) == DUPLICATE)
					{
						printf("INFO : Duplicate found\n");
					}
					else if (result == FAILURE)
					{
						printf("INFO : Node not created\n");
					}
				}
				break;
			case 2:		/* Function to Printing the Data in In-order form */
				{
					inorder (root);
					printf("\n");
				}
				break;
			case 3:		/* Function to Delete the Data from the BST */
				{
					printf("Enter the data to be deleted: ");
					scanf("%d", &data);		//Input the Data to be Deleted from the BST.
					
					if (root)
					{
						root = delete_BST (root, data);
						if (status)
							printf("INFO : Element deleted successfully\n");
						else
							printf("INFO : Element not found\n");
					}
					else
						printf("INFO : Tree is empty\n");
				}
				break;
			case 4:		/* To exit the Operation */
				{
					return SUCCESS;
				}
				break;
			default: printf("Invalid Option\n");	//Default case.
		}
		
		/* If user press y means loop will continue */
	}
	
	return 0;
}
