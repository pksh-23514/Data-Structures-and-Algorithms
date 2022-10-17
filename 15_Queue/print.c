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

int print_queue (Queue_t q)
{
	/* Checking the Queue is empty or not */
	if (IsQueueEmpty (&q) == SUCCESS)
	{
		printf("INFO : Queue is empty\n");
		return FAILURE;
	}

	printf("Front -> ");
	do
	{
		/* Printing the queue till it reaches end */
		printf("%d ", q.Que [q.front]);
		q.front = (q.front + 1) % q.capacity;
	} while (--(q.count));
	
	printf("<- Rear\n");
	
	/* Returning SUCCESS */
	return SUCCESS;
}
