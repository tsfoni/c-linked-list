#include    "list.h"
#include    <stdlib.h>

Node *new_node(Data *data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));

    if (ptr != NULL)
    {
        ptr->next = NULL;
        ptr->data = data;
    }

    return ptr;
}

Node *post_insert(Node *head, Data *data) {
    if (head == NULL) 
        return new_node(data);

    // Now we can assume that head is not null and we can access the next.
    while (head->next != NULL) 
        head = head->next;
    
    head->next = new_node(data);

    return head->next;
}

Node *at(Node *head, unsigned int index)
{
    for (unsigned int i = 0; i < index; i++)
    {
        if (head == NULL)
            return NULL;

        head = head->next;
    }

    return head;
}

Node *pre_insert(Node *head, Data *data)
{
    Node *n = new_node(data);
    if(n != NULL)
        n->next = head;

    return n;
}


Node *insert_at(Node *head, Data *data, unsigned int index)      
{
    if (index == 0)
        return pre_insert(head, data);

    Node *tmp = at(head, index - 1);
    if (tmp == NULL)
        return NULL;

    Node *new_n = new_node(data);
    if (new_n == NULL)
        return NULL;
    
    new_n->next = tmp->next;
    tmp->next = new_n;
    
    return new_n;
}

void destroy_list(Node *head)
{
    Node *tmp = head;
    while (head != NULL)
    {
        tmp = tmp->next;
        free(head);
        head = tmp;
    }
}