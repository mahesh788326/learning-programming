queue using array:   #include <stdio.h>
#include <stdlib.h>

#define MAX 5
int queue[MAX];
int front = -1, rear = -1;

void enqueue(int x) {
    if (rear == MAX - 1) {
        printf("Queue Overflow. Cannot enqueue %d\n", x);
        return;
    }
    if (front == -1)
        front = 0;
    queue[++rear] = x;
    printf("%d enqueued to queue\n", x);
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow. Cannot dequeue element.\n");
        return -1;
    }
    int x = queue[front++];
    return x;
}

void displayQueue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, value, result;
        printf("\n*** Queue Using Array ***\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                result = dequeue();
                if (result != -1)
                    printf("Dequeued element: %d\n", result);
                break;
            case 3:
                displayQueue();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}