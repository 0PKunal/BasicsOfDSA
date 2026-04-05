#include <stdio.h>
#define MAX 100

int main() {
    int stack[MAX];
    int top = -1;
    int n, key, found = 0;

    printf("\nEnter number of elements in stack: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Invalid stack size.\n");
        return 0;
    }

    printf("\nEnter stack elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &stack[++top]);
    }

    printf("\nEnter value to search: ");
    scanf("%d", &key);

    for (int i = top; i >= 0; i--) {
        if (stack[i] == key) {
            printf("Found at stack index %d from bottom\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Not found\n");
    }

    return 0;
}
