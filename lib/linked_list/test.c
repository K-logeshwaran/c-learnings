#include "linked_list.h"

void printInt(int *I)
{
    printf("\n %d", *I);
}
void printName(char *c)
{
    printf("\n\nFrom fun   %s", c);
}

bool compare(void *data, void *value)
{
    int *converted_data = (int *)data;
    if (*(int *)value == *converted_data)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a = 10, b = 20, c = 30, e = 44, f = 90;
    int g = 34, h = 909;
    char name1[] = "loki";
    char name2[] = "devlooper";
    char name3[] = "karthi";

    LinkedList *ll = linked_list_create(&a);
    LinkedList *ll2 = linked_list_create(name1);
    linked_list_push(ll, &b);
    linked_list_push(ll, &c);
    linked_list_prepend(ll, &e);
    linked_list_prepend(ll, &f);
    linked_list_push(ll2, name2);
    linked_list_prepend(ll2, name3);
    linked_list_print(ll, printInt);
    int *pop_value = linked_list_pop(ll);
    // int *pop_value2 = linked_list_pop(ll);
    printf("\n poped value =%d", *pop_value);
    // printf("\n poped value 2 =%d", *pop_value2);
    linked_list_print(ll, printInt);
    int *XX = (int *)linked_list_get_element_index(ll, 12);
    if (XX == NULL)
    {
        printf("ERRRRRRRRRRRR\n");
    }
    else
    {
        printf("\nelement at 2 is =%d", *XX);
    }
    linked_list_insert_element_at_index(ll, 2, &g);
    linked_list_print(ll, printInt);
    int pos = linked_list_find_element(ll, &e, compare);
    printf("\nElement found at index %d", pos);
    linked_list_update_element(ll,pos,&h);
    int *data = linked_list_get_element_index(ll, pos);
    printf("\nval %d", *data);
    free(ll);
    free(ll2);

    return 0;
}