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
Node *at(Node *head, unsigned int index);
Node *post_insert(Node *head, Data *data);
void free_list(Node *head);
Node *beginning_insert(Node *head, Data *data);
Node *insert_at(Node *head, Data *data, unsigned int index);
