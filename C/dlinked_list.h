#ifndef DLINKED_LIST_H
#define DLINKED_LIST_H

typedef struct Node {
    char *data;
    struct Node *next;
    struct Node *prev;
} Node;

Node* insert_at_head(Node *head, const char *value);
Node* find(Node *head, const char *value);
Node* delete_node(Node *head, Node *node);
void free_list(Node *head);

#endif // DLINKED_LIST_H