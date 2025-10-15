#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* head = NULL;

void insert(int val, int pos) {
    Node* new = malloc(sizeof(Node));
    new->data = val;
    if (pos == 1 || head == NULL) {
        new->next = head;
        head = new;
        return;
    }
    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp->next; i++)
        temp = temp->next;
    new->next = temp->next;
    temp->next = new;
}

void display() {
    for (Node* t = head; t; t = t->next)
        printf("%d -> ", t->data);
    printf("NULL\n");
}

int main() {
    insert(10, 1);
    insert(5, 1);
    insert(20, 3);
    insert(15, 3);
    display();
    return 0;
}
