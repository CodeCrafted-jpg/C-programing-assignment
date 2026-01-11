// 1. Write a program in C to store elements in an array and print it
#include <stdio.h>
int main(){
    int arr[100], n, i;
     printf("Enter the number of elements: ");
    scanf("%d", &n);

  
    printf("Enter %d elements:\n", n);
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Here are the elements you entered: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}