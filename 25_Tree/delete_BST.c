/*
Name         : Prabhat Kiran
Date         :
Description  :
Sample Input :
Sample Output:
*/

#include "tree.h"

extern int status;
/* Function to delete the node  */
Tree_t * delete_BST(Tree_t * root, int data)
{
	Tree_t* temp = root;
	Tree_t* parent = NULL;

	while (temp != NULL)	//The loop shall run to search the Node containing the given 'data' to be deleted.
	{
		if (temp->data == data)
			break;
		else if (temp->data > data)
			temp = temp->left;		//Left Sub-tree search.
		else
			temp = temp->right;		//Right Sub-tree search.
		parent = temp;				//Update the 'parent' to store the address of Current node.
	}

	if (temp == NULL)	//If the loop terminates normally, the given 'data' is not present in the Tree.
	{
		status = 0;
		return root;
	}
	else
	{
		if ((temp->left == NULL) && (temp->right == NULL))	//If the data is found in a Leaf Node.
		{
			if (temp == root)		//If the Root is the only Node in the Tree, update it to NULL.
			{
				root = NULL;
			}
			else
			{
				if (parent->left == temp)	//If the node to be deleted is the Left Leaf Node of 'parent'; make the Left pointer of 'parent' as NULL.
				{
					parent->left = NULL;
					printf ("Here1\n");
				}
				else	//If the node to be deleted is the Right Leaf Node of 'parent'; make the Right pointer of 'parent' as NULL.
				{
					parent->right = NULL;
					printf ("Here2\n");
				}
			}

			free (temp);	//Free the Current Node.
			status = 1;		//Update the 'status' as 1; to signify the Node deletion.
			return root;	//Return the 'root' to the updated Tree.
		}
		else if ((temp->left == NULL) || (temp->right == NULL))		//If the data is found in the Node having either a Left or Right Child.
		{
			Tree_t* child = (temp->left != NULL) ? temp->left : temp->right;	//To get the Child node of the Node to be deleted.

			if (temp == root)	//If the Root node is to be deleted; update the 'root' to 'child'.
			{
				root = child;
			}
			else
			{
				if (parent->left == temp)	//If the node to be deleted is the Left Child of 'parent'; update the Left pointer of 'parent' to point to 'child'.
				{
					parent->left = child;
				}
				else	//If the node to be deleted is the Right Child of 'parent'; update the Right pointer of 'parent' to point to 'child'.
				{
					parent->right = child;
				}
			}

			free (temp);	//Free the Current Node.
			status = 1;		//Update the 'status' as 1; to signify the Node deletion.
			return root;	//Return the 'root' to the updated Tree.
		}
		else if ((temp->left != NULL) && (temp->right != NULL))		//If the data is found in the Node having both Left and Right Child.
		{
			Tree_t* prev = NULL;			//To store the Inorder Successor's Parent.
			Tree_t* curr = temp->right;		//To store the Inorder Successor.

			while (curr->left != NULL)		//Computing the Inorder Successor for the Node to be deleted.
			{
				prev = curr;
				curr = curr->left;
			}

			if (prev == NULL)	//If the Inorder Successor is the immediate Right Child of the Node to be deleted.
			{
				temp->right = curr->right;	//Update the Right pointer of the Node to be deleted with the Right Child of the Inorder Successor.
			}
			else	//Otherwise, update the Left pointer of the Parent of the Inorder Successor to point to the Right Child of the Inorder Successor.
			{
				prev->left = curr->right;
			}

			temp->data = curr->data;	//Update the Node to be deleted with value of the Inorder Successor.
			free (curr);	//Free the Inorder Successor.
			status = 1;		//Update the 'status' as 1; to signify the Node deletion.
			return root;	//Return the 'root' to the updated Tree.
		}
	}
}
