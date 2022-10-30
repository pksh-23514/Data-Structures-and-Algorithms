/*
Name         : Prabhat Kiran
Date         : 25th October 2022
Description  : Find the Height and Number of Nodes in the Binary Search Tree.
*/

#include "tree.h"

int status;

int main()
{
	/* Intializing the root with NULL */
	Tree_t *root = NULL;
	int result;
	/* Declaring the variables */
	int option, data;
	
	printf("1. insert BST\n2. in order Traversal\n3. Total nodes\n4. Find height\n5.Exit\n");
	printf("Enter the option: ");
	while (1)
	{
		scanf("%d", &option);	//Ask the user for the Choice.
		
		switch (option)
		{
			case 1:		/* Insert the Element in the BST */
				{
					/* Reading the Data from the user */
					printf("Enter the data to insert into the BST : ");
					scanf("%d", &data);
					
					/* Calling the function to Insert the Element */
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
			case 2:		/* Function to Printing the Data in In-Order fashion */
				{
					inorder (root);
					printf("\n");
				}
				break;
			case 3:		/* Function to Count the Nodes in the BST */
				{
					if ((result = total_nodes (root)) == 0)
					{
						printf("INFO : Tree is empty\n");
					}
					else
						printf("INFO : Total no.of nodes are %d\n", result);
				}
				break;
			case 4:		/* Function to find the Height of the BST */
				{
					if ((result = find_height (root)) == 0)
					{
						printf("INFO : Tree is empty\n");
					}
					else
					{
						printf("INFO : Height of the tree is %d\n", result);
					}
				}
				break;
			case 5:		/* To exit the Operation */
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
