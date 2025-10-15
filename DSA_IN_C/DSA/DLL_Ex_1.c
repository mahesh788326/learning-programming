#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;  
    struct Node* prev;
    struct Node* next;
}; 

// Insert at the end
void insert(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;
    new_node->data = data;
    new_node->next = NULL;
    if (*head == NULL) {
        new_node->prev = NULL;
        *head = new_node;
        return;
    }
    while (last->next) last = last->next;
    last->next = new_node;
    new_node->prev = last;
}

// Print the list from start to end
void printList(struct Node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    printList(head);  // Output: 10 20 30
    return 0;
}