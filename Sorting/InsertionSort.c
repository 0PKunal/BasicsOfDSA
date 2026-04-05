#include <stdio.h>

int main() {
    int n;
    int arr[100];

    printf("\nEnter number of elements (max 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid size.\n");
        return 0;
    }

    printf("\nEnter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("\nSorted array (Insertion Sort): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
