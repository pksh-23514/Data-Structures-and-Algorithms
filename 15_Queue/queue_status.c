/*
Name         : Prabhat Kiran
Date         : 15th October 2022
Description  : Check if the Queue is Full or not.
Sample Input : Nil
Sample Output: Nil
*/

#include "queue.h"

/* Fuction for Checking if the Queue is Full */

int IsQueueFull (Queue_t *q)
{
	if (q->count == q->capacity)	//If the 'count' value becomes equal to 'capacity' of the Queue, it is Full.
		return SUCCESS;
	else
		return FAILURE;
}

/* Fuction for Checking if the Queue is Empty */

int IsQueueEmpty (Queue_t *q)
{
	if (q->count == 0)		//If the 'count' has a value of '0', the Queue is Empty.
		return SUCCESS;
	else
		return FAILURE;
}
