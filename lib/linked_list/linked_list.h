#ifndef MY_LIB_LIINKED_LIST

#define MY_LIB_LIINKED_LIST

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

Node *_create_node(generic data);
LinkedList *linked_list_create(generic data);
void linked_list_push(LinkedList *ll, generic data);
void linked_list_prepend(LinkedList *ll, generic data);
void linked_list_print(LinkedList *ll, void (*print_fun)(void *));
generic linked_list_pop(LinkedList *ll);
generic linked_list_get_element_index(LinkedList *ll, int id);
Node *__get_node_by_index(LinkedList *ll, int index);
void linked_list_insert_element_at_index(LinkedList *ll, int index, generic data);
int linked_list_find_element(LinkedList *ll, generic data, bool (*compare)(void *, void *));
void linked_list_update_element(LinkedList *ll, int index, generic data);
void linked_list_delete_element_index(LinkedList *ll, int index);
void linked_list_free(LinkedList *ll);
#endif