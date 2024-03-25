#include <stdio.h>
#include <stdlib.h>

/* tried to implement dynamic array FAILED 😔*/

typedef struct
{
    int len;
    int *value;
} dynamic_array;
dynamic_array *create_array(int val)
{
    if (val == NULL)
    {
        return (dynamic_array *)malloc(sizeof(dynamic_array));
    }
    dynamic_array *d = (dynamic_array *)malloc(sizeof(dynamic_array));
    d->value = val;
    d->len = 1;
    return d;
}
dynamic_array *push(dynamic_array *self, int value)
{
    int len = self->len;
    dynamic_array *new_pt = (dynamic_array *)realloc(self, sizeof(dynamic_array) * (len + 1));
    (new_pt + (len + 1))->value = 34;
    new_pt->len = (len + 1);
    printf("lkf%d\n", new_pt->len);
    return new_pt;
}
void print_arr(dynamic_array *self)

{
    printf("len=%d", self->len);
    if (self->len == 1)
    {
        printf("Truevalue=%d,index=%d", self->value, self->len);
        return;
    }
    for (int i = 0; i < self->len; ++i)
    {

        printf("\nvalue=%d,index=%d", (self + i)->value, i);
    }
}
int main()
{
    dynamic_array *da = create_array(4);

    dynamic_array *d2 = push(da, 34);
    // printf("%d", da->value);
    print_arr(d2);
    free(da);

    return 0;
}