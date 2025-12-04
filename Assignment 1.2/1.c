#include <stdio.h>

int main() {
    int num, temp;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;

    printf("Digits (Right to Left): ");
    while (temp > 0) {
        int digit = temp % 10;     
        printf("%d ", digit);
        temp = temp / 10;          
    }

    temp = num;

    int divisor = 1;
    while (temp / divisor >= 10) {
        divisor *= 10;
    }

    printf("\nDigits (Left to Right): ");
    while (divisor > 0) {
        int digit = temp / divisor;  
        printf("%d ", digit);
        temp = temp % divisor;       
        divisor /= 10;
    }

    return 0;
}
