/*
Name         : Prabhat Kiran
Date         : 14th October 2022
Description  : Hash Table operations Implementation.
*/

#include "hash.h"

int main()
{
	int size, data, choice, index;
	char opt;
	printf("Enter the size of arr: ");
	scanf("%d", &size);		//Ask the user for the Size of the Hash Table.

	/* Declare the Hash Table */
	hash_t arr [size];
	
	/* Create the Hash Table with the Default Values */
	create_HT (arr, size);

	printf("1. Insert data in HT\n2. Search data in HT\n3. Delete data from HT\n4. Destroy HT\n5. Display HT\n6. Exit\nEnter you choice : ");
	
	while(1)
	{
		scanf("%d", &choice);	//Ask the user for the choice of Operation.
		switch (choice)
		{
			case 1:		/* Insert the Data in the Hash Table */
				{
					printf("Enter the data: ");
					scanf("%d", &data);		//Input the Data to be inserted.
					
					if (insert_HT (arr, data, size) == FAILURE)
					{
						printf("INFO : Insert data is Failure\n");
					}
				}
				break;
			case 2:		/* Search the Data in the Hash Table */
				{
					printf("Enter the data: ");
					scanf("%d", &data);		//Input the Data to be searched.
					
					if (search_HT (arr, data, size) == DATA_NOT_FOUND)
					{
						printf("INFO : Data not found\n");
					}
					else
					{
						printf("INFO : %d is found at the index %d\n", data, data % size);
					}
				}
				break;
			case 3:		/* Delete the Data in the Hash Table */
				{
					printf("Enter the data: ");
					scanf("%d", &data);		//Input the Data to be deleted.
					
					if (delete_element (arr, data, size) == DATA_NOT_FOUND)
					{
						printf("INFO : Data is not found\n");
					}
					else
					{
						printf("INFO : %d is deleted successfully\n",data);
					}
				}
				break;
			case 4:		/* Delete the Complete Hash Table */
				{
					if (destroy_HT (arr,size) == SUCCESS)
					{
						printf("INFO: Hashtable deleted successfully\n");
					}
					else
					{
						printf("INFO: Delete hashtable is Failure\n");
					}
				}
				break;
			case 5:		/* Display the Hash Table */
				{
					display_HT (arr, size);
				}
				break;
			case 6:		/* To exit the Operation */
				{
					return SUCCESS;
				}
			default: printf("Invalid input\n");		//Default case.
		}
	}
}
