#ifndef SLL_H
#define SLL_H

/* Standard Libraries Inclusion */
#include <stdio.h>
#include <stdlib.h>

/* MACRO definitions */
#define SUCCESS 0
#define FAILURE -1
#define DATA_NOT_FOUND -2
#define LIST_EMPTY -4
#define POSITION_NOT_FOUND -3

/* Typedefs definition */
typedef int data_t;
typedef struct node
{
	data_t data;
	struct node *next;
} Slist;

/* Function Declarations of all the Operations */
int insert_at_first (Slist **head, data_t data);
int sl_insert_after (Slist **head, data_t , data_t);
int sl_insert_before (Slist **head, data_t , data_t );
int sl_insert_nth (Slist **head, data_t , data_t);
int sl_delete_element (Slist **head, data_t);
void print_list (Slist *head);

#endif
