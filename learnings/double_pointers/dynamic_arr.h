#ifndef DYNAMIC_ARRAY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int length;
    size_t capacity;
    int *array;
} DynamicArray;

DynamicArray *dyaar_create_array();

void dyaar_print(DynamicArray *self);

int check_capacity(int len, size_t current_capacity);

void dyaar_append(DynamicArray *self, int v);
int *dyaar_get_element(DynamicArray *self, int index);
void dyaar_remove(DynamicArray *self, int index);
void dyaar_free(DynamicArray *self);
#endif