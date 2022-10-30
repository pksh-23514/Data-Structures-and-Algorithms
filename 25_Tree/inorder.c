/*
Name         : Prabhat Kiran
Date         : 20th October 2022
Description  : Print the Tree using In-order Traversal Technique.
=> In-order Traversal -> Left Child - Root - Right Child.
Sample Input : 100 50 20 55 180 170 200
Sample Output: 20 50 55 100 170 180 200
*/

#include "tree.h"

/* Function to Print the Data in In-order fashion */

int inorder (Tree_t *root)
{
	/* If the Root is not equal to NULL */
	if (root != NULL)
	{
		/* Calling the function recursively  */
		inorder(root -> left);
		
		/* Printing the data */
		printf("%d ", root -> data);
		
		/* Calling the function recursively  */
		inorder(root -> right);
	}
}
