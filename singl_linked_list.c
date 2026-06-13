#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL;
    struct Node *second=NULL;
    struct Node *newnode=NULL;
    
    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    newnode = malloc(sizeof(struct Node));
    
    // Node 1 (Head)
    head->data = 10;
    head->next = newnode; // Points to the middle node
    
    // Node 2 (Middle)
    newnode->data = 15;
    newnode->next = second; // Points to the last node
    
    // Node 3 (Second/Tail)
    second->data = 20;
    second->next = NULL; // Ends the list
    
    // Print the list using a smart while loop
    struct Node *temp = head; // Start at the very beginning
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;   // Jump to the next node in the chain
    }
    printf("NULL\n");

    // Free ALL allocated memory to prevent leaks
    free(head);
    free(newnode); // FIXED: Memory is now safely freed!
    free(second);
    
    return 0;
}
