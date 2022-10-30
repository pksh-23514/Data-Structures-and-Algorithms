/*
Name         : Prabhat Kiran
Date         : 25th October 2022
Description  : Count the Total number of Nodes in the given BST.
Sample Input : 20 30 40 55 70
Sample Output: 5
*/

#include "tree.h"

/* Function to Count the Nodes in the BST */

int total_nodes (Tree_t *root)
{
	if (root == NULL)	//If the BST is empty or we reach a Leaf Node; return '0'.
		return 0;
	
	//Otherwise, recursively call the function to count the Nodes in Left & Right Sub-Trees and return their Sum added with '1'.
	return (1 + (total_nodes (root->left)) + (total_nodes (root->right)));
}
