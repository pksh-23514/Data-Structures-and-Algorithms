/*
Name         : Prabhat Kiran
Date         : 20th October 2022
Description  : Find the Maximum Value stored in the Node of a BST.
Sample Input : 20 55 50 170 200 180 100
Cases:
1. Tree empty - Return BST_EMPTY.
2. Tree not empty.
Sample Output: 200
*/

#include "tree.h"

/* Function to Find the Maximum Node Data in the Tree */

int findmax (Tree_t * root)
{
	if (root == NULL)				//If the Tree is empty; there cannot be any Maximum value present in the Tree.
		return FAILURE;

	if (root->right == NULL)			//If the Right-most Leaf Node is reached, that is the Node containing the Maximum value.
		return (root->data);			//Return the Node Data to the Caller function.
	else
		return (findmax (root->right));		//Otherwise, recursively call the 'findmax()' to reach the Right-most Leaf Node of the Tree.
}
