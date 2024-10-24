#include <stdio.h>
#define MAX 5

int queue[MAX];  // Array to hold the queue elements
int front = -1;  // Points to the front element
int rear = -1;   // Points to the rear element

// Function to insert an element into the queue
void enqueue(int element) {
    if (rear == MAX - 1) {
        printf("Queue is full. Insertion is not possible.\n");
    } else {
        if (front == -1) front = 0;  // Set front to 0 if it's the first insertion
        rear++;
        queue[rear] = element;
        printf("Inserted %d into the queue.\n", element);
    }
}

// Function to display the queue
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);  // This will show that the queue is full

    display();    // Display the queue

    return 0;
}
