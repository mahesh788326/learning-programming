// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node*next;
// };
// int main()
// {
//     struct node*head;
//     int choice;
//     print("enter your choise ");
//     scanf("%d",&choise);
//     while(choice!=4)
//     switch ()
//     {
//     case1:
//         begin();
//         break;
//     case2:
//         last();
//         break;

//     case3:
//         anyposition();
//         break;

//     case4:
//         display();
//         break;
//     case6:
//         exit;
//         break;
    
//     }
//     void begin()
//     {
//         head=NULL;
//         head=(struct node*)malloc(sizeof(struct node));
//         head->data=45;
//         head->next=NULL;
    
//         printf("head->");
//         scanf("%d", &item);
//         head->data=item;
       
//         printf("%d",head->data);
//     }  
// }

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL; // Initialize head to NULL.

void begin() {
    int item;
    struct node* new_node = (struct node*)malloc(sizeof(struct node)); // Create new node.
    
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    
    printf("Enter data to insert at the beginning: ");
    scanf("%d", &item);
    
    new_node->data = item; // Set the data for the new node.
    new_node->next = head; // Point to the previous head.
    head = new_node; // Make the new node the head of the list.
    
    printf("Node inserted at the beginning with data: %d\n", new_node->data);
}

void last() {
    int item;
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    struct node* temp = head;

    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter data to insert at the end: ");
    scanf("%d", &item);

    new_node->data = item;
    new_node->next = NULL; // The new node will be the last one, so set next to NULL.

    if (head == NULL) { // If the list is empty, make new_node the head.
        head = new_node;
    } else {
        while (temp->next != NULL) { // Traverse to the last node.
            temp = temp->next;
        }
        temp->next = new_node; // Make the last node point to the new node.
    }

    printf("Node inserted at the end with data: %d\n", new_node->data);
}

void anyposition() {
    int item, pos, i;
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    struct node* temp = head;

    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter the position to insert the node: ");
    scanf("%d", &pos);
    printf("Enter data to insert: ");
    scanf("%d", &item);

    new_node->data = item;

    if (pos == 1) { // If position is 1, insert at the beginning.
        new_node->next = head;
        head = new_node;
        return;
    }

    for (i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next; // Traverse the list to find the position.
    }

    if (temp == NULL) {
        printf("Position out of range.\n");
        free(new_node); // Free the allocated memory for new_node.
        return;
    }

    new_node->next = temp->next; // Point the new node to the next node.
    temp->next = new_node; // Make the previous node point to the new node.

    printf("Node inserted at position %d with data: %d\n", pos, new_node->data);
}

void display() {
    struct node* temp = head;

    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int choice;

    do {
        printf("\nEnter your choice: \n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert at any position\n");
        printf("4. Display the list\n");
        printf("5. Exit\n");
        scanf("%d", &choice);

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
                display();
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}