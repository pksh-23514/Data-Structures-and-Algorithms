/*
Name         : Prabhat Kiran
Date         : 20th October 2022
Description  : Print the Tree using In-order Traversal Technique.
=> In-order Traversal -> Left Child - Root - Right Child.
Sample Input : 100 50 20 55 180 170 200
Sample Output: 20 50 55 100 170 180 200
*/

#include "tree.h"

/* Function to Print the Node Data in In-order fashion */

int inorder (Tree_t *root)
{
	if (root == NULL)		//If the Tree is empty or reaches a Leaf Node, the function shall return.
		return FAILURE;

	inorder (root->left);		//Recusive call to traverse the Left Subtree from the Current Node.

	printf ("%d ", root->data);	//Print the Current Node Data.

	inorder (root->right);		//Recursive call to traverse the Right Subtree from the Current Node.

	return SUCCESS;
}
