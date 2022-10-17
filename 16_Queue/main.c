/*
Name         : Prabhat Kiran
Date         : 15th October 2022
Description  : Queue basic operations Implementation using Linked List.
*/

#include "queue.h"

int main()
{
	Queue_t *front = NULL, *rear = NULL;
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
					scanf("%d", &data);				//Input the Data to be inserted on the Queue.
					
					if (enqueue (&front, &rear, data) == FAILURE)	//Pass by Reference in function call.
					{
						printf("INFO : Enqueue Failed\n");
					}
				}
				break;
			case 2:		/* Function to Dequeue the Queue */
				{
					if (dequeue (&front, &rear) == FAILURE)		//Pass by Reference in function call.
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
					print_queue (front, rear);			//Pass by Value in function call.
				}
				break;
			case 4:		/* To exit the Operation */
				{
					return SUCCESS;
				}
				break;
			default: printf("Invalid option !!!\n");			//Default case.
		}	
	}
}
