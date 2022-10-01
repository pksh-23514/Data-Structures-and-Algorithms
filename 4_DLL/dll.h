#ifndef DLL_H
#define DLL_H

/* Standard Libraries Inclusion */
#include <stdio.h>
#include <stdlib.h>

/* MACRO definitions */
#define SUCCESS 0
#define FAILURE -1
#define LIST_EMPTY -2
#define DATA_NOT_FOUND -3

/* Typedefs definition */
typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
} Dlist;

/* Function Declarations of all the Operations */
int dl_insert_last (Dlist **head, Dlist **tail, int data);
int dl_insert_after (Dlist **head, Dlist **tail, int gdata, int ndata);
int dl_insert_before (Dlist **head, Dlist **tail, int gdata, int ndata);
int dl_delete_element (Dlist **head, Dlist **tail, int data);
void print_list (Dlist *head);
#endif
