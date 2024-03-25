#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TYPE_CAST()

typedef struct
{
    int length;
    size_t capacity;
    void *array;
} Vector;

typedef struct
{
    Vector *vec;
    size_t elmn_size;
} DynamicArray;

DynamicArray *dyaar_create_array(size_t single_size)
{
    DynamicArray *self = (DynamicArray *)malloc(sizeof(DynamicArray));
    if (self == NULL)
    {
        exit(0);
    }
    self->vec = (Vector *)malloc(sizeof(Vector));
    self->vec->capacity = single_size * 5;
    self->vec->length = 0;
    self->vec->array = malloc(single_size * 5);
    self->elmn_size = single_size; // Initialize elmn_size
    return self;
}




int check_capacity(int len, size_t current_capacity)
{
    size_t occupied_space = len * sizeof(int);
    if (occupied_space == current_capacity)
    {
        // signal to increase capacity
        return 1;
    }
    else
    {
        // don't increase
        return 0;
    }
}

void dyaar_append(DynamicArray *self, void *v) {
    int len = self->vec->length;
    if (check_capacity(len, self->vec->capacity)) {
        size_t new_capacity = (self->vec->capacity * 2);
        self->vec->array = realloc(self->vec->array, new_capacity);
        self->vec->capacity = new_capacity;
    }
    // Cast v to void pointer and pass its address to memcpy
    memcpy((char *)self->vec->array + len * self->elmn_size, v, self->elmn_size);
    self->vec->length = len + 1;
}



int main()
{
    DynamicArray *da = dyaar_create_array(sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        dyaar_append(da, &i);
    }

    // dyaar_print(da);
    // int *pt = da->array;
    // printf("\nelm @4 is %d\n", *dyaar_get_element(da, 4));
    // dyaar_remove(da, 2);
    // dyaar_print(da);
    // puts("now adding val");
    // dyaar_append(da, 69);
    // puts("after adding val");
    // dyaar_print(da);
    // free(da->array);
    free(da);

    return 0;
}