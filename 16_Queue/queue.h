#ifndef QUEUE_H
#define QUEUE_H

/* Standard Libraries Inclusion */
#include <stdio.h>
#include <stdlib.h>

/* MACRO definitions */
#define SUCCESS 0
#define FAILURE -1

/* Typedefs definition */
typedef struct Que
{
	int data;
	struct Que *link;
} Queue_t;

/* Function Declarations of all the Operations */
int enqueue (Queue_t **, Queue_t **, int);
int dequeue (Queue_t **, Queue_t **);
int print_queue (Queue_t *, Queue_t *);

#endif
