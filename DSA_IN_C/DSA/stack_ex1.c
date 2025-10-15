// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure for a node
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to push an element onto the stack
// void push(struct Node** top, int value) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     if (!newNode) {
//         printf("Memory allocation failed\n");
//         return;
//     }
//     newNode->data = value;
//     newNode->next = *top;
//     *top = newNode;
//     printf("%d pushed to stack\n", value);
// }

// // Function to check if the stack is empty
// int isEmpty(struct Node* top) {
//     return top == NULL;
// }

// // Function to pop an element from the stack
// int pop(struct Node** top) {
//     if (isEmpty(*top)) {
//         printf("Stack is empty\n");
//         return -1;
//     }
//     struct Node* temp = *top;
//     int poppedValue = temp->data;
//     *top = (*top)->next;
//     free(temp);
//     return poppedValue;
// }

// // Function to peek at the top element
// int peek(struct Node* top) {
//     if (isEmpty(top)) {
//         printf("Stack is empty\n");
//         return -1;
//     }
//     return top->data;
// }

// // Main function to test the stack
// int main() {
//     struct Node* stack = NULL;

//     push(&stack, 10);
//     push(&stack, 20);
//     push(&stack, 30);

//     printf("Top element is %d\n", peek(stack));
//     printf("Popped element is %d\n", pop(&stack));
//     printf("Popped element is %d\n", pop(&stack));

//     if (isEmpty(stack)) {
//         printf("Stack is empty\n");
//     } else {
//         printf("Stack is not empty\n");
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX], top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        stack[++top] = value;
        printf("%d pushed onto stack\n", value);
    }
}
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop\n");
    } else {
        printf("%d popped from stack\n", stack[top--]);
    }
}
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
 
int main() {
    int choice, value;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}
