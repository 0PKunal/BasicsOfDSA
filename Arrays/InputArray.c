
// Program to take values of the array from the user and print the array

#include <stdio.h>
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
 
 printf("\nDisplaying integers: ");
 // printing elements of an array
 for(int i = 0; i < n; ++i) 
 {
 printf("%d\n", a[i]);
 }
 return 0;
}
