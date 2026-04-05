#include <stdio.h>
#define MAX 100

int main() {
    int queue[MAX];
    int front = 0, rear = -1;
    int n;

    printf("\nEnter number of elements in queue: ");
    scanf("%d", &n);

    if (n < 0 || n > MAX) {
        printf("Invalid queue size.\n");
        return 0;
    }

    printf("\nEnter queue elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &queue[++rear]);
    }

    for (int i = 0; i < n / 2; i++) {
        int temp = queue[front + i];
        queue[front + i] = queue[rear - i];
        queue[rear - i] = temp;
    }

    printf("\nReversed queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");

    return 0;
}
