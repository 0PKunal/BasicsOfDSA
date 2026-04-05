#include <stdio.h>

int main() {
    int n, i;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("\nEnter %d integers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array by swapping elements
    for(i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("\nThe reversed array is: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}   