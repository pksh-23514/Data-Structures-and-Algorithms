/*
Name         : Prabhat Kiran
Date         : 15th October 2022
Description  : Dequeue the Top-most element on the Queue.
Sample Input : Front -> 10 20 30 40 <- Rear
Cases:
1. Queue Empty → Return QUEUE_EMPTY.
2. Queue Not Empty → Delete the data from the front end.
Sample Output: Front -> 20 30 40 <- Rear
*/

#include "queue.h"

/* Function to Deque the element */

int dequeue (Queue_t **front, Queue_t **rear)
{
	if (*front == NULL)		//If the Queue is Empty, the Dequeue function cannot be performed.
		return FAILURE;

	if ((*front)->link == *front)	//If the Queue has only one Node, 'front' and 'rear' shall be made NULL after deleting the Node.
	{
		free (*front);
		*front = *rear = NULL;
		return SUCCESS;
	}
	
	*front = (*front)->link;	//Update the 'front' to point to the next Node.
	free ((*rear)->link);		//Delete the Node at the previous 'front' position.
	(*rear)->link = *front;		//Update the 'rear' to point to the new 'front' position to make the LL as Circular.
	return SUCCESS;
}
