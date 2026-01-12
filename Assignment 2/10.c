// 10. Write a program in C to separate odd and even integers in separate arrays.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int even[100],odd[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     
    printf("Even Elements in the array are:\n ");
     for ( i = 0; i < n; i++)
     {
        if (arr[i]%2==0)
        {
            even[i]=arr[i];
            printf("%d ",even[i]);
        }
     
        
     }
        
    printf("\nodd Elements in the array are: ");
    for ( i = 0; i < n; i++)
    {
         if(arr[i]%2!=0){
            odd[i]=arr[i];
            printf("%d ",odd[i]);
        }
    }
    
     
return 0;
}