/*
Name         : Prabhat Kiran
Date         : 15th October 2022
Description  : Queue basic operations Implementation using Arrays.
*/

#include "queue.h"

int create_queue (Queue_t *q, int size)
{
	q->capacity = size;		//The size of the Queue is updated.
	q->front = q->rear = -1;	//The default values of 'front' and 'rear' positions are '-1'.
	q->count = 0;			//The number of elements in Queue are initially '0'.

	q->Que = (int*) malloc (size * sizeof (int));	//Allocate the memory to the Array as per the size of the Queue.
	if (q->Que == NULL)				//Error Handling.
		return FAILURE;
	else
		return SUCCESS;
}

int main()
{
	Queue_t q;	//Declare the Queue.
	int size;
	
	printf("Enter the size of the queue : ");
	scanf("%d", &size);				//Ask for the Size of the Queue.
	
	if (create_queue (&q, size) == FAILURE)		//To initialize the Queue members.
	{
		printf("INFO : Queue not created\n");
		return FAILURE;
	}
	
	int choice, data;
	printf("1. Enqueue\n2. Dequeue\n3. Print Queue\n4. Exit\nEnter the option : ");

	while (1)
	{
		scanf("%d", &choice);	//Ask the user for the choice of Operation.

		switch (choice)
		{
			case 1:		/* Function to Enqueue the Queue */
				{
					printf("Enter the element you want to insert : ");
					scanf("%d", &data);			//Input the Data to be inserted on the Queue.
					
					if (enqueue (&q, data) == FAILURE)	//Pass by Reference in function call.
					{
						printf("INFO : Queue full\n");
					}
				}
				break;
			case 2:		/* Function to Dequeueue the queue */
				{
					if (dequeue (&q) == FAILURE)		//Pass by Reference in function call.
					{
						printf("INFO : Queue is empty\n");
					}
					else
					{
						printf("INFO : Dequeue successfull\n");
					}
				}
				break;
			case 3:		/* Function to print the queue */
				{
					print_queue (q);			//Pass by Value in function call.
				}
				break;
			case 4:		/* To exit the Operation */
				{
					return SUCCESS;
				}
				break;
			default: printf("Invalid option !!!\n");		//Default case.
		}
	}
}
