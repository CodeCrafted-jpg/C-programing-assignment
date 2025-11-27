//write a c program to store 10 int types of element and display the elements of an array

#include <stdio.h>

int main() {
    int arr[10];
    int i;

   
    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }


    printf("\nThe array elements are:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
