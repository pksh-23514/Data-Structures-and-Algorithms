#ifndef MAIN_H
#define MAIN_H

/* Standard Libraries Inclusion */
#include <stdio.h>
#include <stdlib.h>

/* MACRO definitions */
#define SUCCESS 0
#define FAILURE -1

/* Function Declarations of all the Operations */
void merge (int *array, int narray, int *left, int nleft, int *right, int nright);
int merge_sort (int *array, int narray);

#endif
