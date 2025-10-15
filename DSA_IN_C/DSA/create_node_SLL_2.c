#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL; // Global pointer to the linked list

void begin();
void last();
void anyposition();
void disply();

int main() {
    int item;
    int choice;

    printf("\n1. Insert at beginning\n2. Insert at last\n3. Insert at any position\n4. Display\n5. Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    while (choice != 5) {
        switch (choice) {
            case 1:
                begin();
                break;
            case 2:
                last();
                break;
            case 3:
                anyposition();
                break;
            case 4:
                disply();
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
    }
    return 0;
}

void begin() {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    int item;
    printf("Enter the value: ");
    scanf("%d", &item);
    new_node->data = item;
    new_node->next = head;
    head = new_node;
    printf("Node inserted at beginning.\n");
}

void last() {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    int item;
    printf("Enter the value: ");
    scanf("%d", &item);
    new_node->data = item;
    new_node->next = NULL;
    if (head == NULL) {
        head = new_node;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    printf("Node inserted at last.\n");
}

void anyposition() {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    int item, pos, i = 1;
    printf("Enter the value: ");
    scanf("%d", &item);
    printf("Enter the position: ");
    scanf("%d", &pos);

    if (pos == 1) {
        new_node->data = item;
        new_node->next = head;
        head = new_node;
        printf("Node inserted at position 1.\n");
        return;
    }

    while (i < pos - 1 && temp != NULL) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL) {
        printf("Position out of range.\n");
    } else {
        new_node->data = item;
        new_node->next = temp->next;
        temp->next = new_node;
        printf("Node inserted at position %d.\n", pos);
    }
}

void disply() {
    struct node *temp = head;
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked list elements: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}