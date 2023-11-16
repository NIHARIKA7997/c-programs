/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

// Define a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to print the linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to reverse k nodes in a linked list
struct Node* reverseKNodes(struct Node* head, int k) {
    struct Node* current = head;
    struct Node* next = NULL;
    struct Node* prev = NULL;
    int count = 0;

    // Count the number of nodes in the current group
    struct Node* temp = head;
    while (temp != NULL && count < k) {
        temp = temp->next;
        count++;
    }

    if (count == k) {
        while (count > 0 && current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count--;
        }

        if (next != NULL) {
            head->next = reverseKNodes(next, k);
        }

        return prev; 
    }

    return head;
}

struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main() {
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
    head->next->next->next->next->next = newNode(6);

    printf("Original Linked List: ");
    printList(head);

    int k = 3;
    head = reverseKNodes(head, k);

    printf("Linked List after reversing %d nodes: ", k);
    printList(head);

    return 0;
}

    