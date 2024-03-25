#include "linked_list.h"

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
void linked_list_push(LinkedList *ll, generic data)
{
    Node *_iterator = ll->Head;
    ll->length += 1;
    while (true)
    {
        if (_iterator->next == NULL)
        {
            _iterator->next = _create_node(data);

            return;
        }
        else
        {
            _iterator = _iterator->next;
        }
    }
}
void linked_list_prepend(LinkedList *ll, generic data)
{
    Node *previous_next = ll->Head->next;
    ll->length += 1;
    Node *new_node = _create_node(data);
    new_node->next = previous_next;
    ll->Head->next = new_node;
}

void linked_list_print(LinkedList *ll, void (*print_fun)(void *))
{
    Node *_iterator = ll->Head;
    while (true)
    {
        generic data_pointer = _iterator->data;
        print_fun(data_pointer);
        if (_iterator->next == NULL)
            return;

        _iterator = _iterator->next;
    }
}

generic linked_list_pop(LinkedList *ll)
{
    Node *_iterator = ll->Head;
    Node *_previous_node = NULL;
    generic data = malloc(sizeof(generic));
    while (true)
    {

        if (_iterator->next == NULL)
        {
            _previous_node->next = NULL;
            data = _iterator->data;
            ll->length -= 1;
            free(_iterator);
            break;
        }

        _previous_node = _iterator;
        _iterator = _iterator->next;
    }
    return data;
}

generic linked_list_get_element_index(LinkedList *ll, int index)
{
    Node *_iterator = ll->Head;
    int inx = 0;
    if (index >= ll->length)
    {
        printf("\n\nOut of bounds Errr");
        return NULL;
    }
    while (true)
    {
        generic data_pointer = _iterator->data;
        if (inx == index)
            return data_pointer;
        if (_iterator->next == NULL)
            return NULL;

        _iterator = _iterator->next;
        inx += 1;
    }
}
Node *__get_node_by_index(LinkedList *ll, int index)
{
    Node *_iterator = ll->Head;
    int inx = 0;
    if (index >= ll->length)
    {
        printf("\n\nOut of bounds Errr");
        return NULL;
    }
    while (true)
    {
        if (inx == index)
            return _iterator;
        if (_iterator->next == NULL)
            return NULL;

        _iterator = _iterator->next;
        inx += 1;
    }
    return _iterator;
}
void linked_list_insert_element_at_index(LinkedList *ll, int index, generic data)
{
    Node *pre = __get_node_by_index(ll, index - 1);
    Node *pre_node_next = pre->next;
    Node *new_node = _create_node(data);
    pre->next = new_node;
    new_node->next = pre_node_next;
}

int linked_list_find_element(LinkedList *ll, generic data, bool (*compare)(void *, void *))
{
    Node *_iterator = ll->Head;
    int index = 0;
    while (true)
    {
        if (compare(data, _iterator->data) == true)
        {
            return index;
        };
        if (_iterator->next == NULL)
            return -1;
        index += 1;
        _iterator = _iterator->next;
    }
}

void linked_list_update_element(LinkedList *ll, int index, generic data)
{
    Node *np = __get_node_by_index(ll, index);
    np->data = data;
}

void linked_list_delete_element_index(LinkedList *ll, int index)
{
    if (index == 0)
    {
        Node *head = ll->Head;
        Node *head_next = ll->Head->next;
        ll->Head = head_next;
        free(head);
        return;
    }
    Node *previous_node = __get_node_by_index(ll, index - 1);
    Node *delete_node = __get_node_by_index(ll, index);
    Node *delete_node_next = delete_node->next;
    previous_node->next = delete_node_next;
    free(delete_node);
    ll->length -= 1;
}

void linked_list_free(LinkedList *ll)
{
    for (int i = 0; i < ll->length; i++)
    {
        linked_list_delete_element_index(ll,i);
    }
    free(ll);
}