#include <stdio.h>
#define MAX 100

int main() {
    int stack[MAX];
    int top = -1;
    int n, value;

    printf("\nEnter number of elements in stack: ");
    scanf("%d", &n);

    if (n < 0 || n >= MAX) {
        printf("Invalid stack size.\n");
        return 0;
    }

    printf("\nEnter stack elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &stack[++top]);
    }

    printf("\nEnter value to push: ");
    scanf("%d", &value);

    if (top == MAX - 1) {
        printf("Stack overflow.\n");
        return 0;
    }

    stack[++top] = value;

    printf("\nStack after insertion (top to bottom): ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");

    return 0;
}
