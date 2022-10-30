/*
Name         : Prabhat Kiran
Date         : 14th October 2022
Description  : Display the Complete Data stored in the Hash Table.
Sample Input : 0 → 0 | 1 → 1 | 2 → 2 | 3 → 3 | 4 → 4
Sample Output: 0 1 2 3 4
*/

#include "hash.h"

/* Function to Display all the Data stored in the Hash Table */

void display_HT (hash_t *arr, int size)
{
    hash_t *temp;
    for(int i = 0; i < size; i++)		//The loop shall run till all the Keys in the Hash Table are traversed.
    {
        printf("[%d] - %d", i, arr[i].value);	//Print the Data at the particular Key.
        temp = arr[i].link;
        while(temp)				//Check if the particular Key has a Chain or not; if present, traverse all the Nodes of the Chain and print the Data.
        {
            printf(" -> %d",temp->value);
            temp = temp->link;
        }
        printf("\n");
    }
}
