#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node Node;

Node* reverseNElements(Node* head, int n) {
    if (head == NULL) {
        return NULL;
    }

    Node* current = head;
    Node* prev = NULL;
    Node* next = NULL;
    int count = 0;

    // Traverse to the (n+1)-th node
    while (current != NULL && count < n) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    // Connect the first part (reversed) with the remaining part
    if (next != NULL) {
        head->next = reverseNElements(next, n);
    }

    // Return the new head of the reversed portion
    return prev;
}

void display(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;

    // Append elements to the linked list
    for (int i = 1; i <= 10; i++) {
        Node* new_node = (Node*)malloc(sizeof(Node));
        new_node->data = i;
        new_node->next = head;
        head = new_node;
    }

    printf("Original Linked List:\n");
    display(head);

    int n = 4; // Number of elements to reverse
    head = reverseNElements(head, n);

    printf("Linked List after reversing the first %d elements:\n", n);
    display(head);

    // Free memory (not shown in the code)
    // You should free the memory allocated for the nodes when done
    return 0;
}
