#ifndef MAIN_H
#define MAIN_H

/* Standard Libraries Inclusion */
#include <stdio.h>
#include <stdlib.h>

/* MACRO definitions */
#define DATA_NOT_FOUND -1

/* Typedefs definition */
typedef int data_t;

/* Function Declarations of all the Operations */
data_t binarySearch_recursive (data_t *arr, data_t size, data_t key, data_t first, data_t last);

#endif
