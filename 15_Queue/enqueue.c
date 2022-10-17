/*
Name         : Prabhat Kiran
Date         : 15th October 2022
Description  : Enqueue the End-most element on the Queue.
Sample Input : Front -> 10 20 30 <- Rear
Cases:
1. Queue Full → Return QUEUE_FULL.
2. Queue not full → Add data into queue.
Sample Output: Front -> 10 20 30 40 <- Rear
*/

#include "queue.h"

/* Function to Insert the element */

int enqueue (Queue_t *q, int data)
{
	if (IsQueueFull (q) == SUCCESS)		//If the Queue is Full, the Enqueue function cannot be performed.
		return FAILURE;

	if (q->front == -1)			//If the Queue is Empty, the 'front' shall also be updated to the position '0'.
	{
		q->front = 0;
	}

	q->rear = (q->rear + 1) % q->capacity;	//Update the 'rear' of the Queue to point to the new element in a Circular fashion using '%' operator.
	q->Que [q->rear] = data;		//Insert the new element at the 'rear' position of the Queue.
	q->count += 1;				//Increase the number of elements in the Queue by 1.
	
	return SUCCESS;
}
