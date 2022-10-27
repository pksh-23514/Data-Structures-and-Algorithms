/*
Name         : Prabhat Kiran
Date         : 20th October 2022
Description  : Binary Search Tree basic operations Implementation.
*/

#include "tree.h"

int main()
{
	/* Intializing the root with NULL */
	Tree_t *root = NULL;
	int result;
	/* Declaring the variables */
	int option, data;
	
	printf("1. insert BST\n2. in order Traversal\n3. pre order Traversal\n4. post order Traversal\n5. BST Search\n6. Find minimum\n7. Find maximum\n");
	printf("Enter the option: ");
	
	while (1)
	{
		scanf("%d", &option);	//Ask the user for the choice of Operation.
		
		switch (option)
		{
			case 1:		/* Insert a given Data in the BST */
				{
					/* Reading the Data from the User */
					printf("Enter the data to insert into the BST : ");
					scanf("%d", &data);
					
					/* Calling the function to Insert the element */
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
			case 2:		/* Print the Data in In-order form */
				{
					inorder (root);
					printf("\n");
				}
				break;
			case 3:		/* Print the Data in Pre-order form */
				{
					preorder (root);
					printf("\n");
				}
				break;
			case 4:		/* Print the Data in Post-order form */
				{
					postorder (root);
					printf("\n");
				}
				break;
			case 5:		/* Search a given Data in the BST */
				{
					printf("Enter the element to be searched: ");
					scanf("%d", &data);		//Read the Data from the User.
					
					result = search_BST (root, data);
					if (result == NOELEMENT)
					{
						printf("INFO : Data not found\n");
					}
					else if (result == FAILURE)
					{
						printf("INFO : Tree is empty\n");
					}
					else
					{
						printf("INFO : Data found\n");
					}
				}
				break;
			case 6:		/* Find the Minimum value in the BST */
				{
					result = findmin (root);
					if (result == FAILURE)
					{
						printf("INFO : Tree is empty\n");
					}
					else
					{
						printf("INFO : Minimum value in the tree is %d\n", result);
					}
				}
				break;
			case 7:		/* Find the Maximum value in the BST */
				{
					result = findmax (root);
					if (result == FAILURE)
					{
						printf("INFO : Tree is empty\n");
					}
					else
					{
						printf("INFO : Maximum value in the tree is %d\n", result);
					}
				}
				break;
			case 8:		/* To exit the Operation */
				{
					return SUCCESS;
				}
				break;
			default: printf("Invalid Option\n");	//Default case.
		}

		/* If User press 'y' means loop will continue */
	}
	return 0;
}
