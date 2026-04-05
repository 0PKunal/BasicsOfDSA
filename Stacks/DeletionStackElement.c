#include <stdio.h>
#define MAX 100

int main() {
    int stack[MAX];
    int top = -1;
    int n;

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

    printf("\nDeleted element: %d\n", stack[top--]);

    if (top == -1) {
        printf("Stack is now empty.\n");
        return 0;
    }

    printf("Stack after deletion (top to bottom): ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");

    return 0;
}
