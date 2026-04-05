// Insertion Example
#include <stdio.h>

void insert(int arr[], int *n, int pos, int value) 
{
    for (int i = *n; i > pos; i--) 
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    (*n)++;
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
    
    printf("\nInputed integers: ");
    // printing elements of an array
    for(int i = 0; i < n; ++i) 
    {
    printf("%d\n", a[i]);
    }
 
    printf("\nEnter the position to insert the element: ");
    int pos;
    scanf("%d", &pos);

    printf("\nEnter the value to insert: ");
    int val;
    scanf("%d", &val);

    // Insert the value at the specified position
    insert(a, &n, pos, val);

        printf("\nArray after insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
	printf("\n");
    return 0;
}
