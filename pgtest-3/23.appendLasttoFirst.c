#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node Node;

struct LinkedList {
    Node* head;
};

typedef struct LinkedList LinkedList;

LinkedList* createLinkedList() {
    LinkedList* list = (LinkedList*)malloc(sizeof(LinkedList));
    list->head = NULL;
    return list;
}

void append(LinkedList* list, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;

    if (list->head == NULL) {
        list->head = new_node;
    } else {
        Node* current = list->head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
}

int countLL(LinkedList* list) {
    int count = 0;
    Node* current = list->head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

void appendLastToFirst(LinkedList* list, int numcount) {
    int length = countLL(list);
    if (numcount >= length || numcount <= 0) {
        return;
    }

    Node* prev = NULL;
    Node* current = list->head;
    for (int i = 0; i < length - numcount; i++) {
        prev = current;
        current = current->next;
    }

    prev->next = NULL;
    Node* new_head = current;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = list->head;
    list->head = new_head;
}

void display(LinkedList* list) {
    Node* current = list->head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    LinkedList* my_linked_list = createLinkedList();
    append(my_linked_list, 1);
    append(my_linked_list, 2);
    append(my_linked_list, 3);
    append(my_linked_list, 4);
    append(my_linked_list, 5);

    printf("Original Linked List:\n");
    display(my_linked_list);

    int numcount = 2;
    appendLastToFirst(my_linked_list, numcount);

    printf("Linked List after moving last %d nodes to first:\n", numcount);
    display(my_linked_list);

    return 0;
}