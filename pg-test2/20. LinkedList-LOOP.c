#include <stdio.h>
#include <stdlib.h>

// Define a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to detect a loop in a linked list
int hasLoop(struct Node* head) {
    struct Node* slow = head;
    struct Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        // If there is a loop, the tortoise and hare will meet
        if (slow == fast) {
            return 1; // Loop detected
        }
    }

    return 0; // No loop detected
}

// Function to create a new node
struct Node* newNode1(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Function to add a new node at the end of the linked list
struct Node* appendNode(struct Node* head, int data) {
    struct Node* newNode = newNode1(data);

    if (head == NULL) {
        return newNode;
    }

    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
    return head;
}

int main() {
    struct Node* head = NULL;

    // Create a linked list with a loop for testing
    head = appendNode(head, 1);
    head = appendNode(head, 2);
    head = appendNode(head, 3);
    head = appendNode(head, 4);
    head = appendNode(head, 5);

    // Create a loop
    head->next->next->next->next->next = head->next;

    // Check if the linked list has a loop
    if (hasLoop(head)) {
        printf("Linked list has a loop.\n");
    } else {
        printf("Linked list does not have a loop.\n");
    }

    return 0;
}
