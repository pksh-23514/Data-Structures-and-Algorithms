#ifndef SLL_H
#define SLL_H

/* Standard Libraries Inclusion */
#include <stdio.h>
#include <stdlib.h>

/* MACRO definitions */
#define SUCCESS 0
#define FAILURE -1
#define LIST_EMPTY -2
#define DATA_NOT_FOUND -3
#define LOOP_NOT_FOUND -4

/* Typedefs definition */
typedef int data_t;
typedef struct node
{
	data_t data;
	struct node *link;
} Slist;

/* Function Declarations of all the Operations */
int insert_sorted (Slist **head, data_t data);
int create_loop (Slist **head, data_t data);
void print_list (Slist *head);
int find_loop (Slist *head);

#endif
