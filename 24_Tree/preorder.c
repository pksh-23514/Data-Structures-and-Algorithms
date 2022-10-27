/*
Name         : Prabhat Kiran
Date         : 20th October 2022
Description  : Print the Tree using Pre-order Traversal Technique.
=> Pre-order Traversal -> Root - Left Child - Right Child.
Sample Input : 100 50 20 55 180 170 200
Sample Output: 100 50 20 55 180 170 200
*/

#include "tree.h"

/* Function to Print the Node Data in Pre-order fashion */

int preorder (Tree_t *root)
{
	if (root == NULL)		//If the Tree is empty or reaches a Leaf Node, the function shall return.
		return FAILURE;

	printf ("%d ", root->data);	//Print the Current Node Data.

	preorder (root->left);		//Recusive call to traverse the Left Subtree from the Current Node.

	preorder (root->right);		//Recursive call to traverse the Right Subtree from the Current Node.

	return SUCCESS;
}
