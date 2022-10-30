/*
Name         : Prabhat Kiran
Date         : 20th October 2022
Description  : Find the Minimum Value stored in the Node of a BST.
Sample Input : 20 55 50 170 200 180 100
Cases:
1. Tree empty - Return BST_EMPTY.
2. Tree not empty.
Sample Output: 20
*/

#include "tree.h"

/* Function to Find the Minimum Node Data in the Tree */

int findmin (Tree_t * root)
{
	if (root == NULL)				//If the Tree is empty; there cannot be any Minimum value present in the Tree.
		return FAILURE;

	if (root->left == NULL)				//If the Left-most Leaf Node is reached, that is the Node containing the Minimum value.
		return (root->data);			//Return the Node Data to the Caller function.
	else
		return (findmin (root->left));		//Otherwise, recursively call the 'findmin()' to reach the Left-most Leaf Node of the Tree.
}
