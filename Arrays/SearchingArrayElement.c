#include <stdio.h>

void search(int arr[], int n, int key)
{
    int found = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Found at arr[%d]\n", i);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Not found\n");
    }
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

    printf("\nEnter value to search: ");
    int key;
    scanf("%d", &key);
    search(a, n, key);

    return 0;
}
