#include <stdio.h>
#include <stdlib.h>

// Define the structure
struct Node
{
    int data;
    struct Node *next;
};

// Linked List Function
void LinkedListTraversal(struct Node *ptr)
{
    // Untill unless ptr is not equal to NULL -> Funcction will run
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);

        // Target to the next node
        ptr = ptr->next;
    }
}

int main()
{
    // Define my Nodes
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocating memory in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Linking First to Second Node
    head->data = 11;
    head->next = second;

    // Linking Second to Third Node
    second->data = 22;
    second->next = third;

    // Linking Third to NULL
    third->data = 33;
    third->next = NULL;

    LinkedListTraversal(head);

    return 0;
}