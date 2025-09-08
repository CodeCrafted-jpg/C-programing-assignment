#include <stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Input number of terms: ");
    scanf("%d", &n);

    printf("The odd numbers are: ");
    for(i = 1; i <= n; i++) {
        int odd = 2 * i - 1;  
        printf("%d ", odd);
        sum += odd;
    }

    printf("\nThe Sum of odd Natural Number upto %d terms : %d\n", n, sum);

    return 0;
}
