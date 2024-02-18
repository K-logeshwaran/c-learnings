#include "dynamic_arr.h"

DynamicArray *dyaar_create_array()
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

void dyaar_print(DynamicArray *self)
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

void dyaar_append(DynamicArray *self, int v)

{
    int len = self->length;
    if (check_capacity(len, self->capacity))
    {
        size_t new_capacity = (self->capacity * 2);
        self->array = (int *)realloc(self->array, new_capacity);
        self->capacity = new_capacity;
    }
    self->array[self->length] = v;
    self->length = len + 1;
};

int *dyaar_get_element(DynamicArray *self, int index)
{
    if (index >= self->length)
    {
        return NULL;
    }
    return &self->array[index];
}

void dyaar_remove(DynamicArray *self, int index)
{
    int *elm = dyaar_get_element(self, index);
    if (!elm)
    {
        printf("\nArray out of bound\n");
        return;
    }
    size_t sz = (self->length - index - 1) * sizeof(int);
    printf("\nsize=%d\n", sz);
    memmove(elm, elm + 1, sz);
    self->length = self->length - 1;
}
void dyaar_free(DynamicArray *self)
{
    free(self->array);
    free(self);
}
// int main()
// {
//     DynamicArray *da = dyaar_create_array();
//     for (int i = 0; i < 5; i++)
//     {
//         dyaar_append(da, i * 3);
//     }

//     dyaar_print(da);
//     int *pt = da->array;
//     printf("\nelm @4 is %d\n", *dyaar_get_element(da, 4));
//     dyaar_remove(da, 2);
//     dyaar_print(da);
//     puts("now adding val");
//     dyaar_append(da, 69);
//     puts("after adding val");
//     dyaar_print(da);
//     free(da->array);
//     free(da);

//     return 0;
// }