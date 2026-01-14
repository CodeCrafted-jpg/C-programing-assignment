// Write a program in C to sort elements of array in ascending order.
#include <stdio.h>

int main(){
    int arr[100],n, temp;
     printf ("Enter the no. of elements you want in your array: ");
     scanf("%d", &n);

 printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for ( int j = i+1; j < n; j++)
        {
         if (arr[i]>arr[j])
         {
             temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

         }
         
        }
        
    }
      printf("Array elements in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    




}