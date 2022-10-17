/*
Name         : Prabhat Kiran
Date         : 15th October 2022
Description  : Print all the elements on the Queue.
Sample Input : Nil
Cases:
1. Queue empty → QUEUE_EMPTY.
2. Queue not empty → Print the elements in the queue.
Sample Output: Front -> 10 20 30 40 <- Rear
*/

#include "queue.h"

/* Function to Print the Queue */

int print_queue (Queue_t *front, Queue_t *rear)
{
	/* Checking the Queue is empty or not */
	if (front == NULL)
	{
		printf("INFO : Queue is Empty\n");
		return FAILURE;
	}
	
	printf("Front -> ");
	while (front)
	{
		/* Printing the queue till it reaches end */
		printf("%d ", front -> data);
		front = front -> link;
		
		if (rear -> link != front)
		{
			printf("-> ");
		}
		else		//The loop shall terminate if the 'fron' and 'rear' pointer are pointing to the same Node of the Queue.
			break;
	}
	
	printf("<- Rear\n");
	return SUCCESS;
}
