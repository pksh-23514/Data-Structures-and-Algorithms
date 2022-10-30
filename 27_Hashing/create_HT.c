/*
Name         : Prabhat Kiran
Date         : 14th October 2022
Description  : Create an Empty Hash Table of the specified Size.
Sample Input : HT and "size = 5"
Sample Output: 0 → -1 | 1 → -1 | 2 → -1 | 3 → -1 | 4 → -1
*/

#include "hash.h"

/* Function to Initialize the Default Values in the Hash Table */

void create_HT (hash_t *HT, int size)
{
	for (int i = 0; i < size; i++)	//To cover all the Structure variables in the Array of Structures.
	{
		HT [i].index = i;	//The corresponding 'index' value shall be same as the Array element index.
		HT [i].value = -1;	//The corresponding 'value' shall be '-1' initially signifying that the 'index' is empty.
		HT [i].link = NULL;	//The corresponding 'link' shall be 'NULL' initially.
	}

	return;
}
