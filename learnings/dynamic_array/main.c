#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    int size;
    int arr[5];
} dynamic_array;

dynamic_array *create_dynamic_array(int initial_value)
{
    dynamic_array *self = (dynamic_array *)calloc(1, sizeof(dynamic_array));
    if (self == NULL)
    {
        printf("\nCan not allocate memory\n");
        exit(0);
    }
    if (initial_value == NULL)
        return self;
    self->size = 1;
    self->arr[0] = initial_value;
    return self;
}

void print_dynamic_array(dynamic_array *self)
{
    for (int i = 0; i < self->size; i++)
    {
        printf("\nval=%d,index=%d", self->arr[i], i);
    }
    printf("\n length of arr =%d", self->size);
}

void push(dynamic_array *self, int v)
{
    int len = self->size;
    self->arr[len] = v;
    self->size = (len + 1);
}

int *get_element(dynamic_array *self, int index)
{
    if (index >= self->size)
    {
        return NULL;
    }
    return &self->arr[index];
}

void remove(dynamic_array *self, int index)
{
    int *address = get_element(self, index);
    int len = self->size, i;
    for (i = 0; i < (self->size - index); i++)
    {
        *(address + i) = *(address + i + 1);
    }
    self->size = (len - 1);
    printf("\nbrooooo %p,val=%d\n", (address + i + 1), *(address + i + 1));
}
int length(dynamic_array *self)
{
    return self->size;
}


void freeDynamicArray(dynamic_array *da)
{
    //free(da->arr);
    free(da);
}


int main()

{
    time_t t;
    srand((unsigned)time(&t));
    dynamic_array *DA = create_dynamic_array(NULL);
    print_dynamic_array(DA);
    for (int i = 0; i < 15; i++)
    {
        push(DA, (rand() % 100) + 1);
    }

    print_dynamic_array(DA);
    printf("\n element at 4 is %d", *get_element(DA, 4));
    remove(DA, 7);
    print_dynamic_array(DA);
    freeDynamicArray(DA);
    return 0;
}