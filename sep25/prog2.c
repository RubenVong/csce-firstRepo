#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node {
    int data;
    struct Node *next;
};

// Function to print the addresses of all nodes in the linked list
void printNodeAddresses(struct Node *head) {
    struct Node *current = head; // Start from the head of the list
    int count = 0;

    if (current == NULL) {
        printf("The linked list is empty.\n");
        return;
    }

    printf("Node Addresses:\n");
    while (current != NULL) {
        printf("Node %d: %p\n", count + 1, (void *)current); // Print the address of the current node
        current = current->next; // Move to the next node
        count++;
    }
}

int main() {
    // Create a sample linked list
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    // Allocate memory for nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Assign data and link nodes
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL; // Mark the end of the list

    // Call the function to print node addresses
    printNodeAddresses(head);

    // Free allocated memory (important to prevent memory leaks)
    free(head);
    free(second);
    free(third);

    return 0;
}