#include <stdio.h>
#define MAX 100

int main() {
    int queue[MAX];
    int front = 0, rear = -1;
    int n, key, found = 0;

    printf("\nEnter number of elements in queue: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Invalid queue size.\n");
        return 0;
    }

    printf("\nEnter queue elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &queue[++rear]);
    }

    printf("\nEnter value to search: ");
    scanf("%d", &key);

    for (int i = front; i <= rear; i++) {
        if (queue[i] == key) {
            printf("Found at queue index %d\n", i - front);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Not found\n");
    }

    return 0;
}
