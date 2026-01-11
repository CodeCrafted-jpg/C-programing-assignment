// 4. Write a program in C to copy the elements of one array into another array
#include <stdio.h>
int main(){
    int arr[100], n, i,arr2[100];
     printf("Enter the number of elements: ");
    scanf("%d", &n);

  
    printf("Enter %d elements:\n", n);
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Coping array to another array : ");

    for ( i = 0; i < n; i++)
    {
        arr2[i]=arr[i];
        printf("%d ", arr2[i] );
    }
    
}