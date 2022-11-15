// ERRORS: 
#define     ERR_ALLOCATION_FAULT NULL

//

typedef struct
{
    // Some Data... Example:
    double height, weight;
} Data;

typedef struct node
{
    struct node *next;
    Data *data;
} Node;

Node *new_node(Data *data);

/*
Post insert will add new node where is free with data.
Return address of the new node, otherwise NULL.

NOTES: 1.
*/
Node *post_insert(Node *head, Data *data);

// Return the address of a node at index, otherwise NULL.
Node *at(Node *head, unsigned int index);

// Create and change the head of the list with data.
Node *pre_insert(Node *head, Data *data);

/* 
Create new node at index with data and change the previous and next if needed.
Return address of the new node, otherwise NULL.
NOTES: 1.
*/ 
Node *insert_at(Node *head, Data *data, unsigned int index);

// Iterate for each node in the list and free from memory.
void destroy_list(Node *head);