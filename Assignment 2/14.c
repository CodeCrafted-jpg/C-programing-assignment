//  Write a program in C to insert New value in the array at any given position.
#include <stdio.h>

int main()
{
    int arr[100], n, value, pos;
    printf("Enter the no. of elements you want in your array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter a value you want to insert in the array:\n");
    scanf("%d", &value);
    printf("Enter the positon  you want to insert the value  in the array:\n");
    scanf("%d", &pos);

    if (pos>n)
    {
       printf("invalid position");
       
    }
    

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