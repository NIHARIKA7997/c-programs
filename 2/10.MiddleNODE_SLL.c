#include <stdio.h>
#include <stdlib.h>

// Define a singly linked list node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to delete a middle node from the linked list
void deleteMiddleNode(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        // No middle node to delete if the list is empty or has only one node
        return;
    }

    struct Node* slowPtr = head;
    struct Node* fastPtr = head;
    struct Node* prev = NULL;

    while (fastPtr != NULL && fastPtr->next != NULL) {
        fastPtr = fastPtr->next->next;
        prev = slowPtr;
        slowPtr = slowPtr->next;
    }

    // Delete the middle node pointed to by slowPtr
    prev->next = slowPtr->next;
    free(slowPtr);
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    printf("Original linked list: ");
    printList(head);

    deleteMiddleNode(head);

    printf("Linked list after deleting the middle node: ");
    printList(head);

    return 0;
}
