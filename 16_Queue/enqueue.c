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

int enqueue (Queue_t **front, Queue_t **rear, int data)
{
	Queue_t* new = (Queue_t*) malloc (sizeof (Queue_t));	//Dynamic memory allocation to insert the new element.
	if (new == NULL)					//Error Handling.
		return FAILURE;

	new->data = data;

	if (*front == NULL)			//If the Queue is Empty, the 'front' and 'rear' shall point to the new Node.
	{
		new->link = new;		//Update the 'new' to point to itself to make the LL as Circular.
		*front = *rear = new;		//Update the 'front' and 'rear' to point to the new Node.
		return SUCCESS;
	}

	(*rear)->link = new;			//Otherwise, link the new Node to the rear end of the Queue.
	*rear = new;				//Update the 'rear' to point to the new Node.
	new->link = *front;			//Link the new Node to the front end of the Queue.
	return SUCCESS;
}
