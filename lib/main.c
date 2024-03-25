#include <stdio.h>
#include <stdlib.h>

typedef void *generic;
typedef struct _node Node;

struct _node
{
    generic data;
    Node *next;
};

typedef struct
{
    Node *Head;
    int length;
} LinkedList;

LinkedList *linked_list_create(generic data)
{
    LinkedList *ll = malloc(sizeof(LinkedList));
    ll->Head = _create_node(data);
    ll->length = 1;
    return ll;
}
Node *_create_node(generic data)
{
    Node *_node = malloc(sizeof(Node));
    _node->data = data;
    _node->next = NULL;
    return _node;
}

void linked_list_prepend(LinkedList *ll, generic data)
{
    Node *previous_next = ll->Head->next;
    ll->length += 1;
    Node *new_node = _create_node(data);
    new_node->next = previous_next;
    ll->Head->next = new_node;
}

void linked_list_free(LinkedList *ll)
{
    free(ll);
}

int main()
{
    int a = 10, b = 20, c = 30, e = 44, f = 90;
    int g = 34, h = 909;
    LinkedList *ll = linked_list_create(&a);
    linked_list_prepend(ll, &e);
    linked_list_prepend(ll, &f);
    linked_list_free(ll);
    return 0;
}