#ifndef STACK_H
#define STACK_H

/* Standard Libraries Inclusion */
#include <stdio.h>
#include <stdlib.h>

/* MACRO definitions */
#define SUCCESS 0
#define FAILURE -1

/* Typedefs definition */
typedef struct stack
{
	unsigned int capacity;
	int top;
	int *stack;
} Stack_t;

/* Function Declarations of all the Operations */
int create_stack (Stack_t *, int);
int Push (Stack_t *, int);
int Pop (Stack_t *);
int Peek (Stack_t *);
void Peep (Stack_t);
int isFull (Stack_t *);
int isEmpty (Stack_t *);

#endif
