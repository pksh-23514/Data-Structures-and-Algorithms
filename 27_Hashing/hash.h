#ifndef HASH_H
#define HASH_H

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
    int index;
    int value;
    struct node *link;
} hash_t;

/* Function Declarations of all the Operations */
void create_HT (hash_t *, int);
int insert_HT (hash_t *arr, int element, int size);
int search_HT (hash_t *arr, int element, int size);
int delete_element (hash_t *arr, int element, int size);
int destroy_HT (hash_t *arr, int size);
void display_HT (hash_t *arr, int size);

#endif
