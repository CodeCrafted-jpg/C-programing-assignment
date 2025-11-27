//write a c program to find the sum of 5 elements in an array.taking the user input of double types element

#include <stdio.h>

int main() {
    double arr[5], sum = 0;
    int i;

    
    printf("Enter 5 double values:\n");
    for (i = 0; i < 5; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

   
    printf("\nSum of the array elements = %.2lf\n", sum);

    return 0;
}

