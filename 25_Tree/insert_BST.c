/*
Name         : Prabhat Kiran
Date         : 20th October 2022
Description  : Insert a New Data in the Binary Search Tree.
Sample Input : 20 50 70 and "65"
Sample Output: 20 50 65 70
*/

#include "tree.h"

/* Function to Insert the Data in BST */

int insert_into_BST (Tree_t **root, int data)
{
	Tree_t* new = (Tree_t*) malloc (sizeof (Tree_t));	//Dynamice memory allocation to create the Node.
	if (new == NULL)	//Error Handling.
		return FAILURE;

	/* Insertion of a New node in BST always happens as a Leaf Node. */
	new->data = data;
	new->left = new->right = NULL;

	if (*root == NULL)	//If the Tree is empty; the New Node is the Root Node.
	{
		*root = new;
	}
	else	//If the Tree is not empty; we traverse to the particular Leaf Node position where the Node shall be inserted.
	{
		Tree_t* temp = *root;	//To track the Current Node.
		Tree_t* parent = NULL;	//To track the Parent Node.

		while (temp != NULL)	//The loop shall run till we reach the particular Leaf Node position.
		{
			parent = temp;	//Update the 'parent' before moving to the Next node.

			if (temp->data > data)		//If the Current node data is greater than the given Data; traverse to the Left Sub-tree.
			{
				temp = temp->left;
			}
			else if (temp->data < data)	//If the Current node data is smaller than the given Data; traverse to the Right Sub-tree.
			{
				temp = temp->right;
			}
			else	//If the Current node data matches with the given Data; the operation shall terminate as it violates BST rule.
			{
				return DUPLICATE;
			}
		}

		if (parent->data > data)	//If the Parent node Data is greater than given Data; link the New node as the Left Child.
		{
			parent->left = new;
		}
		else	//If the Parent node Data is smaller than given Data; link the New node as the Right Child.
		{
			parent->right = new;
		}
	}

	return SUCCESS;
}
