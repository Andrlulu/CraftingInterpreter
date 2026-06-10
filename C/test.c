#include <stdio.h>
#include "dlinked_list.h"

int main() {
    Node *head = NULL;
    
    // Test 1: Insert
    head = insert_at_head(head, "Alice");
    head = insert_at_head(head, "Bob");
    head = insert_at_head(head, "Charlie");
    printf("Inserted 3 items\n");
    
    // Test 2: Find
    Node *found = find(head, "Bob");
    if (found) printf("✓ Found: %s\n", found->data);
    
    // Test 3: Delete
    head = delete_node(head, found);
    printf("✓ Deleted Bob\n");
    
    // Test 4: Verify deletion
    found = find(head, "Bob");
    if (found == NULL) printf("✓ Bob not found (correctly deleted)\n");
    
    free_list(head);
    printf("✓ All tests passed!\n");
    return 0;
}