// . Write a program in C to insert New value in the sorted array.

#include <stdio.h>

int main(){
    int arr[100],n, temp, value,pos;
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
      printf("Enter a value you want to insert in the array:\n");
      scanf("%d", &value);

      for (int i = 0; i < n; i++) {
        if (value < arr[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value
    arr[pos] = value;
    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
  
    




}