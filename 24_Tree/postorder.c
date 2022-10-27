/*
Name         : Prabhat Kiran
Date         : 20th October 2022
Description  : Print the Tree using Post-order Traversal Technique.
=> Post-order Traversal -> Left Child - Right Child - Root.
Sample Input : 100 50 20 55 180 170 200
Sample Output: 20 55 50 170 200 180 100
*/

#include "tree.h"

/* Function to Print the Node Data in Post-order fashion */

int postorder (Tree_t *root)
{
	if (root == NULL)		//If the Tree is empty or reaches a Leaf Node, the function shall return.
		return FAILURE;

	postorder (root->left);		//Recusive call to traverse the Left Subtree from the Current Node.

	postorder (root->right);	//Recursive call to traverse the Right Subtree from the Current Node.

	printf ("%d ", root->data);	//Print the Current Node Data.

	return SUCCESS;
}
