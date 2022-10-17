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

int dequeue (Queue_t *q)
{
	if (IsQueueEmpty (q) == SUCCESS)	//If the Queue is Empty, the Dequeue function cannot be performed.
		return FAILURE;

	q->front = (q->front + 1) % q->capacity;	//Update the 'front' of the Queue to point to the next element in a Circular fashion using '%' operator.
	q->count -= 1;					//Decrease the number of elements in the Queue by 1.

	return SUCCESS;
}
