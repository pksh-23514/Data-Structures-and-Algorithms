/*
Name         : Prabhat Kiran
Date         : 20th October 2022
Description  : Search a given Data in the Binary Search Tree.
Sample Input : 20 50 65 70 and "65"
Sample Output: Data Found.
*/

#include "tree.h"

/* Function to Iteratively search for the given Data */

int search_BST (Tree_t * root, int data)
{
	if (root == NULL)	//If the Tree is empty, the Data cannot be found in the BST.
		return FAILURE;

	while (root != NULL)	//The loop shall run till we reach a Leaf node.
	{
		if (root->data > data)		//If the Current node Data is greater than the given Data; search in the Left Sub-Tree.
		{
			root = root->left;
		}
		else if (root->data < data)	//If the Current node Data is smaller than the given Data; search in the Right Sub-Tree.
		{
			root = root->right;
		}
		else	//If the Current node Data matches with the given Data; the operation shall terminate.
		{
			return SUCCESS;
		}
	}

	//If the loop terminates without returning in any iteration; the given Data is not present in the BST.
	return NOELEMENT;
}
