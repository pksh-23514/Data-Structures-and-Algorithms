#ifndef MAIN_H
#define MAIN_H

/* Standard Libraries Inclusion */
#include <stdio.h> 
#include <ctype.h>
#include <string.h>

/* MACRO definitions */
#define SIZE_STACK 50

/* Typedefs definition */
typedef struct
{
	int top;
	int stack [SIZE_STACK];
} Stack_t;

/* Function Declarations of all the Operations */
int Infix_Prefix_conversion (char *Prefix_exp, char *Infix_exp, Stack_t *stk);
int Prefix_Eval (char *Prefix_exp, Stack_t *stk);
int priority (char opr);
void push (Stack_t *stk, int data);
int peek (Stack_t *stk);
void pop (Stack_t *stk);

#endif
