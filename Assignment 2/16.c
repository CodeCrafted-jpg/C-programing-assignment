// 16. Write a program in C to find the second largest element in an array.
#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max,sec_lar;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
      
    }


    for (int i = 0; i < n; i++)
    {
        if (arr[i]<max && arr[i]>arr[i+1] );
        {
            sec_lar=arr[i];
            printf("%d", sec_lar);
            return 0;
        }
        
    }
    
 
}