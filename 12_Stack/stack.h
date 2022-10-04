#ifndef STACK_H
#define STACK_H

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
	struct node *link;
} Stack_t;

/* Function Declarations of all the Operations */
int Push (Stack_t **top, data_t data);
int Pop (Stack_t **top);
int Peek (Stack_t **top);
int Peep (Stack_t *top);

#endif
