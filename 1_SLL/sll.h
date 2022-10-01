#ifndef SLL_H
#define SLL_H

/* Standard Libraries Inclusion */
#include <stdio.h>
#include <stdlib.h>

/* MACRO definitions */
#define SUCCESS 0
#define FAILURE -1

/* Typedefs definition */
typedef int data_t;
typedef struct node
{
	data_t data;
	struct node* link;
} Slist;

/* Function Declarations of all the Operations */
int find_node (Slist *head, data_t key);
int insert_at_last (Slist **head, data_t );
int insert_at_first (Slist **head, data_t);
int sl_delete_list (Slist **);
int sl_delete_last (Slist **);
int sl_delete_first (Slist **);
void print_list (Slist *head);

#endif
