/*
Name         : Prabhat Kiran
Date         :
Description  :
Sample Input :
Sample Output:
*/

#include "tree.h"

/* Function to insert the data's in BST */
int insert_into_BST (Tree_t **root, int data)
{
	Tree_t* new = (Tree_t*) malloc (sizeof (Tree_t));
	if (new == NULL)
		return FAILURE;

	/* Insertion of a New node in BST always happens as a Leaf Node. */
	new->data = data;
	new->left = new->right = NULL;

	if (*root == NULL)
	{
		*root = new;
	}
	else
	{
		Tree_t* temp = *root;
		Tree_t* parent = NULL;

		while (temp != NULL)
		{
			parent = temp;

			if (temp->data > data)
			{
				temp = temp->left;
			}
			else if (temp->data < data)
			{
				temp = temp->right;
			}
			else
			{
				return DUPLICATE;
			}
		}

		if (parent->data > data)
		{
			parent->left = new;
		}
		else
		{
			parent->right = new;
		}
	}

	return SUCCESS;
}
