#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int length;
    size_t capacity;
    int *array;
} DynamicArray;

DynamicArray *create_array()
{

    DynamicArray *self = (DynamicArray *)malloc(sizeof(DynamicArray));
    if (self == NULL)
    {
        exit(0);
    }
    self->capacity = sizeof(int) * 5;
    self->length = 0;
    self->array = (int *)malloc(sizeof(int) * 5);
    return self;
}

void print_dynamic_array(DynamicArray *self)
{
    for (int i = 0; i < self->length; i++)
    {
        printf("\nval=%d,index=%d", self->array[i], i);
    }
    printf("\n length of arr =%d", self->length);
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

void append(DynamicArray *self, int v)

{

    int len = self->length;
    printf("\nlength-%d cap=%d\n", self->length, self->capacity);
    if (self->length >= 5)
    {

        printf("\nIncreasing memory Req\n");
        // temp = (int *)realloc(temp, 5 * sizeof(int));
        if (check_capacity(len, self->capacity))
        {
            size_t new_capacity = (self->capacity * 2);
            self->array = (int *)realloc(self->array, new_capacity);
            self->capacity = new_capacity;
        }
        // else
        // {
        //     self->array = (int *)realloc(self->array, 2 * sizeof(int) * 5);
        // }
    }
    self->array[self->length] = v;
    self->length = len + 1;
};

int main()
{
    DynamicArray *da = create_array();
    for (int i = 0; i < 10; i++)
    {
        append(da, i * 3);
    }

    print_dynamic_array(da);
    int *pt = da->array;
    // printf("size of arr=%d,size of da=%d",sizeof(&pt),sizeof(da));
    free(da->array);
    free(da);

    return 0;
}