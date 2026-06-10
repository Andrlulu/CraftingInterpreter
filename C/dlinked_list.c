#include <stdlib.h>
#include <string.h>
#include "dlinked_list.h"

Node* insert_at_head(Node *head, const char *value) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = (char *)malloc(strlen(value) + 1);
    strcpy(new_node->data, value);
    
    new_node->next = head;
    new_node->prev = NULL;
    
    if (head != NULL) {
        head->prev = new_node;
    }
    
    return new_node;  // return new head
}

Node* find(Node *head, const char *value) {
    Node *current = head;
    while (current != NULL) {
        if (strcmp(current->data, value) == 0) {
            return current;
        }
        current = current->next;
    }
    return NULL;  // not found
}

Node* delete_node(Node *head, Node *node) {
    if (node == NULL) return head;
    
    // Fix backward link
    if (node->prev != NULL) {
        node->prev->next = node->next;
    }
    
    // Fix forward link
    if (node->next != NULL) {
        node->next->prev = node->prev;
    }
    
    // If we're deleting the head, return the new head
    Node *new_head = (node == head) ? node->next : head;
    
    free(node->data);
    free(node);
    
    return new_head;
}

void free_list(Node *head) {
    Node *current = head;
    while (current != NULL) {
        Node *temp = current;
        current = current->next;
        free(temp->data);
        free(temp);
    }
}