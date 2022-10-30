/*
Name         : Prabhat Kiran
Date         : 25th October 2022
Description  : Find the Height of the given BST.
Sample Input : 20 30 40
Sample Output: 2
*/

#include "tree.h"

/* Function to Find the Maximum of the 2 Values */

int max (int num1, int num2)
{
	return ((num1 > num2) ? num1 : num2);
}

/* Function to Find the Height of the BST */

int find_height (Tree_t *root)
{
	if (root == NULL)	//If the BST is empty or reaches a Leaf Node; return the Height as '0'.
		return 0;

	//Recursively call the function to find the Height of the Left & Right Sub-Trees from the Current node and return the Greater value added with '1'.
	return ((max ((find_height (root->left)), (find_height (root->right)))) + 1);
}
