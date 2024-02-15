// gpt generated code Wrong code ✖️

// need to implement my version

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int length;
    size_t capacity;
    void **array; // Use void pointer for genericity
} DynamicArray;

DynamicArray *dynamic_array_create()
{
    DynamicArray *self = (DynamicArray *)malloc(sizeof(DynamicArray));
    if (self == NULL)
    {
        return NULL; // Return NULL on allocation failure
    }
    self->capacity = sizeof(void *) * 5;
    self->length = 0;
    self->array = (void **)malloc(sizeof(void *) * 5);
    if (self->array == NULL)
    {
        free(self); // Free previously allocated memory
        return NULL;
    }
    return self;
}

void dynamic_array_print(DynamicArray *self, void (*print_element)(void *))
{
    for (int i = 0; i < self->length; i++)
    {
        printf("\nindex=%d: ", i);
        print_element(self->array[i]);
    }
    printf("\n length of arr =%d", self->length);
}

int check_capacity(int len, size_t current_capacity)
{
    size_t occupied_space = len * sizeof(void *);
    if (occupied_space == current_capacity)
    {
        return 1; // Signal to increase capacity
    }
    else
    {
        return 0; // Don't increase
    }
}

void dynamic_array_append(DynamicArray *self, void *v)
{
    int len = self->length;
    if (check_capacity(len, self->capacity))
    {
        size_t new_capacity = self->capacity * 2;
        void **new_array = (void **)realloc(self->array, new_capacity);
        if (new_array == NULL)
        {
            printf("Memory reallocation failed.");
            return;
        }
        self->array = new_array;
        self->capacity = new_capacity;
    }
    self->array[self->length] = v;
    self->length = len + 1;
}

void *dynamic_array_get_element(DynamicArray *self, int index)
{
    if (index >= self->length || index < 0)
    {
        return NULL;
    }
    return self->array[index];
}

void dynamic_array_remove(DynamicArray *self, int index)
{
    if (index < 0 || index >= self->length)
    {
        printf("\nArray out of bound\n");
        return;
    }

    for (int i = index; i < self->length - 1; i++)
    {
        self->array[i] = self->array[i + 1];
    }
    self->length--;
}

// Example print function for integers
void print_int(void *element)
{
    printf("%d ", *((int *)element));
}

// Example print function for strings
void print_string(void *element)
{
    printf("%s ", (char *)element);
}

int main()
{
    DynamicArray *da = dynamic_array_create();

    // Example usage for integers
    for (int i = 0; i < 5; i++)
    {
        int *val = malloc(sizeof(int));
        *val = i * 3;
        dynamic_array_append(da, val);
    }
    printf("Array of integers:\n");
    dynamic_array_print(da, print_int);

    // Example usage for strings
    dynamic_array_remove(da, 2);
    dynamic_array_remove(da, 0);
    char *str1 = "Hello";
    char *str2 = "World";
    dynamic_array_append(da, str1);
    dynamic_array_append(da, str2);
    printf("\nArray of strings:\n");
    dynamic_array_print(da, print_string);

    // Free memory
    for (int i = 0; i < da->length; i++)
    {
        free(da->array[i]);
    }
    free(da->array);
    free(da);

    return 0;
}
