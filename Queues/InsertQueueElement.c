#include <stdio.h>
#define MAX 100

int main() {
    int queue[MAX];
    int front = 0, rear = -1;
    int n, value;

    printf("\nEnter number of elements in queue: ");
    scanf("%d", &n);

    if (n < 0 || n >= MAX) {
        printf("Invalid queue size.\n");
        return 0;
    }

    printf("\nEnter queue elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &queue[++rear]);
    }

    printf("\nEnter value to enqueue: ");
    scanf("%d", &value);

    if (rear == MAX - 1) {
        printf("Queue overflow.\n");
        return 0;
    }

    queue[++rear] = value;

    printf("\nQueue after insertion: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");

    return 0;
}
