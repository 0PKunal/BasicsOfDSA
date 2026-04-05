#include <stdio.h>

// Deletion Example
void delete(int arr[], int *n, int pos) {
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}  

int main() 
{
        printf("\nEnter the size of the array: ");
    int n;   
    scanf("%d", &n);
    int a[n]; // declaring an array of size n

    printf("\nEnter the values of an integer array: ");
    // taking input and storing it in an array
    for(int i = 0; i < n; ++i) 
    {
    scanf("%d", &a[i]);
    }
    
    printf("\nInputted integers: ");
    // printing elements of an array
    for(int i = 0; i < n; ++i) 
    {
    printf("%d\n", a[i]);
    }
 
    printf("\nEnter the position to delete the element: ");
    int pos;
    scanf("%d", &pos);
    // Delete the value at the specified position
    delete(a, &n, pos);

    printf("\nArray after deletion: ");
    for (int i = 0; i < n; ++i)
    {
        printf("%d\n", a[i]);
    }
	printf("\n");
    return 0;
}
