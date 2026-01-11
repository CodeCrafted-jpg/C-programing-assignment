// Write a program in C to print all unique elements in an array.

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

    printf("All unique elements are: ");
    for ( i = 0; i < n; i++)
    {
        if (arr[i]!=arr[i+1])
        {
           printf("%d " ,arr[i]);
        }
        
    }
   
}