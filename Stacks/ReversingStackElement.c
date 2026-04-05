#include <stdio.h>
#define MAX 100

int main() {
    int stack[MAX], temp[MAX];
    int top = -1;
    int n;

    printf("\nEnter number of elements in stack: ");
    scanf("%d", &n);

    if (n < 0 || n > MAX) {
        printf("Invalid stack size.\n");
        return 0;
    }

    printf("\nEnter stack elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &stack[++top]);
    }

    for (int i = 0; i < n; i++) {
        temp[i] = stack[top - i];
    }
    for (int i = 0; i < n; i++) {
        stack[i] = temp[i];
    }

    printf("\nReversed stack (top to bottom): ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");

    return 0;
}
