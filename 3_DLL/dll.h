#ifndef DLL_H
#define DLL_H

/* Standard Libraries Inclusion */
#include <stdio.h>
#include <stdlib.h>

/* MACRO definitions */
#define SUCCESS 0
#define FAILURE -1

/* Typedefs definition */
typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
} Dlist;

/* Function Declarations of all the Operations */
int dl_insert_first (Dlist **head, Dlist **tail, int data);
int dl_insert_last (Dlist **head, Dlist **tail, int data);
int dl_delete_first (Dlist **head, Dlist **tail);
int dl_delete_last (Dlist **head, Dlist **tail);
int dl_delete_list (Dlist **head, Dlist **tail);
void print_list (Dlist *head);

#endif
