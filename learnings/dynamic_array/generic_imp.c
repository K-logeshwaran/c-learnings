// gpt generated code Wrong code ✖️

// need to implement my version

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef void *vector;

#define CAST(TYPE, VALUE, SELF, NEW_CAP) (SELF->array = (TYPE *)realloc(SELF->array, NEW_CAP);)

#define VCC_GEN_UP(TYPE, VALUE, self) ({                            \
    int len = self->length;                                         \
    if (check_capacity(len, self->capacity, self->size_of_element)) \
    {                                                               \
        size_t new_capacity = (self->capacity * 2);                 \
        self->array = (TYPE *)realloc(self->array, new_capacity);   \
        self->capacity = new_capacity;                              \
    }                                                               \
    self->array[self->length] = VALUE;                              \
    self->length = len + 1;                                         \
})

typedef struct
{
    int length;
    size_t capacity;
    size_t size_of_element;
    vector array; // Use void pointer for genericity
} DynamicArray;

DynamicArray *dyaar_create_array(size_t size_of_type)
{

    DynamicArray *self = (DynamicArray *)malloc(sizeof(DynamicArray));
    if (self == NULL)
    {
        exit(0);
    }
    self->size_of_element = size_of_type;
    // self->capacity = sizeof(int) * 5;
    self->capacity = size_of_type * 5;
    self->length = 0;
    self->array = malloc(size_of_type * 5);
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

int check_capacity(int len, size_t current_capacity, size_t ind_size)
{
    size_t occupied_space = len * ind_size;
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
    if (check_capacity(len, self->capacity, self->size_of_element))
    {
        size_t new_capacity = (self->capacity * 2);
        self->array = (int *)realloc(self->array, new_capacity);
        self->capacity = new_capacity;
    }
    // self->array[self->length] = v;
    void *ptr = self->array;

    *(ptr + (len * self->size_of_element)) = v;
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

typedef struct
{
    name[20];
    int age;
    char sex;
} Person;

int main()
{
    DynamicArray *da = dyaar_create_array(sizeof(Person));
    Person p1 = {"Loki", 19, 'M'};
    Person p2 = {"Loki2", 19, 'M'};
    Person p3 = {"Loki3", 19, 'M'};
    VCC_GEN_UP(Person, p1, da);
    free(da->array);
    free(da);

    return 0;
}