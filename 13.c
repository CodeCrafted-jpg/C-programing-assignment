#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are:\n", n);

    while (i <= n) {
        printf("%d\n", i);
        sum = sum + i; 
        i++;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
